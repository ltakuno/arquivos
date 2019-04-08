#include<omp.h>
#include<stdio.h>



int main(int argc, char *argv[]) {
   int numt;
   #pragma omp parallel default (shared)
   {
      int j, tid;
      
      #pragma omp single 
      {
         for (j = 0; j < 10000000; j++);
         numt = omp_get_num_threads();   
      }
      tid = omp_get_thread_num(); 
      printf("Hello from thread %d of %d.\n", tid, numt);

   }

   return 0; 
}
