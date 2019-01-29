#include <stdio.h>
#include <string.h>

#define MAXX 22660
#define MAXY 160

typedef enum { DIREITA, ESQUERDA, CIMA, BAIXO } Direcao;
typedef enum { ESQ, RETO, DIR } OpcaoMudarDirecaoInterseccao;

int DirecaoLinha[4] = {1,-1,0,0};
int DirecaoColuna[4] = {0,0,-1,1};  

typedef struct {
  int  x;
  int  y;
  Direcao direcao;
  OpcaoMudarDirecaoInterseccao mudarPara;
} Carro;

int tem_colisao(Carro carros[], int nc){
   for (int i  = 0; i < nc; i++) {
     for (int j = i + 1; j < nc; j++) {
        if (carros[i].x == carros[j].x && carros[i].y == carros[j].y)
             return 1;
     }
   }
   return 0;
}

int main(){

   Carro carros[20];
   int nc = 0;
   char mapa[MAXY][MAXX];
   char s[MAXX];
   int n = 0, x = 0, y = 0, i = 0, m = 0;
   memset(s, 0, MAXX);
   while (!feof(stdin)){
        fgets(s, MAXX, stdin);
        for (i = 0; i < MAXX && s[i] != 0; i++) {
            if (s[i] == '>' || s[i] == '<' || s[i] == '^' || s[i] == 'v'){
               x = i;
               printf("(%d, %d)\n", x, y);
               carros[nc].x = x;
               carros[nc].y = y;

               if (s[i] == '>') {
                  carros[nc].direcao = DIREITA;
                  s[i] = '-';
               }

               if (s[i] == '<') {
                  carros[nc].direcao = ESQUERDA;
                  s[i] = '-';
               }

               if (s[i] == '^') { 
                  carros[nc].direcao = CIMA;
                  s[i] = '|';
               }

               if (s[i] == 'v') {
                   carros[nc].direcao = BAIXO;
                   s[i] = '|';
               }
    
               nc++;
            }
        }
        if (m == 0) 
           m = i;
        y++; 
//	printf("%s", s);
        strcpy(mapa[n], s);
        memset(s, 0,  MAXX);
        n++;
   }
   printf("Numero de carros: %d\n", nc);

   while (!tem_colisao(carros, nc)){
      for (int i = 0; i < nc; i++) { 
         x = carros[i].x + DirecaoLinha[carros[i].direcao];
         y = carros[i].y + DirecaoColuna[carros[i].direcao];
         switch(mapa[y][x]){
            case '/':
               switch(carros[i].direcao){
                   case ESQUERDA:
                       carros[i].direcao = BAIXO;
                       break;
                   case CIMA:
                       carros[i].direcao = DIREITA;
                       break;
                   case DIREITA:
                       carros[i].direcao = CIMA;
                       break;
                   case BAIXO:
                       carros[i].direcao = ESQUERDA;
                       break;
               }
            break;

            case '\\':
                switch(carros[i].direcao){
                   case ESQUERDA:
                       carros[i].direcao = CIMA;
                       break;
                   case CIMA:
                       carros[i].direcao = ESQUERDA;
                       break;
                   case DIREITA:
                       carros[i].direcao = BAIXO;
                       break;
                   case BAIXO:
                       carros[i].direcao = DIREITA;
                       break;
               }
            
            break;   
 
         }
         carros[i].x = carros[i].x + DirecaoLinha[carros[i].direcao];
         carros[i].y = carros[i].y + DirecaoColuna[carros[i].direcao];
         

      }
   }

   return 0;
}
