/* O que acontece se declararmos numt e tid fora do bloco paralelo?*/

#include<omp.h>
#include<stdio.h>


int main(int argc, char *argv[])
{

    int numt, tid;
    #pragma omp parallel
    {
        numt = omp_get_num_threads();
	tid = omp_get_thread_num();
        printf("hello from thread %d of %d.\n", tid, numt);

    }
    return 0;

}

