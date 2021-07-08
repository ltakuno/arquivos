#include<omp.h>
#include<stdio.h>
#include<math.h>

#define log2(x) (log(x)/log(2))
#define max(a, b) ((a) > (b))? (a) : (b)

int main(){
   int A[16] = {1,3,5,7,8,6,4,2,10,9,11,15,12,13,14,16};
   int B[8] = {0};

   int n = 16;
   int p;
   #pragma omp parallel  
   {
      p = omp_get_num_threads();
      int tid = omp_get_thread_num();
      #pragma omp for 
      for (int i = 0; i < p; i++){
	   B[p + i] = A[i * n/p];
	   for (int j = 1; j < n/p; j++){
	      if (A[i * n/p + j] > B[p + i])
                 B[p + i] = A[i * n/p + j];  
	   }
      }
   }

   printf("p = %d\n", p);
   for (int i = 0; i < 2*p; i++)
	printf("B[i] = %d\n", B[i]);


   for (int j = log2(p)-1; j >= 0; j--){
      #pragma omp parallel for 
      for (int i = 1 << j; i < 1 << (j+1); i++){
         printf("j = %d, i = %d, 2*i = %d\n",j, i, 2*i);
         B[i] = max(B[2*i], B[2*i+1]);	      
      }
   }  

   printf("maximo = %d\n", B[1]);
   
   return 0;
}
