#include<stdio.h>
#include<omp.h>

#define N 8

int main(){

   int A[N]={8,4,2,3,1,7,6,9};
   int i;

   int exch = 1, start = 0;
   int temp;

   while(exch || start){
      exch = 0;

      #pragma omp parallel for private(temp) shared(start, exch)
      for(i = start; i < N - 1; i+=2){
        if (A[i] > A[i+1]){
	   temp = A[i];
	   A[i] = A[i+1];
	   A[i+1] = temp;
	   exch = 1;
	}
      }

      if (start == 0)
	      start = 1;
      else
	      start = 0;
   }

   printf("\nArray ordenado: ");
   for (i = 0; i < N; i++) {
	   printf("\n  %d", A[i]);
   }
   printf("\n");

   return 0;
}
