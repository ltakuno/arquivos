#include<omp.h>
#include<stdio.h>
#include<math.h>

#define log2(x) (log(x)/log(2))
#define max(a, b) ((a) > (b))? (a) : (b)

int main(){
   int A[8] = {1,3,5,7,8,6,4,2};
   int B[16] = {0};

   int n = 8;

   #pragma omp parallel for 
   for (int i = 0; i < n; i++)
	   B[n + i] = A[i];

   for (int i = 0; i < 2*n; i++)
	printf("B[i] = %d\n", B[i]);


   for (int j = log2(n)-1; j >= 0; j--){
      #pragma omp parallel for 
      for (int i = 1 << j; i < 1 << (j+1); i++){
         printf("j = %d, i = %d, 2*i = %d\n",j, i, 2*i);
         B[i] = max(B[2*i], B[2*i+1]);	      
      }
   }  

   printf("maximo = %d\n", B[1]);

}
