import serial
arduino = serial.Serial(port='COM3', baudrate=115200, timeout=.1)
def write_data(x):
arduino.write(bytes(x, 'utf-8'))
time.sleep(0.05)
data = arduino.readline()
return data
global value #value = 0
if(value == "12"):
write_data("0")
value = "0" if
show_label:
value = write_data('11')