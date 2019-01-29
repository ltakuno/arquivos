/*  

   Programa: mst.c
   Descricao: Algoritmo para arvore geradora minima
   Programador: Leo Takuno
   Data: 15/01/2019

   Compilacao: gcc -o mst mst.c
   Execucao: ./mst input.txt output.txt

   Input data: 
   8
   16
   4 5 0.35
   4 7 0.37
   5 7 0.28
   0 7 0.16
   1 5 0.32
   0 4 0.38
   2 3 0.17
   1 7 0.19
   0 2 0.26
   1 2 0.36
   1 3 0.29
   2 7 0.34
   6 2 0.40
   3 6 0.52
   6 0 0.58
   6 4 0.93

   onde a primeira linha representa o numero de vertices, 
        a segunda linha representa o numero de arestas e 
        a linhas subsequentes são arestas no formato v1 v2 peso
*/
 
#include<stdio.h>   //printf
#include<stdbool.h> // true, false
#include<stdlib.h>  // malloc
#include<time.h>    // clock

#define MOSTRAR_GRAFO 1

#ifdef MOSTRAR_GRAFO
#define mostrar(G) mostraGrafoOriginal(G);
#define mostrarGB(GB, GO, m) mostraGrafoBipartido(GB, GO, m);
#else
#define mostrar(G)
#define mostrarGB(GB, GO, m)
#endif


// Estruturas

// Grafo original
typedef struct {
   unsigned short v, u;
   float custo; 
} aresta_go;

typedef struct {
   int n, m;
   aresta_go *arestas;
} grafo_original;


// Grafo Bipartido
typedef struct {
   unsigned short ind_v;
   int ind_u;
   int ind_ac; // indice da outra aresta correspondente
} aresta_gb;

typedef struct {
   unsigned short id;
   int grau, menorAresta;
} vertice_v;

typedef struct {
   int ind_ago; // indice para aresta do grafo original que deu origem a este vertice
} vertice_u;

typedef struct {
   int n_v, n_u, m;
   vertice_v *vertices_v;
   vertice_u *vertices_u;
   aresta_gb *arestas;
} grafo_bipartido;

// Funcoes
grafo_original leGrafo(char *);
void mostraGrafoOriginal(grafo_original);
grafo_bipartido criaGrafoBipartido(grafo_original GO);
void mostraGrafoBipartido(grafo_bipartido GB, grafo_original GO, bool completo);


// Funcao principal
int main(int argc, char** argv) {
   grafo_original GO;
   grafo_bipartido GB;

   // Passo 1: Verificação de parâmetros
   // Passo 2: Leitura dos dados do grafo
   // Passo 3: Criação do grafo bipartido correspondente às arestas recebidas
   // Passo 4: Encontra a solução
      // Passo 4.1: Escolher arestas da strut
      // Passo 4.2: Calcular o num_zero_diff e computar componentes conexas
      // Passo 4.3: Compactar o grafo
   
   //========================================================================
   // Passo 1: Verificação dos parâmetros
   //========================================================================

   if (argc < 3) {
      printf("\nParametros incorretos\n Uso: ./mst <arquivo_entrada> <arquivo_saida> onde: \n");
      printf("\t <arquivo_entrada> (obrigatorio) - Nome do arquivo com as informacoes do grafo\n");
      printf("\t <arquivo_saida> (obrigatorio) - Nome do arquivo de saida.\n");
      return 0;
   } 


   //========================================================================
   // Passo 2: Leitura dos dados do Grafo G
   //========================================================================
   GO = leGrafo(argv[1]);
   mostrar(GO);
   int *SolutionEdgeSet = (int *) malloc((GO.n-1) * sizeof(int));
   int SolutionSize = 0;
   int SolutionVal = 0;


   //========================================================================
   // Passo 3: Transforma em grafo bipartido
   //========================================================================
   GB = criaGrafoBipartido(GO);   

   //========================================================================
   // Passo 4: Encontra solução
   //========================================================================
   int it = 0;
   int num_zerodiff = 0;

   while (SolutionSize < GO.n-1)
   {
      printf("===== Iteração %d =====\n", it);
      printf("\t Numero de fragmentos = %d Numero de arestas = %d  SolutionSize = %d   SolutionVal = %d\n", GB.n_v, GB.m, SolutionSize, SolutionVal);

      mostrarGB(GB, GO, true);


      //======================================================================
      // Passo 4.1: Escolher arestas que comporão a strut
      //======================================================================
      for (int i = 0; i < GB.n_v; i++)
         GB.vertices_v[i].menorAresta = -1;

      for (int i = 0; i < GB.n_v; i++){
         if ((GB.vertices_v[GB.arestas[i].ind_v].menorAresta == -1) || (GO.arestas[GB.vertices_u[GB.arestas[GB.vertices_v[GB.arestas[i].ind_v].menorAresta].ind_u].ind_ago].custo > GO.arestas[GB.vertices_u[GB.arestas[i].ind_u].ind_ago].custo))
            GB.vertices_v[GB.arestas[i].ind_v].menorAresta = i;


      }


      
      SolutionSize++;
   }
   
}


