#include <stdio.h>
#include <stdlib.h>
#define MAX 200

int n = 0, adj[MAX][MAX] = {0};
int inicio = -1, fim = -1, fila[MAX];
int nos[MAX] = {0};
void insere_fila(int no){
   if (fim == MAX - 1)
      printf("Fila cheia \n");
   else
   {
      if (inicio == -1) /* se a fila está inicialmente vazia */
         inicio = 0;

         fim = fim + 1;
         fila[fim] = no;
        
         int i = fim;
         while (i > inicio && fila[i-1] > no){
            fila[i] = fila[i-1];
            i--;
         }
         fila[i] = no;
         printf("Fila: ");
         for (i = inicio; i <= fim; i++)
             printf(" %d ", fila[i]);

         printf("\n");
   }
}

int remove_fila()
{
   int item;
   if (inicio == -1 || inicio > fim) {
      printf("Fila Underflow \n");
      exit(1); 
   }
   else
   {
      item = fila[inicio];
      inicio = inicio + 1;
   }
   return item;
}

int calcula_grau_entrada(int no){
   int i, grau = 0;

   for (i = 0; i <= n; i++)
      if (adj[i][no] == 1)
         grau++;
   printf("Grau de entrada do no %c : %d\n", no + 'A', grau);
   return grau;
}

void leia_grafo(){
   char origem, destino;
   while(scanf("Step %c must be finished before step %c can begin.\n", &origem, &destino) != EOF){
      printf("Origem %c, Destino %c\n ", origem, destino);

      adj[origem - 'A'][destino - 'A'] = 1;
      nos[origem - 'A'] = 1;
      nos[destino - 'A'] = 1; 
   }
}

int atribui_tarefa(int trabalhador[5], int tempo_tarefa){
   for (int i = 0; i < 5; i++)
      if(trabalhador[i] == 0){
         trabalhador[i] = tempo_tarefa; 
      }
}



int main()
{
   leia_grafo();
   int ordenacao_topologica[MAX] = {0}, grau_entrada[MAX] = {0};
   int no, k = 0;
   int trabalhador[5] = {0};
   int trabalho[5][200] = {0};

   n = 'Z' - 'A';
   for (int i = 0; i <= n; i++) {
      if (nos[i]){
         grau_entrada[i] = calcula_grau_entrada(i);
         if (grau_entrada[i] == 0) {
            insere_fila(i);
            atribui_tarefa(trabalhador, i+1);
         }
      }
   }

   while (inicio <= fim) {
      no = remove_fila();
      
      atribui_tarefa(trabalhador, no+1);
      ordenacao_topologica[k++] = no;
      for (int i = 0; i <= n; i++) /* remover arestas a partir de no */
      {
         if (adj[no][i] == 1)
         {
            adj[no][i] = 0;
            grau_entrada[i] = grau_entrada[i] - 1;
            if (grau_entrada[i] == 0)
               insere_fila(i);
         }
      }
   } 

   printf("Nos depois da ordenacao topologica: \n");
   for (int i = 0; i < k; i++)
       printf("%c", ordenacao_topologica[i] + 'A'); 
   printf("\n");

         


   return 0;
}
