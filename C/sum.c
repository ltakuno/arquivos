#include<stdio.h>
#include<math.h>

void iniciar_vetor(int a[], int n){
   for (int i = 0; i < n; i++) {
	   a[i] = i+1;
   }
}


void mostrar(int a[], int n, int passo){
   printf("[");
   for (int i = 0; i < n; i = i + passo){
	   printf("%d ",a[i]);
   }
   printf("\x8]\n");
}

void mostrar_sub (int a[], int n, int inicio, int passo){
   printf("[");
   for (int i = inicio; i < n; i = i + passo){
	   printf("%d ",a[i]);
   }
   printf("\x8]\n");
}




int main(){
   int a[8] = {5,1,3,2,7,2,1,3};
   int n = 8;

//   iniciar_vetor(a, n);
   mostrar(a, n, 1);

   for (int i = 1; i <= log(n)/log(2); i++){
	   printf("Rodada : %d\n", i);
	   for (int j = 0; j < n/(1<<i); j++){
			   printf("a[%d] = a[%d] + a[%d]\n",j * (1<<i)+(1<<i)-1, j * (1<<i)+(1<<i)-1, j * (1<<i)+(1<<(i-1))-1);
			   a[j*(1<<i) + (1<<i)-1] = a[j * (1<<i)+(1<<i)-1] + a[j*(1<<i)+ (1<<(i-1))-1];
		   }
		   mostrar_sub(a, n,(1<<i)-1, (1<<i));
   }

   printf(" Resultado final: %d\n", a[n-1]);
   mostrar(a, n, 1);
   return 0;
}
