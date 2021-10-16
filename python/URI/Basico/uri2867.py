# 2867 - Digitos

n = int(input())
for _ in range(n):
    a, b = map(int, input().split())
    print(len(str(a**b)))
