#include<stdio.h>
#include<omp.h>

int main(){
   int i, n  = 10;
   int a[100], b[100], c[100];
   for (i = 0; i < n; i++){
      a[i] = 0;
      b[i] = 0;
      c[i] = 0;
   }

   #pragma omp parallel
   {
      int id = omp_get_thread_num();
      int j = 0;

      #pragma omp sections private(id, i) nowait
      {
          #pragma omp section 
	  {
	     for(i = 0; i < n; i++){
	        a[i] = a[i] + 1;
		id = omp_get_thread_num();
		printf("vetor A Thread = %d, I = %d\n", id, i);
	     
	     }    
	  }
          #pragma omp section
	  {
             // condicao de corrida pois i eh variavel compartilhada
	     for(j = 0; j < n; j++){
	         b[j] = b[j] + 1;
		 id = omp_get_thread_num();
		 printf("vetor B Thread  = %d, I = %d\n", id, j);
	     }
	  }
          #pragma omp section
	  printf("C Thread = %d\n", omp_get_thread_num());
      }

      #pragma omp master
      printf("D Thread = %d\n", omp_get_thread_num());	  
     
   }

   for (i = 0; i < n; i++)
      printf("a[%d] = %d, \tb[%d] = %d, \tc[%d] = %d\n", i, a[i], i, b[i], i , c[i]);
   return 0;
}
