#include<stdio.h>
#include<omp.h>


int main(){
   int n, i;

   n = 30;

   #pragma omp parallel
   {
      #pragma omp for schedule(dynamic,5)
      for(i = 0; i < n; i++){
         int id = omp_get_thread_num();
	 printf("Thread = %d, i = %d\n", id, i);
      }	   
   }   
   return 0;
}
