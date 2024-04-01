import smbus
import time
import socket




def writeData(value):
    bus.write_byte(address, value)  
    return -1




host = '192.168.137.24'
port = 12345
address = 0x08  
bus = smbus.SMBus(1)  


server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)


# 綁定 IP 位址與通訊埠
server_socket.bind((host, port))


# 設定最大等待連線數
server_socket.listen(5)


print("等待客戶端連線...")


# 接受客戶端連線
client_socket, addr = server_socket.accept()
print("客戶端已連線：", addr)


# 接收客戶端傳送的資料
data = client_socket.recv(1024)
print("接收到的資料：", data.decode())
data=data.decode()
if data == "1":
    writeData(int("1"))


# 關閉連線
client_socket.close()
server_socket.close()


