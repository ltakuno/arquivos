# 2540 - Impeachment do lider

try:
    while True:
        n = int(input())
        total = sum(list(map(int, input().split())))
        if total >= 2/3 * n:
            print('impeachment')
        else:
            print('acusacao arquivada')
except EOFError:
    pass
