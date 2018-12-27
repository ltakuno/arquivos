#include <stdio.h>
#include <string.h>

#define MAXX 80
#define MAXY 25

int main(){

   char linhas[MAXY][MAXX];
   char s[MAXX];
   int n = 0, x = 0, y = 0;
   memset(s, 0, MAXX);
   while (!feof(stdin)){
        fgets(s, MAXX, stdin);
        for (int i = 0; i < MAXX && s[i] != 0; i++) {
            if (s[i] == '>' || s[i] == '<' || s[i] == '^' || s[i] == 'v'){
               x = i;
               printf("(%d, %d)", x, y);
            }
        }
        y++; 
//	printf("%s", s);
        strcpy(linhas[n], s);
        memset(s, 0,  MAXX);
        n++;
   }

   

   return 0;
}
