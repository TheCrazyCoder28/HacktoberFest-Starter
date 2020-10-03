arr = [3,5,2,8,23,4,7,12]
int = int(input("Enter integer Point : "))
dist = {}
for num in arr:
	dist[num] = abs(int-num)
dist = dict(sorted(dist.items(), key=lambda x: x[1]))
print(dist.keys())
