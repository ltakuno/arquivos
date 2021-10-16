# grafo bipartido

class Grafo:
    def __init__(self, V):
        self.V = V
        self.A = 0
        self.adj = [[] for _ in range(V)]

    def insere(self, v, w):
        self.adj[v].append(w)
        self.adj[w].append(v)
        self.A += 1

    def isBipartite(self):
        visitado = {}
        cor = {}
        for no in range(len(self.adj)):
            if no not in visitado:
                visitado[no] = True
                cor[no] = 0
                pilha = [no]

                while pilha:
                    v = pilha.pop()
                    for w in self.adj[v]:
                        if w not in visitado:
                            pilha.append(w)
                            visitado[w] = True
                            cor[w] = cor[v] ^ 1
                        elif cor[v] == cor[w]:
                            return False
        return True

def main():
    arestas = [(0,1),(0,2),(0,3),(1,2),(3,2)]
    g = Grafo(4)
    for aresta in arestas:
        g.insere(aresta[0], aresta[1])


    print(g.isBipartite())


main()



