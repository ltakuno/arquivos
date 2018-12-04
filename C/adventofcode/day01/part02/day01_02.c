#include <stdio.h>
#include <stdlib.h>
int main(){


   int n, soma, v[1000000] = {0}, input[500000]= {0};
   int i, qtde = 0;
   v[0] = 1;
   while (scanf("%d", &n) != EOF) {
      soma += n;

      v[soma] ++;

      input[qtde] = n;
      qtde++;

      if (v[soma] == 2){
         printf("%d\n", soma);
         exit(0);
      }

   }

   

   for(;;){
      i = 0;
      while (i < qtde){
         soma += input[i];

         v[soma]++;

         if (v[soma] == 2) {
            printf("%d\n", soma);
            exit(0);
         }

         i++;
      }
   }

}
