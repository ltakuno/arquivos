# 2663 - fase

n = int(input())
k = int(input())
pontos = []
for _ in range(n):
    pontos.append(int(input()))

pontos.sort(reverse=True)

cont = k
i = k 
while i < n and pontos[i] == pontos[k-1]:
    cont += 1
    i += 1

print(cont)

