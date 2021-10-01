def decrypt(text,s): 
	result = ""
	# traverse through text 
	for i in range(len(text)): 
		char = text[i] 
		# Decrypt uppercase characters 
		if (char.isupper()): 
			result += chr((ord(char) - s-65) % 26 + 65) 
		# Decrypt lowercase characters 
		else: 
			result += chr((ord(char) - s-97) % 26 + 97) 
	return result 
#check the above function 
text = "VRRQS"
for s in range(0,26):
    decrypted = decrypt(text,s)
    #print(decrypted)
    print("Plain text {} with {} shifts is {}".format(text,s,decrypted))















