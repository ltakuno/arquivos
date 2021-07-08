#include<stdio.h>

// Esta função recebe um inteiro x
// e um vetor crescente v[0..n-1]
// e devolve um índice j em 0..n 
// tal que v[j-1] < x <= v[j].

int 
buscaBinaria (int x, int n, int v[]) { 
   int e = -1, d = n; // atenção!
   while (e < d-1) {  
      int m = (e + d)/2;
      if (v[m] < x) e = m;
      else d = m; 
   }
   return d;
}

int main(){
   int v[10] = {1,2,3,4,5,6,7,8,9,10};
   int idx = buscaBinaria(-18, 10, v);
   printf("índice: %d \n", idx);

   return 0;
}
