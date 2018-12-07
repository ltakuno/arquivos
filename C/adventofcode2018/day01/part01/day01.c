#include<stdio.h>

int main(){

   int n = 0, soma = 0;
   while (scanf("%d", &n) != EOF){
      soma += n;
   }


   printf("soma = %d\n", soma);
   return 0;
}
