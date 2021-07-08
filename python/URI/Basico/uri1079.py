n = int(input())

while(n > 0):
    a, b, c = map(float, input().split())
    print("{:.1f}".format((a*2 + b*3 + c*5)/10.0))
    n -= 1
