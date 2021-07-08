# 1116 - dividindo x por y
n = int(input())

while(n):
    x, y = map(int, input().split())
    if (y == 0):
        print("divisao impossivel")
    else:
        print("{:.1f}".format(float(x)/float(y)))
    n -= 1
