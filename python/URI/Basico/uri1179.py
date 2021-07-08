# 1179 - preenchimento do vetor IV

def imprima(v):
    s = "par" if v[0] % 2 == 0 else "impar"
    for i in range(len(v)):
        print("{}[{}] = {}".format(s, i, v[i]))

def main():
    par = []
    impar = []
    for k in range(15):
        v = int(input())

        if (v % 2 == 0):
            par.append(v)
        else:
            impar.append(v)


        if len(impar) == 5:
            imprima(impar)
            impar.clear()


        if len(par) == 5:
            imprima(par)
            par.clear()


    imprima(impar)
    imprima(par)

main()