//======================================================
// Funcao leGrafo: Lê as informacoes do Grafo do 
//                 arquivo e armazena na estrutura
//======================================================

grafo_original leGrafo(char *nome_arquivo){
   grafo_original G;
   FILE *arquivo;
   arquivo = fopen(nome_arquivo, "r");

   fscanf(arquivo, "%d", &G.n);
   fscanf(arquivo, "%d", &G.m);

   G.arestas = (aresta_go *) malloc(G.m * sizeof(aresta_go));
   for (int i = 0; i < G.m; i++) {
      fscanf(arquivo, "%hu", &G.arestas[i].u);
      fscanf(arquivo, "%hu", &G.arestas[i].v);
      if (G.arestas[i].v > G.arestas[i].u){
         int aux = G.arestas[i].v;
         G.arestas[i].v = G.arestas[i].u;
         G.arestas[i].u = aux;
      }
      fscanf(arquivo, "%f", &G.arestas[i].custo);
   }
   fclose(arquivo);
   return G;
}


//======================================================
// Função mostraGrafoOriginal: apresenta detalhes
//                             sobre o grafo original
//======================================================
void mostraGrafoOriginal(grafo_original G){
   printf("==============Dados do Grafo==============\n");
   printf("Número de vértices do grafo = %d\n", G.n);
   printf("Número de arestas do grafo = %d\n", G.m);
   for (int i = 0; i < G.m; i++) {
      printf("Aresta %d \t v = %d \t u = %d \t custo = %.2f\n", i, G.arestas[i].v, G.arestas[i].u, G.arestas[i].custo);
   }
   printf("==========================================\n");


}

//======================================================
// Função mostraGrafoOriginal: apresenta detalhes
//                             sobre o grafo original
//======================================================
grafo_bipartido criaGrafoBipartido(grafo_original GO){
   int i, j;
   grafo_bipartido GB;

   GB.n_v = GO.n;
   GB.n_u = GO.m;
   GB.m = GO.m * 2;

   GB.vertices_v = (vertice_v *) malloc(GB.n_v * sizeof(vertice_v));
   GB.vertices_u = (vertice_u *) malloc(GB.n_u * sizeof(vertice_u));
   GB.arestas = (aresta_gb *) malloc(GB.m * sizeof(aresta_gb));

   for (i = 0; i < GB.n_v; i++){
       GB.vertices_v[i].id = i;
       GB.vertices_v[i].grau = 0;
   }

   for (i = 0, j = 0; i < GO.m; i++){
      GB.vertices_v[GO.arestas[i].v].grau++;
      GB.vertices_v[GO.arestas[i].u].grau++;
   
      GB.vertices_u[i].ind_ago = i;

      GB.arestas[j].ind_v = GO.arestas[i].v;
      GB.arestas[j].ind_u = i;
      GB.arestas[j].ind_ac = j+1;
      j++;

      GB.arestas[j].ind_v = GO.arestas[i].u;
      GB.arestas[j].ind_u = i;
      GB.arestas[j].ind_ac = j-1;
      j++;
   }

   return GB;
}

//======================================================
// Função mostraGrafoBipartido: mostra as informações de 
//                              vertices e arestas do 
//                              grafo bipartido
//======================================================
void mostraGrafoBipartido(grafo_bipartido GB, grafo_original GO, bool completo)
{
   printf("===== Dados do grafo bipartido =====\n");
   printf("Numero de vertices tipo v do grafo = %d\n", GB.n_v);
   printf("Numero de vertices tipo u do grafo = %d\n", GB.n_u);

   printf("Numero de arestas do grafo = %d\n", GB.m);

   if (completo)
   {
      printf("--- Vertices v ---\n");
      for (int i = 0; i < GB.n_v; i++)
         printf("Vertice %d \t id = %d \t grau = %d \t menorAresta = %d\n", i, GB.vertices_v[i].id, GB.vertices_v[i].grau, GB.vertices_v[i].menorAresta);


      printf("--- Vertices u ---\n");
      for (int i = 0; i < GB.n_u; i++)
         printf("Vertice %d \t v1 = %d \t v2 = %d \t custo = %lf \t ago = %d\n", i, GO.arestas[GB.vertices_u[i].ind_ago].v, GO.arestas[GB.vertices_u[i].ind_ago].u, GO.arestas[GB.vertices_u[i].ind_ago].custo, GB.vertices_u[i].ind_ago);
   }

   printf ("=== Arestas G.m = %d ===\n", GB.m);
   for (int i = 0; i < GB.m; i++)
      printf("Aresta %d \t ind_v = %d \t ind_u = %d \t ind_ac = %d \t ago = %d \n", i, GB.arestas[i].ind_v, GB.arestas[i].ind_u, GB.arestas[i].ind_ac, GB.vertices_u[GB.arestas[i].ind_u].ind_ago);
   printf("===============================\n");
}

