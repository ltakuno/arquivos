#include<stdio.h>
#include<omp.h>
#define ARRAY_SIZE 100000000
int a[ARRAY_SIZE];

int main(){

   int i, sum = 0;
   double t1, t2;
   
   for (i = 0; i < ARRAY_SIZE; i++)    
      a[i] = 1;


   t1 = omp_get_wtime();
   #pragma omp parallel for default(shared) reduction(+:sum)
   for (i = 0; i < ARRAY_SIZE; i++)
      sum += a[i];
   
   
   t2 = omp_get_wtime();
   printf("Soma dos elementos do vetor: %d. Tempo = %g \n", sum, t2-t1);

   return 0;
}
