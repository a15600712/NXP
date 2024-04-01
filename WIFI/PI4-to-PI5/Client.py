import socket


# 設定伺服器的 IP 位址與通訊埠
host = '192.168.137.24'
port = 12345


# 建立 socket 物件
client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)


# 連線至伺服器
client_socket.connect((host, port))


# 傳送資料給伺服器
client_socket.sendall("1".encode())


# 關閉連線
client_socket.close()
