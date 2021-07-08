#include <stdio.h>
#include <omp.h>
#include <time.h> // clock_t, clock(), CLOCKS_PER_SEC


static long N = 100000;

int main(){
   double a[N], b[N], c[N], d[N];
   int i, j;

   time_t inicio, fim;

   time(&inicio);

   #pragma omp parallel default(none) shared(N,a,b,c,d) private(i, j)
   {
      #pragma omp for	   
      for (i = 0; i < N; i++){
         a[i] = i * 5.3;
         b[i] = 0.8;
         c[i] = i/2.2;
         d[i] = 0.1;
      }

      #pragma omp for nowait
      for (i = 0; i < N-2; i++) 
         for (j = 0; j < N-2; j++)  
            b[i] = (b[i] * a[i+1])/2;

      #pragma omp for nowait   
      for (i = 0; i < N; i++) 
         d[i] = 1.0/c[i];

   }      

   time(&fim);	   
   printf("Tempo em segundos: %ld\n", fim - inicio);
   printf("a[0] = %f d[0] = %f a[N-1] = %f d[N-1] = %f \n", a[0], d[0], a[N-1], d[N-1]);
   return 0;
}

