import numpy as np
import cv2

criteria = (cv2.TERM_CRITERIA_EPS + cv2.TERM_CRITERIA_MAX_ITER, 30, 0.001)

objp = np.zeros((6*7,3), np.float32)
objp[:,:2] = np.mgrid[0:7,0:6].T.reshape(-1,2)

objpoints = []
imgpoints = []
amount = 0
gray = None

cap = cv2.VideoCapture(0)

while True:
    _, img = cap.read()
    gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
    
    ret, corners = cv2.findChessboardCorners(gray, (7,6), None)
    
    if ret == True:
        amount += 1
        objpoints.append(objp)
        corners2 = cv2.cornerSubPix(gray,corners, (11,11), (-1,-1), criteria)
        imgpoints.append(corners)
        
        cv2.drawChessboardCorners(img, (7,6), corners2, ret)
        
    cv2.imshow('Calibration - "q" to finish', img)
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

cv2.destroyAllWindows()

print("\nTracked Amount: " + str(amount))
print("Calibrating...\n")

ret, mtx, dist, rvecs, tvecs = cv2.calibrateCamera(objpoints, imgpoints, gray.shape[::-1], None, None)

print("\nCalibration success!\n")
print("Camera Matrix:", mtx)
print("Distortion Coefficients:", dist)

print("\nOptimizing camera matrix...\n")

h, w = gray.shape[:2]
newcameramtx, roi = cv2.getOptimalNewCameraMatrix(mtx, dist, (w,h), 1, (w,h))

print("\nOptimization finished!")
print("Optimized Camera Matrix:", newcameramtx)

print("\n\nCalibration process completed.")