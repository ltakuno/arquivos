#include <stdio.h>
#include <stdlib.h>
#define MAX 200
#define NUM_TRABALHADORES 5 

#define saida(w) (w == 0)? '.': w + 'A' - 1 

int n = 0, adj[MAX][MAX] = {0};
int inicio = -1, fim = -1, fila[MAX];
int nos[MAX] = {0};
void insere_fila(int no, int fila[], int *inicio, int *fim){
   if (*fim == MAX - 1)
      printf("Fila cheia \n");
   else
   {
      if (*inicio == -1) /* se a fila está inicialmente vazia */
         *inicio = 0;

         *fim = *fim + 1;
         fila[*fim] = no;
        
         int i = *fim;
         while (i > *inicio && fila[i-1] > no){
            fila[i] = fila[i-1];
            i--;
         }
         fila[i] = no;
   }
}

int remove_fila(int fila[], int *inicio, int *fim)
{
   int item;
   if (*inicio == -1 || *inicio > *fim) {
      printf("Fila Underflow \n");
      exit(1); 
   }
   else
   {
      item = fila[*inicio];
      *inicio = *inicio + 1;
   }
   return item;
}

void remover_no_fila(int no, int fila[], int *inicio, int *fim){
   for(int i = *inicio + 1; i <= *fim; i++) {
      if (fila[i] == no) {
         for (int j = i; j <= *fim; j++)
            fila[j] = fila[j + 1];
         break;
      } 
   }
   *fim = *fim - 1;
}

int calcula_grau_entrada(int no){
   int i, grau = 0;

   for (i = 0; i <= n; i++)
      if (adj[i][no] == 1)
         grau++;
   return grau;
}

void leia_grafo(){
   char origem, destino;
   while(scanf("Step %c must be finished before step %c can begin.\n", &origem, &destino) != EOF){
      adj[origem - 'A'][destino - 'A'] = 1;
      nos[origem - 'A'] = 1;
      nos[destino - 'A'] = 1; 
   }
}


void remover_grafo(int adj[MAX][MAX], int  no, int grau_entrada[MAX]){
   for (int i = 0; i <= n; i++) /* remover arestas a partir de no */
   {
      if (adj[no][i] == 1)
      {
         adj[no][i] = 0;
         grau_entrada[i] = grau_entrada[i] - 1;
         if (grau_entrada[i] == 0)
            insere_fila(i, fila, &inicio, &fim);
      }
   }
}

int esta_alocado(int trabalhador[NUM_TRABALHADORES]){
   
   for (int i = 0; i < NUM_TRABALHADORES; i++)
       if (trabalhador[i])
          return 1;
   return 0;
}

void mostrar_tempo(int segundos, int trabalhador[NUM_TRABALHADORES]){
   
   printf("segundo: %d   ", segundos);
   for (int w = 0; w < NUM_TRABALHADORES; w++)
       if (w == 0)
          printf("w%d: %c", w+1, saida(trabalhador[w]));
       else
          printf(", w%d: %c", w+1, saida(trabalhador[w]));
  printf("\n");

}

int main()
{
   leia_grafo();
   int ordenacao_topologica[MAX] = {0}, grau_entrada[MAX] = {0};
   int no, k = 0;
   int trabalhador[NUM_TRABALHADORES] = {0};
   int termino_trabalho[NUM_TRABALHADORES] = {0};
   int segundos = 0;
   int num_nos = 0;

   n = 'Z' - 'A';
   for (int i = 0; i <= n; i++) {
      if (nos[i]){
         num_nos++;
         grau_entrada[i] = calcula_grau_entrada(i);
         if (grau_entrada[i] == 0) {
            insere_fila(i, fila, &inicio, &fim);
         }
      }
   }
   int alocado[MAX] = {0};

   while (num_nos) {
      while (inicio <= fim){
         for (int w = 0; w < NUM_TRABALHADORES; w++){
            if (trabalhador[w] == 0) { 
               for (int nn  = inicio; nn <= fim; nn++){
                  no = fila[nn];
                  if (!alocado[no]){
                     trabalhador[w] = no + 1;
                     termino_trabalho[w] = segundos + no + 61;
                     alocado[no] = 1;
                     break;
                  }             
               }
            } 

            if (trabalhador[w] && termino_trabalho[w] == segundos && segundos > 0) {
               ordenacao_topologica[k++] = trabalhador[w] - 1;
               remover_no_fila(trabalhador[w]-1, fila, &inicio, &fim);
               remover_grafo(adj, trabalhador[w] - 1, grau_entrada);
               num_nos--;
               trabalhador[w] = 0;
           
               if (inicio <= fim) w--;
            }

         }
         if (esta_alocado(trabalhador)) {
            mostrar_tempo(segundos, trabalhador);
            segundos++;
         }
      }
   }
   printf("Parte 01: ");
   for (int i = 0; i < k; i++)
     printf("%c", ordenacao_topologica[i] + 'A');

   printf("\n");

   printf("Parte 02: %d\n", segundos);
   return 0;
}
