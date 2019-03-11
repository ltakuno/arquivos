#include<omp.h>
#include<stdio.h>

#define TAM 500000000
int a[TAM];


int main(int argc, char *argv[]){
   int i, tid, numt, soma=0;
   double t1, t2;

   for (i = 0; i < TAM; i++)
      a[i] = 1;

   t1 = omp_get_wtime();
   #pragma omp parallel default(shared) private(i, tid)
   {
      int from, to;
      tid = omp_get_thread_num();
      numt = omp_get_num_threads();
      from = (TAM/numt) * tid;
      to = (TAM/numt)* (tid + 1) - 1;

      if (tid == numt-1)
	      to = TAM-1;

      for (i = from; i <= to; i++)
	 #pragma omp critical
         soma += a[i];
   }
   t2 = omp_get_wtime();

   printf("Soma = %i, tempo=%g\n", soma, t2-t1);
   return 0;
}
