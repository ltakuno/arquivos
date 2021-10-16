# exemplo usando lista de adjacencia


class Digrafo:
    def __init__(self, v):
        self.v = v
        self.a = 0
        self.adj = [[] for _ in range(v)]

    def insere(self, u, w):
        if w not in self.adj[u]:
            self.adj[u].append(w)


    def remove(self, u, w):
        if w in self.adj[u]:
            self.adj[u].remove(w)

    def mostra(self):
        for i in range(self.v):
            print('{}: {}'.format(i, self.adj[i]))


def main():
    g = Digrafo(5)
    arestas = [(0,1), (0,4), (1,0), (1, 3), (1, 2), (1, 4), (2, 1), (2, 3), (3, 2), (3, 4), (3, 1), (4, 3), (4, 2), (4, 1)]

    for aresta in arestas:
        g.insere(aresta[0], aresta[1])

    g.mostra()

main()
