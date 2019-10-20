import time

def f1(list):
    s = '' 
    for item in list:
        s = s + chr(item)
    return s


def f2(list):
    return reduce(lambda string, item: string + chr(item), list, "")

def f3(list):
    s = ""
    for character in map(chr, list):
        s = s + character
    return s

def f4(list):
    string = ""
    lchr = chr
    for item in list:
        string = string + lchr(item)
    return string


start = time.time()
print(f4([48,49,50,51,52,53,54,55,56,57,48,49,50,51,52,53,54,55,56,57, 48,49,50,51,52,53,54,55,56,57]))
end = time.time()
execution_time = end - start

print(" %0.3f ms    " % (execution_time * 1000.))
print(" %s segundos " % (execution_time))
print(" %s minutos  " % (execution_time / 60))
