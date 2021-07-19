# 2724 - ajude patatatitu

import re

def verifica_elementos(perigoso, experiencia):
    v_perigoso = list(filter(None, re.split('([A-Z][a-z]?)|(\d+)', perigoso.strip())))
    v_experiencia = list(filter(None, re.split('([A-Z][a-z]?)|(\d+)', experiencia.strip())))
    tam = len(v_perigoso)

    if not v_perigoso[tam-1].isdigit() and len(v_experiencia) > tam and v_experiencia[tam].isdigit():
        return False    

    for i in range(len(v_perigoso)):
        if v_perigoso[i] != v_experiencia[i]:
            return False

    return True



def main():
    n = int(input())
    for i in range(n):
        t = int(input())
        perigosos = []
        for _ in range(t):
            perigosos.append(input())
        if i > 0:
            print()

        u = int(input())
        for _ in range(u):
            experiencia = input()
            abortar = False
            for perigoso in perigosos:
                if len(perigoso) <= len(experiencia):
                    pos = experiencia.find(perigoso)
                    if pos >= 0:
                        if verifica_elementos(perigoso, experiencia[pos:]):                    
                            abortar = True
                            break
            if abortar:
                print('Abortar')
            else:
                print('Prossiga')

main()



