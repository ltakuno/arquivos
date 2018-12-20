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


int calcula_valor(int input[], int n, int *i){
   // header
   int num_filhos = input[*i];
   int num_metadata = input[*i+1];
   int total = 0;
 
   *i = *i + 2;

   if (num_filhos == 0) { 
      for (int metadata = 0; metadata < num_metadata; metadata++) {
         total = total + input[*i];
         *i = *i + 1;
      }

   } else {
      int total_filhos[100], f = 0;
      for(int filho = 0; filho < num_filhos; filho++) {
         total_filhos[f++] = calcula_valor(input, n, i);
      }

      for (int metadata = 0; metadata < num_metadata; metadata++) {
         if (input[*i] <= num_filhos) {
            total = total + total_filhos[input[*i] - 1];
         }         
         *i = *i + 1;
      }
   }

  return total;
}


void part02(int input[], int n) {
   int i = 0;
   int valorA = calcula_valor(input, n, &i);
   printf("part02: %d\n", valorA);
}


int main() {
   int input[MAX], n = 0;
   int x;

   while (scanf("%d", &x) != EOF) { 
      input[n++] = x;
   }

   part01(input, n);
   part02(input, n);
   return 0;
}
