#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <omp.h>

#define NUM_THREADS 10

#define N 1000000000     

void calcula_pi(){
   double pi, sum = 0.0;
   long i;
  
   double step = 1.0/(double) N;

   clock_t t1, t2;
   t1 = clock();
   omp_set_num_threads(NUM_THREADS);
  
   #pragma omp parallel for reduction(+:sum)
   for(i = 0; i < N; i++)
   {
      double x = (i + 0.05) * step;
      sum += 4.0 / (1.0 + x * x);
   }
   
   pi = step * sum;
  t2 = clock();

  printf("O valor do pi: %lf\n", pi);
  printf("Tempo (multicore): %f ms\n",((float)(t2 - t1) / 1000000.0F ) * 1000);
}    
int main(int argc, char *argv[]) {
   calcula_pi();
}

