/*
 *   NEPS academy: ordenacao simples
 *   data: 01/10/2019
 * */


#include<stdio.h>
#include<stdlib.h>

int v[100006];

int comparador(const void *a, const void *b){
   return (*(int *)a - *(int *)b);
} 

int main(){
   int n;
   scanf("%d", &n);
   for (int i = 0; i < n; i++)
	   scanf("%d", &v[i]);

   qsort(v, n, sizeof(int), comparador);


   printf("%d", v[0]);
   for (int i = 1; i < n; i++)
	printf(" %d", v[i]);

   return 0;
}
