v = list(map(int, input().split()))
v1 = v.copy()
v1.sort()

for e in v1:
    print(e)

print()

for e in v:
    print(e)
