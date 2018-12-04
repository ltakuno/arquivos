#include<stdio.h>
#include<string.h>

int main(){

   char s[100];
   int  freq[26], i, conta2 = 0, conta3 = 0, tem2, tem3;
   while (scanf("%s", s) != EOF){
      memset(freq, 0, 26 * sizeof(int));
      i = 0;
      while(s[i]){
         freq[s[i] - 'a']++;
         i++;
      }

      tem2 = 0;
      tem3 = 0;
      for (i = 0; i < 26; i++){
         if (!tem2 && freq[i] == 2){
            conta2++;
            tem2 = 1; 
         }
              
         if (!tem3 && freq[i] == 3){
            conta3++;
            tem3 = 1;
         }

         if (tem2 && tem3) break;
      }
      
   }

   printf("\n %d * %d = %d \n",conta2, conta3, conta2 * conta3);

   return 0;
}
