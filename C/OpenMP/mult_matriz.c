#include<omp.h>
#include<stdio.h>

#define N 16

int main(){


   int a[N][N], b[N][N], c[N][N];

   for (int i = 0; i < N; i++){
      for (int j = 0; j < N; j++){
         a[i][j] = 1;
	 b[i][j] = 2;
      }
   }


   #pragma omp parallel for
   for (int i = 0; i < N; i++)
      #pragma omp parallel for 
      for (int j = 0; j < N; j++){
         int sum = 0;
         #pragma omp parallel for reduction(+:sum)
	 for (int k = 0; k < N; k++)
		 sum += a[i][k] * b[k][j];
         c[i][j] = sum;
      }

   for (int i = 0; i < N; i++){
      for (int j = 0; j < N; j++){
	      printf("%d ", c[i][j]);
      }
      printf("\n");
   }

   return 0;
}
