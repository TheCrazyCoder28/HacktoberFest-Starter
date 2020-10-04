import math


def noofsquares(base):
    squares_at_base = math.floor((base - 2) / 2)
    print(squares_at_base)
    print(int((squares_at_base * (squares_at_base + 1)) / 2))


num = int(input())

for i in range(0, num):
    base = int(input())
    noofsquares(base)
