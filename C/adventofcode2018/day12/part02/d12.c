#include<stdio.h>
#include<string.h>
#define MAX 150000

char regras[40][10], next[40];
int nr = 0; 
int compareRegras(char *s, int i);

void mostrar(int geracao, char *s){

   printf("%2d: ", geracao);
   int ini = 0;
   int fim = strlen(s)-1;

   while (s[ini] == '.') ini++;
   while (s[fim] == '.') fim--;

   for (int i = ini; i <= fim; i++)
      printf("%c", s[i]);

   printf("\n"); 
}

 
int main(){
   char s[MAX], s1[MAX];
   int n;

   memset(s, '.', MAX-2);
   s[MAX-2] = 0;
   scanf("initial state: %s\n\n", s+5);
   n = strlen(s);
   s[n] = '.'; 
   while (scanf("%s => %c\n",regras[nr], &next[nr]) != EOF) {
      nr++;
   }
   printf( "Numero de regras: %d\n", nr);

   strcpy(s1, s);
   for (int geracao = 0; geracao < 20000; geracao++){
      mostrar(geracao, s1);
      for (int i = 3; i < MAX-10; i++){
         int r = compareRegras(s, i);
         if (r >= 0) {
           s1[i] = next[r];
         } else {
           s1[i] = '.';
         }
      }
      strcpy(s, s1);
   }

   mostrar(20000, s1);
   int pontos = -5, total = 0;
   for (int i = 0; i < MAX-10; i++){
      if (s[i] == '#'){
         total += pontos;
         printf("%d ", pontos);
      }
      pontos++;
   }
   printf("\npart01 : %d\n", total);
   return 0;
}

int compareRegras(char *s, int i){
   for (int r = 0; r < nr; r++){
      if (regras[r][0] == s[i-2] && 
          regras[r][1] == s[i-1] &&
          regras[r][2] == s[i] &&
          regras[r][3] == s[i+1] &&
          regras[r][4] == s[i+2] ) {           
          return r;
      }
   }
   return -1;
}
