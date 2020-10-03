arr1 = [2,4,5,7,8,10,12]
arr2 = [1,2,3,6,12]
common = []
for num in arr1:
	if num in arr2:
		common.append(num)
print(common)
