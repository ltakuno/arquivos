#include <stdio.h>
#include <mpi.h>

int main(int arg , char **argv)
{
   MPI_Init(&arg , &argv);
   printf("Hello world\n");
   MPI_Finalize();

   return 0;
}
