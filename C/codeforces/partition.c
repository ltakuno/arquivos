#include <stdio.h>
#include <stdlib.h>

// https://codeforces.com/problemset/problem/946/A

int compare (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}


int main (){
   int n, i = 0;
   int a[101];

   scanf("%d", &n);

   while (i < n){
        scanf("%d", &a[i]);
        i++;
   }
     
   qsort(a, n, sizeof(int), compare);

   int B, C;
   int max;
   
   B = 0;
   for (int j = 0; j < n; j++){
      B = B + a[j];	
   }
   
   C = 0;
   max = B - C;
   for (int k = 0; k < n; k++){
      B = B - a[k];
      C = C + a[k];

      if (B - C > max)
         max = B - C;
   }

   printf("maximo: %d\n", max);
   return 0;
}
