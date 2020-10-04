length = int(input())
triangle = []
sum = 0
index = 0
for i in range(0,length):
	new_tri = list(map(int,input().split()))
	if(i==0 or i==1):
		sum += new_tri[0]
	else:
		index = index if new_tri[index]>new_tri[index+1] else index+1
		large = new_tri[index]
		sum += large
	triangle.append(new_tri)
#	print(sum)
print(sum)
