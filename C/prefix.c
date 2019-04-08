#include<stdio.h>
#include<math.h>


void iniciar_vetor(int a[], int n){
   for (int i =0; i < n; i++){
	   a[i] = i+1;
   }
}
void mostrar(int a[], int n){
   printf("[");
   for (int i = 0; i < n; i++) {
   	printf("%d ",a[i]);
   }
   printf("\x8]\n");

 
}

int main(){
   int a[8];
   int n = 8;

   iniciar_vetor(a, n);

   for (int j = 0; j < log(n)/log(2); j++)
	   for (int i = 1<<j; i < n; i++) {
	   	printf("a[%d] = a[%d] + a[%d]\n",i, i, i - (1 << j));
	   	a[i] = a[i] + a[i - (1 << j)];
	   	printf("a[%d] = %d\n ", i, a[i]);
	   }

   mostrar(a, n);
   return 0;
}
