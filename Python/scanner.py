import sys
import socket
from datetime import datetime
 
#MAX PORTS 1000 change this as per desired
MAX_PORTS = 1000

if len(sys.argv)==2:
	target = socket.gethostbyname(sys.argv[1])
else:
	print("invalid arguments")
	print("Syntax: python3 scanner.py <ip>")
	sys.exit()

print("-"*50)
print("Started scanning target "+target)
print("Start time : "+str(datetime.now()))
print("-"*50)


try:
	for port in range(50,MAX_PORTS):
		s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
		socket.setdefaulttimeout(1)
		result = s.connect_ex((target,port))
		print("Checking port {}".format(port))		
		if(result==0):
			print("Port {} is open".format(port))
		s.close()
except KeyboardInterrupt:
	print("\nExiting program.")
	sys.exit()

except socket.gaierror():
	print("Hostname could not be resolved")
	sys.exit()

except socket.error:
	print("Couldn't connect to server")
	sys.exit()
