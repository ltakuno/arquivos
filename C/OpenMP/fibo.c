#include<omp.h>
#include<stdio.h>



int fibo(int n);

int main(){
   printf("fibo(10) = %d\n", fibo(220));
   return 0;
}



int fibo(int n){
   if (n < 2) return n;
   int x, y;

   #pragma omp task shared(x)
   {
	   x = fibo(n-1);
   }

   #pragma omp task shared(y)
   {
	   y = fibo(n-2);
   }

   #pragma omp taskwait
   return x + y;
}
