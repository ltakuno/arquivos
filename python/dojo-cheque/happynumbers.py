def sum_of_squares(n):
    return sum(int(c) ** 2 for c in str(n))
    
def happy(num):
    box = []
    n = num
    while n != 1 and n not in box:
        box.append(n)
        n = sum_of_squares(n)

    return n == 1

def happy1(num):
    if num < 10:
        return num in (1, 7) 
    return happy1(sum_of_squares(num))


def happy2(num):
    return num in (1, 7) if num < 10 else happy1(sum(int(c) ** 2 for c in str(num)))


assert sum_of_squares(130) == 10
assert happy(1) == True
assert happy(10) == True
assert happy(100) == True
assert happy(4) == False 
assert happy(130) == True

assert all(happy1(n) for n in (1, 10, 100, 130, 97))
assert not all (happy1(n) for n in (2, 3, 4, 5, 6, 8, 9))

assert all(happy2(n) for n in (1, 10, 100, 130, 97))
#assert not all (happy2(n) for n in (2, 3, 4, 5, 6, 8, 9))
