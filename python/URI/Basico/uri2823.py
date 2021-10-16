# 2823 - Earliest Deadline First
n = int(input())
cont = 0
for _ in range(n):
    c, p = map(int, input().split())
    cont += c/p

if cont <= 1:
    print('OK')
else:
    print('FAIL')

