# 1478 - matriz quadrada II


n = int(input())

while(n):
    for i in range(n):
        for j in range(n):
            v = (i-j+1) 
            v = v if v > 0 else -1 * v + 2
            if (j == 0):
                print("{:3d}".format(v), end="")
            else:
                print(" {:3d}".format(v), end="")
        print()
    print()
    n = int(input())


