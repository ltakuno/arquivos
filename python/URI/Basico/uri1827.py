# 1827 - matriz quadrada IV

import sys
try:
    while True:
        n = int(input())
        for i in range(n):
            for j in range(n):
                if (i == n//2 and j == n//2 and n%2 == 1):
                    print(4, end = "")
                elif (i == n//2-1 or i == n//2) and (j == n//2-1 or j == n//2) and (n%2 == 0):
                    print(4, end = "")
                elif (i >= n//3 and i < n - n//3 and 
                      j >= n//3 and j < n - n//3):
                    print(1, end = "")
                elif (i == j):
                    print(2, end = "")
                elif (i == n - j - 1):
                    print(3, end = "")
                else:
                    print(0, end = "")
            print()
        print()



except EOFError:
  pass
