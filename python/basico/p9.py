def funcX(n):
    if n == 0:
        return 0
    else:
        return funcX(n-1) + n 


print(funcX(5))
