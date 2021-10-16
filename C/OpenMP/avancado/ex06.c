#include<stdio.h>
#include<omp.h>


int main(){
   int n, id, i, j;
   n = 100000000;

   #pragma omp parallel
   {
      #pragma omp for schedule(runtime)
      for (i= 0; i < n;i++){
         j = i / 2;
      }
   }   
   return 0;
}
