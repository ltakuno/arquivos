# -*- coding: utf-8 -*-
while True:
    try:
        enter=input()
        enter=enter.split()
        a,b=int(enter[0]),int(enter[1])
        q = a // b
        r = a % b
        if (r < 0):
            r = r - b
            q = (a-r)/b
    
        print("%d %d" % (q, r))
    except:
        break
