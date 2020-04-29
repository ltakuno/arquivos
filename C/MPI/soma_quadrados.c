#include "mpi.h"
#include <stdio.h>
#include <stdlib.h>
#define MESTRE 0

int main(int argc, char* argv[]){
   int id, p, n;

   MPI_Init(&argc, &argv);
   MPI_Comm_rank(MPI_COMM_WORLD, &id);
   MPI_Comm_size(MPI_COMM_WORLD, &p);

   if (id == MESTRE){
      printf("Entre com o valor de N: ");
      scanf("%d", &n);
   }

   MPI_Bcast(&n, 1, MPI_INT, 0, MPI_COMM_WORLD);

   int soma_local = 0, soma_global = 0;
   int r = n/p;
   int inicio = (id * r) + 1;
   int fim = inicio + r;
   
   for(int i = inicio; i < fim; i++){
      soma_local += (i * i);
   }

   MPI_Reduce(&soma_local, &soma_global, 1, MPI_INT, MPI_SUM, 0, MPI_COMM_WORLD);

   if (id == MESTRE){
      printf("\n Total para N = %d é igual a : %d\n", n, soma_global);
   }

   MPI_Finalize();

   return 0;
}


