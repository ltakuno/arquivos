def sieve(n):
    numbers = set(range(2,n+1))
    while numbers:
        p = min(numbers)
        print(p, end=' ')
        for m in range(1, int(n/p)+1):
            if m*p in numbers:
                numbers.remove(m*p)
    print()

sieve(100)