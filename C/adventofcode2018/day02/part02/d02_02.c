#include <stdio.h>
#include <string.h>
int conta_diferenca(char *s1, char *s2, char *s3){
   int total = 0;

   memset(s3, 0, 30 * sizeof(char));

   while (*s1 != '\0' && *s2 != '\0'){
      if (*s1 == *s2){
         *s3 = *s1;
         s3++;
      } else total++;

      s1++;
      s2++;
   }
   return total;
} 
int main(){

   char v[300][30], output[30];
   int i = 0, total=  0, k = 0;

   while (scanf("%s", v[i]) != EOF) {
      i++;
      total++;
   }


   for (i = 0; i < total; i++)
       for (k = i + 1; k < total; k++)
           if (conta_diferenca(v[i], v[k], output) == 1)
              printf("%s\n", output);

   return 0;
}
