def func1(n):
    total = 0
    while n > 0:
        total = total + func2(n)
        n = n - 1
    return total

def func2(x):
    return 2*x

print(func1(10))
