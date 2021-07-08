#include<stdio.h>
#include<omp.h>

int main(){

   int n = 16;
   int v[16] = {16,2,1,4,8,13,10,14,5,3,12,11,9,7,6,15};

   int troca = 1, inicio = 0;
   int temp;
   while(troca||inicio){
      
      troca = 0;

      #pragma omp parallel for private(temp) shared(inicio, troca)
      for (int i = inicio; i < n-1; i+=2){
         if (v[i] > v[i+1]){
	    temp = v[i];
	    v[i] = v[i+1];
	    v[i+1] = temp;
	    troca = 1;
	 }
      }
      inicio = !inicio; 
   }

   for (int i = 0; i < n; i++){
      printf("%d   ", v[i]);
   }
   printf("\n");
}

