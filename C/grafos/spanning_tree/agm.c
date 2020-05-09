#include<stdio.h>   // printf
#include<stdbool.h> // true, false
#include<stdlib.h>  // malloc
#include<time.h>    //clock


//Grafo original
typedef struct{
   unsigned short v, u;
   float custo;
}aresta_go;


typedef struct{
   int n, m;
   aresta_go *arestas;
} grafo_original;


//Grafo bipartido
typedef struct { 
   unsigned short ind_v;
   int ind_u;
   int ind_ac; // indice da outra aresta correspondente
} aresta_gb;

typedef struct {
   unsigned short id;
   int grau, menor_aresta;
} vertice_v;

typedef struct {
   int id_ago; // indice para aresa do grafo original que deu origem a este vértice
} vertice_u;


typedef struct { 
   int n_v, n_u, m;
   vertice_v *vertices_v;
   vertice_u *vertices_u;
   aresta_gb *arestas;
} grafo_bipartido;


// Funções procedimentos
grafo_original le_grafo(char *); 
grafo_bipartido cria_grafo_bipartido(grafo_original GO);

//int main(int argc, char *argv[]){
   
//   return 0;
//}



// ============================================================================
// Função le_grafo: Lê as informações do grafo de um arquivo e armazena em uma
//                  estrutura
// ============================================================================
grafo_original le_grafo(char *arquivo){
   int i, aux;
   grafo_original G;
   FILE *arq;

   arq = fopen(arquivo, "r");
   fscanf(arq, "%d", &G.n);
   fscanf(arq, "%d", &G.m);
   G.arestas = (aresta_go *) malloc(G.m * sizeof(aresta_go));
   for (i = 0; i < G.m; i++){
      fscanf(arq, "%hu", &G.arestas[i].u);
      fscanf(arq, "%hu", &G.arestas[i].v);
      if (G.arestas[i].v > G.arestas[i].u){
          aux = G.arestas[i].v;
          G.arestas[i].v = G.arestas[i].u;
          G.arestas[i].u = aux;	  
      }
      fscanf(arq, "%f", &G.arestas[i].custo);
   }

   fclose(arq);
   return G;
}

// ============================================================================
//  Função cria_grafo_bipartido: cria um grafo bipartido GB a partir de um grafo
//                               qualquer adicionando um vértice para cada aresta
//                               do grafo original
// ============================================================================
grafo_bipartido cria_grafo_bipartido(grafo_original GO) { 
   int i, j;

   grafo_bipartido GB;

   GB.n_v = GO.n;
   GB.n_u = GO.m;

   GB.m = GO.m * 2;

   GB.vertices_v = (vertice_v *) malloc(GB.n_v * sizeof(vertice_v));
   GB.vertices_u = (vertice_u *) malloc(GB.n_u * sizeof(vertice_u));
   GB.arestas = (aresta_gb *) malloc(GB.m * sizeof(aresta_gb));

   for (int i = 0; i < GB.n_v; i++){
      GB.vertices_v[i].id = i+1;
      GB.vertices_v[i].grau = 0;
   }
   for (i = j = 0; i < GO.m; i++){
      GB.vertices_v[GO.arestas[i].u].grau++;
      GB.vertices_v[GO.arestas[i].v].grau++;

      GB.vertices_u[i].id_ago = i+1;

      GB.arestas[j].ind_v = GO.arestas[i].v;
      GB.arestas[j].ind_u = i+1;
      GB.arestas[j].ind_ac = j+1;
      j++;

      GB.arestas[j].ind_v = GO.arestas[i].u;
      GB.arestas[j].ind_u = i+1;
      GB.arestas[j].ind_ac = j-1;
      j++;
   }

   return GB;
}


