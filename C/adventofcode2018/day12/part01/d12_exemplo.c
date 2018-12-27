#include<stdio.h>
#include<string.h>

int compareRegras(char *s, int i, char regras[20][10], int nr);
 
int main(){
   char s[100], s1[100];
   char regras[20][10], next[20];
   char nr = 0;
   int n;

   memset(s, '.', 100);
   s[44] = 0;
   scanf("initial state: %s\n\n", s+5);
   n = strlen(s);
   s[n] = '.';

   while (scanf("%s => %c\n",regras[nr], &next[nr]) != EOF) {
      nr++;
   }

   strcpy(s1, s);
   for (int geracao = 0; geracao < 20; geracao++){
      printf("%d: %s\n", geracao, s1+2);
      for (int i = 0; i < 40; i++){
         int r = compareRegras(s, i, regras, nr);
         if (r >= 0) {
           s1[i] = next[r];
         } else {
           s1[i] = '.';
         }
      }
      strcpy(s, s1);
   }
   printf("20: %s\n",  s1+2);
   int pontos = -5, total = 0;
   for (int i = 0; i < 40; i++){
      if (s[i] == '#'){
         total += pontos;
         printf("%d ", pontos);
      }
      pontos++;
   }
 

   printf("\npart01 : %d\n", total);
   return 0;
}

int compareRegras(char *s, int i, char regras[20][10], int nr){
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
