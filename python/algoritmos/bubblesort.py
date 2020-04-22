class Bubblesorter:
    @staticmethod
    def sort(vetor):
        n = len(vetor)

        for i in range(n):
            for j in range(0, n-i-1):
                if vetor[j] > vetor[j+1]:
                    vetor[j], vetor[j+1] = vetor[j+1], vetor[j]


v = [64, 30, 25, 12, 22, 11, 60]
Bubblesorter.sort(v)

for i in range(len(v)):
    print("%d " % v[i])
