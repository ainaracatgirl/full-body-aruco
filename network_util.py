import socket
import struct
from datetime import timezone, datetime

UDP_IP = "127.0.0.1"
UDP_PORT = 3869
sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

# Setup the communication using "timestamp = 0"
smsg = struct.pack('<Qcffffff', 0, b'h', 0, 0, 0, 0, 0, 0)
sock.sendto(smsg, (UDP_IP, UDP_PORT))
smsg = struct.pack('<Qcffffff', 0, b'l', 0, 0, 0, 0, 0, 0)
sock.sendto(smsg, (UDP_IP, UDP_PORT))
smsg = struct.pack('<Qcffffff', 0, b'r', 0, 0, 0, 0, 0, 0)
sock.sendto(smsg, (UDP_IP, UDP_PORT))


def send(ch, t, r):
    global sock, UDP_PORT, UDP_IP
    tstamp = int(datetime.now(tz=timezone.utc).timestamp() * 1000)
    message = struct.pack('<Qcffffff', tstamp, ch, r[0], r[1], r[2], t[0], t[1], t[2])
    sock.sendto(message, (UDP_IP, UDP_PORT))
