#include<stdio.h>
#include<assert.h>
#include "agm.c"


// teste da leitura do arquivo
void teste_le_grafo(){
   grafo_original g;

   g = le_grafo("input.txt");

   assert(g.n == 8);
   assert(g.m == 16);
   assert(g.arestas[0].u == 5);
   assert(g.arestas[0].v == 4);
   assert(g.arestas[0].custo - 0.35 < 0.001);
   assert(g.arestas[1].u == 7);
   assert(g.arestas[1].v == 4);
   assert(g.arestas[2].u == 7);
   assert(g.arestas[2].v == 5);
   free(g.arestas);
}

void teste_le_grafo1(){
   grafo_original g;
   g = le_grafo("input1.txt");
   assert(g.n == 5); // número de vértices
   assert(g.m == 8); // número de arestas  
   assert(g.arestas[0].u == 2);
   assert(g.arestas[0].v == 1);
   assert(g.arestas[1].u == 5);
   assert(g.arestas[1].v == 2);
   assert(g.arestas[2].u == 5);
   assert(g.arestas[2].v == 1);
   assert(g.arestas[3].u == 5);
   assert(g.arestas[3].v == 3);
   assert(g.arestas[4].u == 4);
   assert(g.arestas[4].v == 3);
   assert(g.arestas[5].u == 4);
   assert(g.arestas[5].v == 1);
   free(g.arestas);
}

void teste_gera_grafo_bipartido(){
   grafo_original go;
   grafo_bipartido gb;
   go = le_grafo("input1.txt");
   gb = cria_grafo_bipartido(go);

   assert(gb.n_v == 5);  // número de vértices da partição v
   assert(gb.n_u == 8);  // número de vértices da partição u
   assert(gb.m == 16);   // númrto de arestas do grafo bipartido

   assert(gb.arestas[0].ind_v == 1);
   assert(gb.arestas[0].ind_u == 1);
   for (int i = 0; i < gb.m; i++)
      printf("valor aresta %d : (%d %d) \n", i,  gb.arestas[i].ind_v, gb.arestas[i].ind_u);
   assert(gb.arestas[1].ind_v == 2);
   assert(gb.arestas[1].ind_u == 1);
   assert(gb.arestas[2].ind_v == 2);
   assert(gb.arestas[2].ind_u == 2);
   assert(gb.arestas[3].ind_v == 5);
   assert(gb.arestas[3].ind_u == 2);
   assert(gb.arestas[4].ind_v == 1);
   assert(gb.arestas[4].ind_u == 3);
   assert(gb.arestas[5].ind_v == 5);
   assert(gb.arestas[5].ind_u == 3);
   assert(gb.arestas[6].ind_v == 3);
   assert(gb.arestas[6].ind_u == 4);
   assert(gb.arestas[7].ind_v == 5);
   assert(gb.arestas[7].ind_u == 4);
   assert(gb.arestas[8].ind_v == 3);
   assert(gb.arestas[8].ind_u == 5);
   assert(gb.arestas[9].ind_v == 4);
   assert(gb.arestas[9].ind_u == 5);
   assert(gb.arestas[10].ind_v == 1);
   assert(gb.arestas[10].ind_u == 6);
   assert(gb.arestas[11].ind_v == 4);
   assert(gb.arestas[11].ind_u == 6);
   assert(gb.arestas[12].ind_v == 2);
   assert(gb.arestas[12].ind_u == 7);
   assert(gb.arestas[13].ind_v == 4);
   assert(gb.arestas[13].ind_u == 7);
   assert(gb.arestas[14].ind_v == 4);
   assert(gb.arestas[14].ind_u == 8);
   assert(gb.arestas[15].ind_v == 5);
   assert(gb.arestas[15].ind_u == 8);












   free(go.arestas);
}

int main(int argc, char *argv[]) {
   
  teste_le_grafo();
  teste_le_grafo1();
  teste_gera_grafo_bipartido();

   	
   return 0;
}
