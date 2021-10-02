import functools
lis1 = [ 100 , 35, 2, 70, 18, 30]
lis2 = [ 15 , 4, 45, 6, 55, 120]
mean1=functools.reduce(lambda x,y:x+y,lis1)/6
variance1=sum([((x - mean1) ** 2) for x in lis1]) / len(lis1)
res1 = variance1 ** 0.5
mean2=functools.reduce(lambda x,y:x+y,lis2)/6
variance2=sum([((x - mean2) ** 2) for x in lis2]) / len(lis2)
res2 = variance2 ** 0.5

if(res1<res2):
    print("Player 1 is better!")
else:
    print("Player 2 is better!")
