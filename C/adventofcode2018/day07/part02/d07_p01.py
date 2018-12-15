from collections import defaultdict

E = defaultdict(list)
D = defaultdict(int)
for line in open('input.txt'):
	words = line.split()
	x = words[1]
	y = words[7]
	E[x].append(y)
	D[y] += 1

Q = [] 
for k in E:
	if D[k] == 0:
		Q.append(k)

ans = ""
while Q:
	x = sorted(Q)[0]
	Q = [y for y in Q if y != x]
	ans += x
	for y in E[x]:
		D[y] -= 1
		if D[y] == 0:
			Q.append(y)
print ans
