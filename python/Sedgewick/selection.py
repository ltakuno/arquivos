def selection(a, n):
    for i in range(0, n-1):
        min = i
        for j in range(i+1, n):
                if (a[j] < a[min]):
                    min = j
        t = a[min]
        a[min] = a[i]
        a[i] = t

a = [4, 3, 1, 2]
selection(a, 4)
print(a)

