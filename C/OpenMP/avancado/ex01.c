#include<stdio.h>
#include<omp.h>

int main(){
  #pragma omp parallel num_threads(10)
  {
    printf("omp_get_thread_num = %d\n", omp_get_thread_num());

    #pragma omp single
    { 
       printf("omp_get_num_procs = %d\n", omp_get_num_procs());
       printf("Numero max de threads = %d\n", omp_get_max_threads());
    }
  }
  return 0;
}
