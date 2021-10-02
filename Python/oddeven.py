# Python program to check if the input number is odd or even.
# A number is even if division by 2 gives a remainder of 0.
# If the remainder is 1, it is an odd number.

while True:
    try:
        num = int(input("Enter a number: "))
        if (num % 2) == 0:
            print(f"{num} is Even")
            print("=============================")
            a=input("Enter 'y' for using the program again: ")
            if a.lower() == "y":
                continue
            else:
                break
        else:
            print(f"{num} is Odd")
            print("=============================")
            a=input("Enter 'y' for using the program again: ")
            if a.lower() == "y":
                continue
            else:
                break
    except ValueError:
        print("Enter a valid number")
print("Thanks for using our program :)")
