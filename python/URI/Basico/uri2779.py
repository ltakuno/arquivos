# 2779 - album da copa

n = int(input())
m = int(input())
figuras = set() 
for _ in range(m):
    figuras.add(int(input()))

print(n - len(figuras))



