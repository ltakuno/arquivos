#include "mpi.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define LIMITE 2500000
#define MESTRE 0

int eh_primo(int n){

  int i, raiz;
  raiz = (int) sqrt(n);
  for (i = 3; i <= raiz; i+=2)
	if ((n % i)  == 0)
		return 0;
  return 1;
}

int main(int argc, char *argv[]){

	int id, n;
	int avanco, numero, inicio;
	int contador_primos = 0, num_total_primos = 0;
	int primo_encontrado = 0, maximo_primo = 0;

	MPI_Init(&argc, &argv);
	MPI_Comm_rank(MPI_COMM_WORLD, &id);
	MPI_Comm_size(MPI_COMM_WORLD, &n);
	avanco = n * 2;
	inicio = (id * 2) + 1;

	if (id == MESTRE){
		for (numero = inicio; numero <= LIMITE; numero += avanco)
			if(eh_primo(numero)){
				contador_primos++;
				primo_encontrado = numero;
			}

		MPI_Reduce(&contador_primos, &num_total_primos, 1, MPI_INT, MPI_SUM, MESTRE, MPI_COMM_WORLD);
		MPI_Reduce(&primo_encontrado, &maximo_primo, 1, MPI_INT, MPI_MAX, MESTRE, MPI_COMM_WORLD);
		printf("O maior primo eh %d, total %d\n", maximo_primo, num_total_primos);

	} else {  // todas as outras tarefas

		for (numero = inicio; numero <= LIMITE; numero += avanco)
			if (eh_primo(numero)){
				contador_primos++;
				primo_encontrado = numero;	
			}
		MPI_Reduce(&contador_primos, &num_total_primos, 1, MPI_INT, MPI_SUM, MESTRE, MPI_COMM_WORLD);
		MPI_Reduce(&primo_encontrado, &maximo_primo, 1, MPI_INT, MPI_MAX, MESTRE, MPI_COMM_WORLD);
	}
	MPI_Finalize();
}

