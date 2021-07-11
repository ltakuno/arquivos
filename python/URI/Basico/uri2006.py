# 2006 - Identificando o chá

n = int(input())
v = list(map(int, input().split()))
total = len(list(filter(lambda m : m == n, v)))
print(total)
