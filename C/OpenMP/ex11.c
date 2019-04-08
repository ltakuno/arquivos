#include<stdio.h>
#include<omp.h>
#define ARRAY_SIZE 100000000
int a[ARRAY_SIZE];

int main(){

   int i, tid, numt, sum = 0;
   double t1, t2;
   
   for (i = 0; i < 100000000; i++)    
      a[i] = 1;


   t1 = omp_get_wtime();
   #pragma omp parallel default(shared) private(i, tid)
   {
      int from, to;
      tid = omp_get_thread_num();
      numt = omp_get_num_threads();

      from = (ARRAY_SIZE/numt) * tid;
      to = (ARRAY_SIZE/numt) * (tid + 1) - 1;

      if (tid == numt-1)
	      to = ARRAY_SIZE - 1;

      printf("tid = %d, numt = %d, range from = %d, to = %d\n", tid, numt, from, to);
      for (i = from; i <= to; i++)
              #pragma omp critical
	      sum += a[i];
   
   }
   t2 = omp_get_wtime();
   printf("Soma dos elementos do vetor: %d. Tempo = %g \n", sum, t2-t1);

   return 0;
}
