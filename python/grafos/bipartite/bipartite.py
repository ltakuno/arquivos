# bipartite graph

class Grafo:
    def __init__(self, V):
        self.V = V
        self.A = 0
        self.adj = [[] for _ in range(V)]

    def insere(self, v, w):
        self.adj[w].append(v)
        self.adj[v].append(w)
        self.A += 1

    def ehBipartido(self):
        visitado = [0] * self.V
        cor = [-1] * self.V
        return self.dfs(0, 0, visitado, cor)

    def dfs(self, v, c, visitado, cor):
        print(v)
        visitado[v] = 1
        cor[v] = c
        print('filhos : {}'.format(self.adj[v]))
        for filho in self.adj[v]:
            if visitado[filho] == 0:
                if self.dfs(filho, c ^ 1, visitado, cor) == False:
                    return False
            elif cor[v] == cor[filho]:
                    return False
        return True
                


def main():
    arestas = [(0,1), (1,2), (1,3), (2, 3), (3, 4)]
    g = Grafo(5)


    for aresta in arestas:
        g.insere(aresta[0], aresta[1])


    print(g.ehBipartido())

main()
