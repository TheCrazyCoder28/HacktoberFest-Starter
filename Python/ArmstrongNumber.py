#PYTHON PROGRAM FOR ARMSTRONG NUMBER CHECKING
#take input from user
from math import *
a = int(input("Enter the number : "))
r = 0
y = 0
t = a;
while (t!= 0):
    t =int(t / 10)
    y = y+ 1

#Check ifnumber is armstrong
t = a
while (t != 0):
    rem = t % 10
    r = r + pow(rem, y)
    t = int(t/10)
if(r == a):
    print("Armstrong number")
else:
    print("Not an Armstrong number")
