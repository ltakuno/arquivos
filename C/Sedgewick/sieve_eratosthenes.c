/*
 
 O seguinte programa imprime todos os primos menores do que 1000. 
 O método usado, que data do século 3 A.C., é chamado de "crivo de Eratosthenes"
 Este programa usa um array de booleans. O objetivo do programa é setar a[i] para 1 se i é primo, 0 caso contrário. Então, para cada i, setando o elemento do array correspondendo a cada múltiplo de i para 0, desde que cada número que é múltiplo de qualquer número não pode ser primo. E por fim ele percorre o array imprimindo os números primos.
 
 */


#include<stdio.h>
#define N 100

int main(){
   int i, j, a[N+1];
   for (a[1] = 0, i = 2; i <= N; i++) a[i] = 1;
   for (i = 2; i <= N/2; i++)
	   for (j = 2; j <= N/i; j++)
		   a[i*j] = 0;
   for (i = 1; i <= N; i++)
	   if (a[i]) printf("%4d", i);
   printf("\n");

   return 0;
}
