#include <omp.h> 
#include <stdio.h>
#include <time.h>

#define NUM_THREADS 10

#define N 1000000000

void calcula_pi(){
   double pi = 0.0;
   double step = 1.0/(double) N;
   
   omp_set_num_threads(NUM_THREADS);
   
   clock_t t1, t2;
   t1 = clock();
   #pragma omp parallel
   {
      long local_steps = N / NUM_THREADS;
      double x, sum = 0;
      int id = omp_get_thread_num();

      for (long i = id * local_steps; i < (id+1) * local_steps; i++){
         x = (i + 0.05)* step;
         sum += 4.0/(1.0 + x * x);
      }
      
      #pragma omp critical
      pi += step * sum;

   }
   t2 = clock();   

   printf("O valor do pi: %lf\n", pi);
   printf("Tempo (multicore): %f ms\n",((float)(t2 - t1) / 1000000.0F ) * 1000);
}


int main(){
   calcula_pi();
   return 0;
}
