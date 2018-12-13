#include <stdio.h>
#include <stdlib.h>
#define MAX 200
#define NUM_TRABALHADORES 2
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
         fila[i] = fila[*inicio];
      } 
   }
   *inicio = *inicio + 1;
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
   int fila_removidos[MAX], ini_rem = -1, fim_rem = -1; 
   int alocado[MAX] = {0}, num_alocados = 0;

   while (num_nos) {
      while (inicio <= fim) {
         no = remove_fila(fila, &inicio, &fim);
         insere_fila(no, fila_removidos, &ini_rem, &fim_rem); 
      }

      while (ini_rem <= fim_rem){
         no = remove_fila(fila_removidos, &ini_rem, &fim_rem);
         ordenacao_topologica[k++] = no;
         insere_fila(no, fila_removidos, &ini_rem,&fim_rem);

         for (int w = 0; w < NUM_TRABALHADORES; w++){ 
            if (trabalhador[w] == 0 && !alocado[no]){
               trabalhador[w] = no + 1;
               termino_trabalho[w] = segundos + no + 1;
               alocado[no] = 1;
               num_alocados++;
               break;
            } else if (termino_trabalho[w] == segundos && segundos > 0) {
               remover_no_fila(trabalhador[w]-1, fila_removidos, &ini_rem, &fim_rem); 
               remover_grafo(adj, trabalhador[w] - 1, grau_entrada);
               num_nos--;
               trabalhador[w] = 0;
           
               if (ini_rem <= fim_rem) w--;
               num_alocados--;
            }
 //        printf("* segundo:  %d  w: %d\n ", segundos, w);
         }

         if (num_alocados){
            printf("segundo: %d   w1: %c, w2: %c\n", segundos, saida(trabalhador[0]) , saida(trabalhador[1]));
            segundos++;
         }
      }
   }
      
    

//   printf("Nos depois da ordenacao topologica: \n");
//   for (int i = 0; i < k; i++)
//       printf("%c", ordenacao_topologica[i] + 'A'); 
//   printf("\n");

   printf("Parte 02: %d\n", segundos);
   return 0;
}
