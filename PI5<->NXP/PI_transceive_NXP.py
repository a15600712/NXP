import serial
import time

# Initialize serial device
ser = serial.Serial(
    port='/dev/ttyAMA0',  # This should match the UART port identifier found earlier ttyAMA0 is the GPIO UART  ttyAMA10 is  debug UART
    baudrate=115200,        # Set the baud rate
    parity=serial.PARITY_NONE,
    stopbits=serial.STOPBITS_ONE,
    bytesize=serial.EIGHTBITS,
    timeout=1             # Set a read timeout
)

try:
    ser.write(b'Return\r\n')  # Data must be sent as bytes must end with \r\n not just \n
    print("Data sent")
    
    while True:
        if ser.in_waiting > 0:
            incoming_data = ser.readline().decode('utf-8')  # Read data from the buffer
            print("Received:", incoming_data)
            break  # Exit loop after reading the data
        time.sleep(0.1)  # Check for new data every 100 ms
finally:
    ser.close()  # Always close the port to ensure no leaks

