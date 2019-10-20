import timeit

t1 = timeit.default_timer()
print (t1)

for i in range(1000000):
    print(i)

t2 = timeit.default_timer()
print(t2 - t1)
