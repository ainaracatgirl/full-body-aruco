import numpy as np
import cv2
import cv2.aruco as aruco
import shape_util as su
import network_util as nu


# Ch Table
chtable = {
    10: b'h',
    11: b'h',
    12: b'h',
    13: b'h',
    20: b'l',
    21: b'l',
    22: b'l',
    30: b'r',
    31: b'r',
    32: b'r'
}
chtable_r = {
    10: 0,
    20: 0,
    30: 0,
    
    11: 360 / 4 * -1,
    12: 360 / 4 * 1,
    13: 360 / 4 * 2,
    
    21: 360 / 4 * -1,
    22: 360 / 4 * 1,
    
    31: 360 / 4 * -1,
    32: 360 / 4 * 1,
}

# Camera Matrix, Get it from "calibrate.py"
CM = np.matrix([[813.7336749,    0.,         236.02752137],
 [  0.,         815.73606713, 257.66813526],
 [  0.,           0.,           1.        ]])
DC = np.matrix([[ 0.05825329, -0.39899946, -0.01162725, -0.02146933,  0.85057875]])


# Find ArUco markers on the image
def find_aruco_markers(img, marker_size=6, total_markers=250, draw=True):
    gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)

    key = getattr(aruco, f'DICT_{marker_size}X{marker_size}_{total_markers}')
    aruco_dict = aruco.Dictionary_get(key)
    aruco_params = aruco.DetectorParameters_create()
    bboxs, ids, rejected = aruco.detectMarkers(gray, aruco_dict, parameters=aruco_params, cameraMatrix=CM, distCoeff=DC)

    if draw:
        aruco.drawDetectedMarkers(img, bboxs)

    return bboxs, ids


# Augment the markers on the image, returns a tuple: (new_image, translation, rotation)
def augment_marker(bbox, img, img_aug):
    tl = bbox[0][0][0], bbox[0][0][1]
    tr = bbox[0][1][0], bbox[0][1][1]
    br = bbox[0][2][0], bbox[0][2][1]
    bl = bbox[0][3][0], bbox[0][3][1]

    h, w, c = img_aug.shape

    pts1 = np.array([tl, tr, br, bl])
    pts2 = np.float32([[0, 0], [w, 0], [w, h], [0, h]])
    matrix, _ = cv2.findHomography(pts2, pts1)

    (R, T) = su.decHomography(CM, matrix)
    trans = (T[0, 0], T[0, 1], T[0, 2])
    rot = su.decRotation(R)

    img_out = cv2.warpPerspective(img_aug, matrix, (img.shape[1], img.shape[0]))
    cv2.fillConvexPoly(img, pts1.astype(int), (0, 0, 0))
    return img + img_out, trans, rot


# Estimate pose
def estimate_pose(bbox):
    rvec, tvec, markerPoints = aruco.estimatePoseSingleMarkers(bbox, 0.02, CM, DC)
    return tvec, rvec


# Program entry point
def main():
    # Initialize the VideoCapture
    cap = cv2.VideoCapture(0, cv2.CAP_DSHOW)
    cap.set(cv2.CAP_PROP_FRAME_WIDTH, 640)
    cap.set(cv2.CAP_PROP_FRAME_HEIGHT, 480)
    cap.set(cv2.CAP_PROP_AUTO_EXPOSURE, 0)
    cap.set(cv2.CAP_PROP_EXPOSURE, -8)
    cap.set(cv2.CAP_PROP_FPS, 90)
        
    # Read the tracker augmented image
    yellowsq = cv2.imread("squares/yellowsq.png")
    redsq = cv2.imread("squares/redsq.png")
    bluesq = cv2.imread("squares/bluesq.png")
    greensq = cv2.imread("squares/greensq.png")

    # Track until Ctrl+C
    while True:
        # Grab a frame
        _, img = cap.read()

        # Find ArUco markers
        bboxs, ids = find_aruco_markers(img)
        for i in range(len(bboxs)):
            # Get the correct marker color by ID
            sq = yellowsq
            if ids[i][0] >= 40:
                sq = yellowsq
            elif ids[i][0] >= 30:
                sq = greensq
            elif ids[i][0] >= 20:
                sq = bluesq
            elif ids[i][0] >= 10:
                sq = redsq

            # Augment the markers
            img, _, _ = augment_marker(bboxs[i], img, sq)
            t, r = estimate_pose(bboxs[i])
            t = t[0][0]
            r = r[0][0]
            if ids[i][0] in chtable:
                ch = chtable[ids[i][0]]
                rr = [0, r[1] + chtable_r[ids[i][0]] / 90, 0]
                nu.send(ch, t, rr)

        # Show the result
        cv2.imshow("Full Body ArUco - Tracking", img)
        if cv2.waitKey(1) & 0xFF == ord('q'):
            break


if __name__ == '__main__':
    main()
