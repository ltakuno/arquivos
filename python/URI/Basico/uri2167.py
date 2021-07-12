# 2167 - falha do motor

n = int(input())
r = list(map(int, input().split()))

ocorreu_queda = False
for i in range(1, n):
    if (r[i-1] > r[i]):
        print(i+1)
        ocorreu_queda = True
        break

if not ocorreu_queda:
    print(0)
