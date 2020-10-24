#include<stdio.h>
#include<assert.h>
#include<string.h>

#define max(a,b) (a > b) ? (a) : (b)

//problem: given a string, find the length of the longest substring without repeating characters.
//
//example:
//  "abcabcbb", the answer is "abc" which length is 3
//  "bbbb", the answer is "b" which length is 1
//  "pwwwkew" the answer is "wke" which length is 3
//


void inicializa(int vet[], int n, int v){
   for (int i = 0; i < n; i++){
	   vet[i] = v;
   }
}

int findLongestSubstring(char s[]){
   int idx[128];
   inicializa(idx, 128, -1);
   int n = strlen(s);
   int tam = 0, inicio = -1;
   int max_tam = 0;

   for (int i = 0; i < n; i++){
      if (idx[s[i]] >= 0)
        inicio = idx[s[i]];	      
      tam = i - inicio;
      idx[s[i]] = i;
      max_tam = max(max_tam, tam);
     printf("%c - %d  inicio: %d  max: %d\n", s[i], tam, inicio, max_tam); 
   }
   return max_tam;
}

int main(){
   printf("%d\n", findLongestSubstring("abcabcbb"));
}

