#include<stdio.h>
#include<ctype.h>


int main(){
   char s[80] = "âáàãéêíóôõú";
   char *p;
    p = s;

   while (*p){
      int c = tolower(*p); 
      printf("(%d   -  %c)\n", c, c);
      p++;
   }

   return 0;
}
