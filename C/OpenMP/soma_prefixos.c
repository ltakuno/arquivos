#include<omp.h>
#include<stdio.h>
#include<math.h>

#define log2(x) (log(x)/log(2))
#define max(a, b) ((a) > (b))? (a) : (b)

int main(){
   int A[8] = {2,3,1,3,1,4,2,1};
   int B[16] = {0};
   int P[16] = {0};

   int n = 8;

   // Vetor A é copiado para a segunda metade de B 
   #pragma omp parallel for 
   for (int i = 0; i < n; i++)
	   B[n + i] = A[i];

   for (int i = 0; i < 2*n; i++)
	printf("B[i] = %d\n", B[i]);

   // passo 1: subida na árvore
   for (int j = log2(n)-1; j >= 0; j--){
      #pragma omp parallel for 
      for (int i = 1 << j; i < 1 << (j+1); i++){
         printf("j = %d, i = %d, 2*i = %d\n",j, i, 2*i);
         B[i] = B[2*i] + B[2*i+1];	      
      }
   }  


   // passo 2: descida na árvore
   P[1] = B[1];

   for (int j = 1; j <= log2(n); j++){
      #pragma omp parallel for	   
      for (int i = 1 << j; i < 1 << (j+1) ; i++)
      {
          if (i % 2 == 0){
	     P[i] = P[i/2] - B[i+1]; // filho esquerdo
	  } else {
	     P[i] = P[(i-1)/2]; // filho direito
	  }
      }
   }

   for (int i = n; i < 2*n; i++)
	   printf("%d ", P[i]);

   printf("\n");

}
