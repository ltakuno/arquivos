#include<stdio.h>
#include<omp.h>
#include<stdlib.h>
#include<math.h>


#define log2(n) (log(n)/log(2))

void mostra(int *v, int n){
   for (int i = 0; i < n; i++){
      printf("%i\t", i);
   }

   printf("\n");

   for (int i = 0; i < n; i++){
      printf("%i\t", v[i]);
   }
   printf("\n------------------------\n");
}

void pointer_jumping(int *prox, int n){
   int *p = (int *)calloc(n, sizeof(int));
   int *dist = (int *)calloc(n, sizeof(int));
   
   #pragma parallel for
   for (int i = 0; i < n; i++){
      p[i] = prox[i];
      if (p[i] == -1){
         dist[i] = 0;
      } else {
         dist[i] = 1;
      }
   }


   for(int j = 1; j <= log2(n); j++){
      #pragma parallel for	   
      for (int i = 0; i < n; i++){
         if (p[i] != -1) {
            mostra(dist, n);		 
	    dist[i] = dist[i] + dist[p[i]];
	    p[i] = p[p[i]];	 
	 }
      }
   }

   mostra(dist, n); 

   free(p);
   free(dist);
}

int main(){
   int n = 8;
   int nt = 4;
   int prox[8] = {-1, 5, 0, 6, 7, 3, 2, 1}; 

   omp_set_num_threads(nt);
   pointer_jumping(prox, n);
   return 0;
}

