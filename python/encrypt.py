def encrypt(filename,letter_1,letter_2):
    #Open specified file for reading 
    with open(filename,'r+') as file:
        #Read whole contents of file
        text = file.read()
        file.close()
    print(text)
    #Encrypt by replacing letter1 with letter2
    enc_text = text.replace(letter_1,letter_2)
    #open file for writing
    with open(filename,'w') as file:
        #Write encrypted text
        file.write(enc_text)
        file.close()
    print("Plain text is {} \nAfter encryption {}\n".format(text,enc_text))

def main():
    #Get input from user
    filename = input("Enter filename: ")
    letter_1 = input("Enter letter1: ")
    letter_2 = input("Enter letter2: ")
    #call function with parameters
    encrypt(filename,letter_1,letter_2)

if __name__ == "__main__":
    main()














    