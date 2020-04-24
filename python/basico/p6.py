def funcA(n):
    if (n == 1):
        return 0 
    else:
        return funcA(n/2) + 1

print(funcA(1024))
