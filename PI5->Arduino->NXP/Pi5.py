import smbus
import time




address = 0x08  
bus = smbus.SMBus(1)  




def writeData(value):
    bus.write_byte(address, value)  
    return -1




while True:
    data = int(input("Enter a num to send: "))
    if data == 0:
        break
    writeData(data)
    time.sleep(0.1)


