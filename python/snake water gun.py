import random
import time

#1=Snake
#2=Water
#3=Gun
while True:
	print("Snake Water Gun\n")
	
	print("You vs Computer\n")
	player_won=0
	computer_won=0
	times=0
	while times<10:
	
		print("Enter 1 to choose Snake\n")
		print("Enter 2 to choose Water\n")
		print("Enter 3 to choose Gun\n")
		while True:
			
			#player chance
			print("Your chance\n")

			player_choose= int(input())
			print("\n")
			
			if player_choose==1 or player_choose==2 or player_choose==3:
				break
			else:
				print("Plz input correct no.\n")
			print("Enter 1 to choose Snake\n")
			print("Enter 2 to choose Water\n")
			print("Enter 3 to choose Gun\n")
		
		#Computer Chance
		print("Computer chance\n")
		print("Computer is choosing...\n")
		time.sleep(3)
		computer_choose=random.randint(1,3)
		print("Computer choosed",computer_choose,"\n")
		
		time.sleep(1)
		
		if player_choose==1 and computer_choose==2:
			print("You won because You choosed Snake and Computer choosed Water\n")
			player_won+=1
			
		elif player_choose==2 and computer_choose==3:
			print("You won because You choosed Water and Computer choosed Gun\n")
			player_won+=1
		elif player_choose==3 and computer_choose==1:
			print("You won because You choosed Gun and Computer choosed Snake\n")
			player_won+=1
		
		elif computer_choose==1 and player_choose==2:
			print("Computer won because Computer choosed Snake and You choosed Water\n")
			computer_won+=1
			
		elif computer_choose==2 and player_choose==3:
			print("Computer won because Computer choosed Water and You choosed Gun\n")
			computer_won+=1
			
		elif computer_choose==3 and player_choose==1:
			print("Computer won because Computer choosed Gun and You choosed Snake\n")
			computer_won+=1
		else:
			print("Tie\n")
			print("Because You both Chossed same\n")
		times+=1
		print("Rounds left",10-times,"\n")
	
	print("\nResults\n")
	time.sleep(2)
	print("You won:",player_won,"times\n")
	print("Computer won:",computer_won,"times\n")
	
	time.sleep(1)
	if player_won>computer_won:
		print("You Won the Game\n")
		
	elif computer_won>player_won:
		print("Computer Won the Game\n")
		
	else:
		print("Tie\n")
	
	print("\nPlay Again\n")
	print("Do You want to Play again\n")
	print("Enter 1 to play again or Enter 2 to Exit\n")
	play_again=input()
	print("\n")
	if play_again=="2" or play_again=="exit":
		print("😭😭😭\n")
		print("Why are you exiting😭😭😭\n")
		print("But plz come again to play🥺🥺🥺\n")
		break
		
	time.sleep(2)
