#include "mpi.h"
#include <stdio.h>
#include <stdlib.h>


int esta_dentro_do_circulo(double x, double y){
   return ((x*x + y*y) <= 1.0);
}

int main(int argc, char* argv[])
{
   int i, id, p;
   int numero_de_pontos = 100000000;
   int pontos_no_circulo_local = 0, pontos_no_circulo = 0;
   int tag = 5, source;
   double x, y;
   int r;

   MPI_Status status;
   MPI_Init(&argc, &argv);
   MPI_Comm_rank(MPI_COMM_WORLD, &id);
   MPI_Comm_size(MPI_COMM_WORLD, &p);
   r = numero_de_pontos/p;

   srand48(id);
   pontos_no_circulo_local = 0;
   for (i = 0; i < r; i++) {
      x = drand48();
      y = drand48();
      if (esta_dentro_do_circulo(x,y)) {
         pontos_no_circulo_local++;
      }
   }

   if (id == 0) { // mestre
      pontos_no_circulo = pontos_no_circulo_local ;
      for (source = 1; source < p; source++) {
         MPI_Recv(&pontos_no_circulo_local, 1, MPI_INT, MPI_ANY_SOURCE, tag, MPI_COMM_WORLD,&status);
         pontos_no_circulo += pontos_no_circulo_local;
      }
      printf("pontos no círculo: %d\n", pontos_no_circulo);
      printf("Pi = %24.16f\n", (4.0 * pontos_no_circulo) / numero_de_pontos);
   } else {  // escravo
      MPI_Send(&pontos_no_circulo_local, 1, MPI_INT, 0, tag, MPI_COMM_WORLD);
   } 

   MPI_Finalize();
   return 0;
}
