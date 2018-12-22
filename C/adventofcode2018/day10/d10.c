#include <stdio.h>
#include <stdlib.h>
#define MAX 400
#define maior(a, b) (a > b)? a : b
#define menor(a, b) (a < b)? a : b

struct {
   long x, y, dx, dy; 
} pontos[MAX];

int n = 0;

void plotar(long minx, long maxx, long miny, long maxy){
    int achou;
    for (long y = miny; y <= maxy; y++) {
       for (long x = minx; x < maxx; x++) {
          achou = 0;
          for (int i = 0; i < n; i++){               
             if (pontos[i].x == x && pontos[i].y == y){
                achou = 1;
                break;
             }
          }
          if (achou) printf("#");
          else printf(" ");
      }
      printf("\n");
   }
   

   printf("minx : %ld, maxx: %ld, miny: %ld, maxy: %ld\n", minx, maxx, miny, maxy);      
   printf("\n------------------------------------\n");
}

void calcularLimites(long *minx, long *maxx, long *miny, long *maxy){
   for (int i = 0; i < n; i++){ 
      if (i == 0) {
         *minx = pontos[i].x;
         *maxx = pontos[i].x;
         *miny = pontos[i].y;
         *maxy = pontos[i].y;
      }
      else {
         *minx = menor(pontos[i].x, *minx);
         *maxx = maior(pontos[i].x, *maxx);
         *miny = menor(pontos[i].y, *miny);
         *maxy = maior(pontos[i].y, *maxy);
      }
   }
 
}

int main(){
   long x, y, dx, dy;
   long minx, miny, maxx, maxy;

   while(scanf("position=<%ld, %ld> velocity=<%ld, %ld>\n", &x, &y, &dx, &dy) != EOF) {
      pontos[n].x = x;
      pontos[n].y = y;
      pontos[n].dx = dx;
      pontos[n].dy = dy;  
      n++;
      //printf("posicao=<%2ld,%2ld> velocidade=<%2ld,%2ld>\n", x, y, dx, dy);
   }

   int ss = 0;   

   for (int s = 0; s <= 15000; s++){
     calcularLimites(&minx, &maxx, &miny, &maxy);

     if (labs(maxy - miny) <= 10){
        plotar(minx, maxx, miny, maxy);
        ss = s;
     }
     for (int i = 0; i < n; i++) {
        pontos[i].x += pontos[i].dx;
        pontos[i].y += pontos[i].dy; 
     }
         

   }

   printf("part02: %d\n", ss);

   return 0;
}
