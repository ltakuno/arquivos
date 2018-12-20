#include<stdio.h>
#define MAX 20000


int calcula_total(int input[], int n, int label, int *i) { 
   if (*i >= n) return 0;

   // header
   int num_filhos = input[*i];
   int num_metadata = input[*i+1];
   int total = 0;
   *i = *i + 2;
   for (int filho = 0; filho < num_filhos; filho++) {
      label = label + 1;
      total = total + calcula_total(input,n, label, i);
   }

   for (int metadata = 0; metadata < num_metadata; metadata ++) {
      total = total + input[*i];
      *i = *i + 1;
   }
   return total;
} 


void part01(int input[], int n) {

   int i = 0;
   int total = calcula_total(input, n, 'A', &i);
   printf("part01: %d\n", total); 
}


int main() {
   int input[MAX], n = 0;
   int x;

   while (scanf("%d", &x) != EOF) { 
      input[n++] = x;
   }

   part01(input, n);
   return 0;
}
