exp = input("Enter Your Expression : ")

try:
    print("Answer: " + str(eval(exp)))
except:
    print("Invalid input, check your expression.")
