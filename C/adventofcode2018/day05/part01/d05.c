#include<stdio.h>
#include<ctype.h>


char pilha[50000] = {0}; 
int topo = -1;



int main(){

   char c;
   while ((c = getchar()) != EOF){
      if (!isalpha(c)) continue;
      if ((toupper(c) == toupper(pilha[topo])) &&
          ((isupper(c) && islower(pilha[topo])) ||
          (islower(c) && isupper(pilha[topo]))) 
         )
      {
           printf("sai %c%c\n", pilha[topo], c);
           topo--;
      } else {
          printf("Empilha %c\n", c);
          pilha[++topo] = c;

      }
   }
   for (int i = 0; i <= topo; i++)
      putchar(pilha[i]);
   printf("\nAnswer: %d\n", topo+1);

}
