num = int(input("Enter the Number you Want the multiplication table of:"))


for i in range(1,11):
    print(str(num)+"X" + str(i)+"="+str(i*num))
    i = i+1
