#include <stdio.h>
#define MAX 99999999

void inicializar_vetor(int v[]){
   v[0] = 3;
   v[1] = 7;
   for (int i = 2; i < MAX; i++)
      v[i] = 0;
}

void mostrar(int v[], int nr, int e1, int e2){
   for (int i = 0; i < nr; i++) {
      if (i == e1) 
         printf("(%d) ", v[i]);
      else if (i == e2)
         printf("[%d] ", v[i]);
      else 
         printf("%d ", v[i]);
   }
   printf("\n");
}

void mostrar_resposta(int v[]){
   printf("parte 01:");
   for (int i = MAX-10; i < MAX; i++)
      printf("%d",v[i]);
   printf("\n");
}      

void mostrar_resposta_parte2(int v[], int nr){
  int aux[6] = {2,0,9,2,3,1};
  //int aux[5] = {5,9,4,1,4};
  int achou;
  for (int i = 0; i < nr-6; i++){
     achou = 1;
     for (int j = 0; j < 6; j++){
          if (v[i + j] != aux[j]){
              achou = 0; 
          }
     }
     if (achou){ 
         printf("parte 02:%d\n", i);
         break;
     }
   }
   if (!achou) 
     printf("parte 02:deu ruim\n"); 
}

int v[MAX+100];
int main(){
   int nr = 2;
   int e1 = 0, e2 = 1;
   inicializar_vetor(v);
    
   while (nr <=  MAX) {
      int r = v[e1] + v[e2];
//      mostrar(v, nr, e1, e2); 
      if (r >= 10) {
         v[nr] = r / 10;
         v[nr + 1] = r % 10;
         nr += 2;
      } else {
         v[nr] = r;
         nr++;
      }
      e1 = (e1 + v[e1] + 1) % nr;
      e2 = (e2 + v[e2] + 1) % nr;
   }
//   mostrar(v, nr, e1, e2); 
   mostrar_resposta(v);
   mostrar_resposta_parte2(v, nr);
}
