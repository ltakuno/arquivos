#include<stdio.h>
#include<ctype.h>

char pilha[50000] = {0};
char input[50000];
 
void mostrar(char pilha[], int topo){
   for (int i = 0; i <= topo; i++)
      putchar(pilha[i]);
}

int main(){
  int letras[30] = {0}; 
   int topo;
   char c;
   int n = 0, menor_topo = 50000;

   while ((c = getchar()) != EOF){
      input[n++] = c;
      letras[tolower(c)-'a']++;       
   }

   for (int i = 0; i < 30; i++)
   {
      if (letras[i] > 0){
         printf("Removendo a letra %c\n", (i+'a'));
         topo = -1;
         for (int j = 0; j < n; j++){
            c = input[j];
            if (tolower(c) == (i + 'a')) continue;  

            if (!isalpha(c)) continue;
            if ((toupper(c) == toupper(pilha[topo])) &&
               ((isupper(c) && islower(pilha[topo])) ||
               (islower(c) && isupper(pilha[topo])))  )
               topo--;
            else 
               pilha[++topo] = c;
            
         }
      }
      if (topo+1 < menor_topo)
         menor_topo = topo+1;
   }



  printf("\nAnswer: %d\n", menor_topo);

}
