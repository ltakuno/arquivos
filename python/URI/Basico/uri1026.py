# 1026 - carrega ou nao carrega


while True:
    try:
        a, b = map(int, input().split())
        #c = 0
        #for i in range(32):
        #    b1 = (a >> (31-i)) & 0x01
        #    b2 = (b >> (31-i)) & 0x01 
        #    c <<= 1
        #    c = c | (0 if (b1 and  b2) else b1 | b2)
        c = a ^ b
        print("{}".format(c & 0xffffffff))
    except EOFError:
        break

