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
	   tid = omp_get_thread_num();
	   numt = omp_get_num_threads();

	   for (i = 0; i < TAM; i++)
	       soma += a[i];
   }
   t2 = omp_get_wtime();

   printf("Soma = %i, tempo=%g\n", soma, t2-t1);
   return 0;
}
