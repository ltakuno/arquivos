#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 1000000000

void calcula_pi(){
   int i; 
   double step, x, pi = 0.0, sum = 0.0;

   step = 1.0/N;  

   clock_t t1, t2;
   t1 = clock();   

   for (int i = 0; i < N; i++) {
	x = (i + 0.05) * step;
        pi += 4.0 / (1.0 + x * x);
   }

   pi = step * pi;
   
   t2 = clock();
   
   printf("O valor do pi: %lf\n", pi);
   printf("Tempo (sequencial): %f ms\n",((float)(t2 - t1) / 1000000.0F ) * 1000);
   
}    

int main(int argc, char *argv[]) {
   calcula_pi();
}



