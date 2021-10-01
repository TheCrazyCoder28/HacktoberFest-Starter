runs = [1,2,4,1,3,1,1,4,6,0,0,1,1,1,2,1,0,6,0,0,1,2,1,0,0,4,0,1,0]
#Let dravid be '0' and sachin is '1' in the list
scores = [0,0]
balls = 0
stricker = 0
for ball in runs:
	scores[stricker]+=ball
	if(ball%2==1):
		stricker = (stricker+1)%2
#		print("Stricke changed due to odd runs")
	balls += 1
	if(balls==6):
		stricker = (stricker+1)%2
		balls = 0
#		print("Stricke changed due to overs")
print(scores)
