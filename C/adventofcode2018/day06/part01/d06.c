#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int distancia_manhatan(int x, int y, int x1, int y1){
   return abs(x - x1) + abs(y - y1);
}

struct {
   int x, y, id, vizinhos;
} pontos[100], nenhum = {-1,-1,-1,-1};


int main(){
   int x, y;
   int n = 0;
   int xfim=0, yfim=0;
  
   while (scanf("%d, %d", &x, &y) != EOF){
	pontos[n].x = x;
        pontos[n].y = y;
        pontos[n].id = n;
        pontos[n].vizinhos = 0;

        if (x > xfim) xfim = x; 
        if (y > yfim) yfim = y; 
        n++;
   }

   int menor_distancia = INT_MAX;
   int id_menor = -1;

   for (int x1 = 0; x1 <= xfim; x1++) {
      for (int y1 = 0; y1 <= yfim; y1++) {
         id_menor = -1;
         menor_distancia = INT_MAX;
         for (int i = 0; i < n; i++) {
            int d = distancia_manhatan(pontos[i].x, pontos[i].y, x1, y1); 
            if (d == menor_distancia){
               id_menor = -1;
            } else if (d < menor_distancia) {
               //printf("menor distancia: %d, id : %d\n", menor_distancia, i);
               menor_distancia  = d;
               id_menor = i;
            }
         }
         if (id_menor != nenhum.id  && pontos[id_menor].vizinhos >= 0) { 
            pontos[id_menor].vizinhos ++;
         }

         if (id_menor != nenhum.id && (x1 == 0 || y1 == 0 || x1 == xfim || y1 == yfim)) {
            pontos[id_menor].vizinhos = -1;
         }
           
      }
   }

   int maior = INT_MIN;
   for (int i = 0; i < n; i++){
      if (pontos[i].vizinhos > maior)
         maior = pontos[i].vizinhos;
   }

   printf("Answer 01: %d\n", maior);

   return 0;
}
