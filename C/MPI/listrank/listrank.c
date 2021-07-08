#include<mpi.h>
#include<stdio.h>
#include<stdlib.h>

#define MASTER 0
#define tamanho_lista 24 
#define nao_selecionado 0
#define selecionado 1

static void troca(int *v, int i, int j){
   int temp = v[i];
   v[i] = v[j];
   v[j] = temp;
}

static void cria_no(int rank[], int index[], int s[], int n){
   for(int i = 0; i < n; i++){
      rank[i] = -1;
 
      if (i != n-1){
         s[i] = i + 1;
      } else {
         s[i] = i;  // ultimo nó
      }
   }

   int *map = (int *)calloc(n, sizeof(int));

   for (int i = 0; i < n; i++){
      map[i] = i;
   }

   // shuffle nodes
   for (int i = n - 1; i > 0; i--){
      int j = rand() % i;
      troca(map, i, j);
   }


   for (int i = 0; i < n; i++){
      index[i] = map[i];
      int j = s[i];
      s[i] = map[j];
   }
   printf("---------\n");
   for (int i = 0; i < n; i++){
      printf("indice = %d, sucessor = %d\n", index[i], s[i]);
   }


   for (int i = n - 1; i > 0; i--){
      int j = rand() % i;
      troca(index, i, j);
      troca(s, i, j);
   }
   printf("---------\n");

   for (int i = 0; i < n; i++){
      printf("indice = %d, sucessor = %d\n", index[i], s[i]);
   }

   free(map);

}

int main(int argc, char *argv[]) {

   int id, p;

   int s[tamanho_lista] = {0};
   int rank[tamanho_lista] = {0};
   int index[tamanho_lista] = {0};	   
   int l[tamanho_lista] = {0};

   MPI_Init(&argc,&argv);
   MPI_Comm_size(MPI_COMM_WORLD,&p);
   MPI_Comm_rank(MPI_COMM_WORLD,&id);

   if (id == MASTER){
     cria_no(rank, index, s, tamanho_lista);
   }     

   int r = tamanho_lista/p;

   // distribui os nós da lista nos processadores.
   MPI_Bcast(rank,  tamanho_lista, MPI_INT, MASTER, MPI_COMM_WORLD);
   MPI_Bcast(index, tamanho_lista, MPI_INT, MASTER, MPI_COMM_WORLD);
   MPI_Bcast(s,     tamanho_lista, MPI_INT, MASTER, MPI_COMM_WORLD);

   int local_l[tamanho_lista] = {0};
   
   for (int i = 0; i < r; i++){
      local_l[i] = id;  // atribui o número do processador ao rótulo.
   }

   // enviar para todos os processadores
   MPI_Allgather(local_l, r, MPI_INT, l, r, MPI_INT, MPI_COMM_WORLD);

   if (id == MASTER){
      for (int i = 0; i < tamanho_lista; i++){
         printf("rótulo: %d\n", l[i]);
      }
   }


   //Computar o O(p^2)-ruling set R com |R|=O(n/p) e broadcast R para
   //   todos o processadores
   
   //1 - Marcar todos os elementos como não selecionado
   int sel[tamanho_lista] = {nao_selecionado};

   //2 - Para todo elemento da lista faça em paralelo
   for (int i = id * r; i < (id + 1) * r; i++){

      //2.1 - selecione o máximo local	   
      if (l[i] < l[s[i]] && l[s[i]] > l[s[s[i]]]) 
	      sel[s[i]] = selecionado;

   //3  -  processar a lista de elementos subsequentes que
   //      estão armazenados no mesmo processador.
   //      Para cada sublista, marque todo segundo elemento
   //      como selecionado. Se a sublista tem apenas dois
   //      elementos, e ambos os vizinhos não possuem rótulos
   //      menores, então marcar ambos elementos da lista
   //      como não selecionado.
      if (l[i] == l[s[i]]){
         if (l[s[i]] == l(s[s[i]])
            sel[s[i]] = selecionado;			 
	 else if (l[s[i]] > l[s[s[i]]])
	    sel[i] = selecionado;
      }
   }


   MPI_Finalize();
   return 0;
}
