#include <omp.h> 
#include <stdio.h>
#include <time.h>

#define NUM_THREADS 10

#define N 1000000000

void calcula_pi(){
   int i, nthreads;
   double pi = 0.0, sum[NUM_THREADS];

   double step = 1.0/(double) N;
   omp_set_num_threads(NUM_THREADS);

   clock_t t1, t2;
   t1 = clock();

   #pragma omp parallel
   {
      long i, id, nthrds;
      double x;
      id  = omp_get_thread_num();

      for (i = id, sum[id] = 0.0; i < N; i = i + NUM_THREADS){
         x = (i + 0.05)* step;
         sum[id] += 4.0/(1.0 + x * x);
      }
   }

   for (i = 0, pi = 0.0; i < NUM_THREADS; i++)
      pi += step * sum[i];

   t2 = clock();   

   printf("O valor do pi: %lf\n", pi);
   printf("Tempo (multicore): %f ms\n",((float)(t2 - t1) / 1000000.0F ) * 1000);
}

int main(){
   calcula_pi();
   return 0;
}
