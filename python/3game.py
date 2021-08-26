import random

# Snake Water Game's Code
def snake():
    comp = None
    # Making the COmputers Guess
    randomno = random.randint(1, 3)
    a = None
    if (randomno == 1):
        comp = "S"
    elif (randomno == 2):
        comp = "W"
    elif (randomno == 3):
        comp = "G"
    # Taking the Players Guess
    playergs = input("Your turn Snake [S] Water [W] and Gun [G]:")

    if (playergs == comp):
        print("It is a DRAW ")
        print("\n Thanks For Playing ")

    elif (comp == "S" and playergs == "W"):
        print("You Loose ")
        print("\nThanks For Playing ")

    elif (comp == "W" and playergs == "G"):
        print("You Loose ")
        print("\nThanks For Playing ")

    elif (comp == "G" and playergs == "S"):
        print("You Loose ")
        print("\nThanks For Playing ")

    else:
        print("You Win")
        print("\nThanks For Playing ")

# Rock Paper Scissors Code
def rock():
    rcomp = None

    randomno = random.randint(1, 3)
    a = None
    if (randomno == 1):
        rcomp = "R"
    elif (randomno == 2):
        rcomp = "P"
    elif (randomno == 3):
        rcomp = "S"

     # Taking the Players Guess
    playergs = input("Your turn Rock [R] Paper [P] and Scissors [S]:")

    if (playergs == rcomp):
        print("It is a DRAW ")
        print("\n Thanks For Playing ")

    elif (rcomp == "R" and playergs == "P"):
        print("You Win ")
        print("\nThanks For Playing ")

    elif (rcomp == "P" and playergs == "S"):
        print("You Win ")
        print("\nThanks For Playing ")

    elif (rcomp == "S" and playergs == "R"):
        print("You Win ")
        print("\nThanks For Playing ")

    else:
        print("You Loose")
        print("\nThanks For Playing ")

# The Number Game
def number():
    randomNo = random.randint(1, 100)

    guesses = 0
    num = None  # Making num as None so that it does not throw error in the loop saying that num is not defined

    while num != randomNo:
        guesses = guesses+1
        num = int(input("Enter the Number:"))

        if randomNo > num:
            print("Enter a Greater Number")
        elif randomNo < num:
            print("Enter a Lower Number")
        else:
            print("You Win")
            print("The Number of Guesses you have taken is ", guesses)
            break

        if guesses == 6:
            print("You Loose ")
            print(f"The Number the Computer had Choosen was {randomNo}")
            break

#  Main Body of the Code
def ifc():

    pchoice = input("What Game Do you want to play for Enter \'S\' or else If you want to play Rock Paper Scissors Enter \'R\' or if Do you want to play Guess the Number Enter \'G\':")
    if (pchoice == "S"):
        snake()
    elif (pchoice == "R"):
        rock()
    elif (pchoice == "G"):
        number()
    else:
        print("Please Enter a valid option\n")
        ifc()
    plono = input("Do you want to play again any game Yes [Y] or No [N]")

    if (plono == "Y"):
        ifc()
    elif (plono == "N"):
        print("Thank you for playing\n")


ifc()
