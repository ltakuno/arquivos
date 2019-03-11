#include<omp.h>
#include<stdio.h>


int main(int argc, char *argv[])
{
    #pragma omp parallel
    {
        int numt = omp_get_num_threads();
	int tid = omp_get_thread_num();
        printf("hello from thread %d of %d.\n", tid, numt);

    }
    return 0;

}

