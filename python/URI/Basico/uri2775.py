# 2775 - preparando a produçao
import sys

def conta_intercala(A, p, q, r, tempo, B, T):
    for i in range(p, q+1):
        B[i] = A[i]
        T[i] = tempo[i]
    for j in range(q+1, r+1):
        B[r + q + 1 - j] = A[j]
        T[r + q + 1 - j] = tempo[j] 

    i = p
    j = r
    c = 0
    for k in range(p,r+1):
        #print('B[i] = {}, B[j] = {}'.format(B[i], B[j]))
        if B[i] <= B[j]:
            A[k] = B[i]
            tempo[k] = T[i]
            i = i + 1
        else:
            #print('conta uma inversão B[i] = {} e B[j] = {}'.format(B[i], B[j]))
            A[k] = B[j]
            tempo[k] = T[j]
            for ii in range(i, q+1):
                if ii != j:
                    c += T[ii] + T[j]
                    #print('pacotes: {} {}'.format(B[ii], B[j]))
                    #print('tempo: {} {}'.format(T[ii], T[j]))
            j = j - 1
 
            #print(c)
    return c


def conta_tempo(A, p, r, tempo, B, T):
    if p >= r:
        return 0
    else:
        q = (p + r)//2
        #print('q: {}'.format(q))
        c = conta_tempo(A, p, q, tempo, B, T) 
        c += conta_tempo(A, q + 1, r, tempo, B, T) 
        c += conta_intercala(A, p, q, r, tempo, B, T)
        #print('conta_tempo: {}'.format(c))
        return c

def main():
    while True:
        try:
            n = int(input())
            pacote = list(map(int, sys.stdin.readline().split()))
            tempo = list(map(int, sys.stdin.readline().split()))
            B = [0] * n
            T = [0] * n
            resultado =  conta_tempo(pacote, 0, n-1, tempo, B, T)
            #print(pacote)
            #print(tempo)
            print(resultado)
        except EOFError:
            break



main()

