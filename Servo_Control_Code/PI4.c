import RPi.GPIO as GPIO
import time


GPIO.setmode(GPIO.BOARD)


GPIO.setup(11, GPIO.OUT)  # Corrected to use the physical pin number
servo1 = GPIO.PWM(11, 50)  # Using physical pin 11 for PWM


servo1.start(0)
time.sleep(0.05)


servo1.ChangeDutyCycle(12)
time.sleep(1)


servo1.ChangeDutyCycle(2)
time.sleep(1)


servo1.ChangeDutyCycle(0)


# Clean things up at the end
servo1.stop()
GPIO.cleanup()
print("Goodbye")
