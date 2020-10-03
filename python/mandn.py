# code
def mandn(m, n):
    s = m + n
    if(len(str(s)) == len(str(n))):
        print(n)
    else:
        print(s)


no = int(input())

for i in range(0, no):
    m, n = map(int, input().split())
    mandn(m, n)
