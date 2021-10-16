#include<omp.h>
#include<stdio.h>

int main(){
   int n, i;
   n = 10;

   #pragma omp parallel
   {
      int id;
      #pragma omp for
      for (i = 0; i < n; i++){
         id = omp_get_thread_num();
	 printf("Thread = %d, i = %d\n", id, i);
      }
   
   }

   return 0;
}
