#include<omp.h>
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
   int n, i;
   n = atoi(argv[1]);

   #pragma omp parallel if (n>10)
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
