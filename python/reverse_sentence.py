sen = input("Enter a sentence to reverse it ")
reverse = ""
for word in sen.split():
	reverse += word[::-1]+" "
reverse = reverse[:-1]
print(reverse)
