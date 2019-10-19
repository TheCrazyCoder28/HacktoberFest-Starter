def BubbleSort(array):
	for i in range(len(array)):
		for j in range(0,len(array)-i-1):
			if(array[j] > array[j+1]):
				array[j], array[j+1] = array[j+1], array[j]
#Testing
array = [5,2,-1,23,-51,27,76,-33]
print("Before sort: ")
print(*array,sep=", ")
BubbleSort(array)
print("After sort: ")
print(*array,sep=", ")