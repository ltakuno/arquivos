#include<stdio.h>
#include<omp.h>

int main(){
  omp_set_num_threads(8);
  #pragma omp parallel num_threads(4)
  {
    printf("Hello world\n");
    //printf("omp_get_thread_num = %d\n", omp_get_thread_num());

    #pragma omp single
    { 
       printf("omp_get_num_procs = %d\n", omp_get_num_procs());
       printf("Numero max de threads = %d\n", omp_get_max_threads());
    }
  }
  return 0;
}
