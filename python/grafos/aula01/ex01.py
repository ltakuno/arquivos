# exemplo usando matriz de adjacencia.

class Grafo:
    def __init__(self, v):
        self.v = v
        self.a = 0
        self.adj = [[0] * v for _ in range(v)]

    def insere(self, u, w):
        if self.adj[u][w] == 0:
            self.adj[u][w] = 1
            self.adj[w][u] = 1
            self.a += 1

    def remove(self, u, w):
        if self.adj[u][w] == 1:
            self.adj[u][w] = 0
            self.adj[w][u] = 0
            self.a -= 1

    def mostrar(self):
        for i in range(self.v):
            print('{}: {}'.format(i, list(map(lambda x: x[0], list(filter(lambda x: (x[1] == 1), enumerate(self.adj[i])))))))

def main():

    g = Grafo(5)
    arestas = [(0, 1), (0, 2), (1, 2), (1, 3), (1, 4), (2, 3), (3, 4)]


    for aresta in arestas:
        g.insere(aresta[0], aresta[1])

    g.mostrar()
            
main()
        
