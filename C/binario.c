#include<stdio.h>


int binario(int n){
   int cont = 0;
   while (n >= 1){
	   cont = cont + 1;
	   printf("%d", n%2);
	   n = n / 2;
   }
   return cont;
}

int main(){

   printf("\n%d\n", binario(10));
}
