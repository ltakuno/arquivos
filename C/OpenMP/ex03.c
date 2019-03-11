#include <omp.h>
#include <stdio.h>

#define TAM 600
#define PASSO 100
int a[TAM];

int main(int argc, char *argv[]){

    int i, soma = 0;


    for (i = 0; i < TAM; i++)
	    a[i] = 1;
    #pragma omp parallel
    {
        #pragma omp for
        for (i = 0; i < TAM; i += PASSO)
	{
	    int j, inicio = i, fim = i + PASSO - 1;
            printf("Computando a soma(%d, %d), tid=%d, numt=%d\n", inicio, fim, omp_get_thread_num(), omp_get_num_threads());

            #pragma omp task
	    {
                int soma_parcial = 0;
		printf("Tarefa computado a soma(%d, %d), tid=%d, numt=%d\n", inicio, fim, omp_get_thread_num(), omp_get_num_threads());

		for (j = inicio; j <= fim; j++)
		    soma_parcial += a[j];

                #pragma omp critical
		soma += soma_parcial;
            }
	}
    }
    printf("Soma=%d\n", soma);
    return 0;
}

