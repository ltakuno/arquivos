#include<stdio.h>


int power_level(int x, int y, int grid_serial_num) {
   int rackID = x + 10;
   int p = rackID * y + grid_serial_num;
   p *= rackID;
   p = p / 100 % 10 - 5; 
   return p;  
}

int calcular_somatorio_grid (int x, int y, int tamanho, int m[301][301]){
   int total = 0;
   for (int yy = y; yy < y+tamanho; yy++)
     for (int xx = x; xx < x+tamanho; xx++) 
        total = total + m[yy][xx];

   return total;
}

void  mostrar_grid (int x, int y, int tamanho, int m[301][301]){
   for (int yy = y; yy < y+tamanho; yy++){
      for (int xx = x; xx < x+tamanho; xx++){
         printf("%d ", m[yy][xx]);
      }
      printf("\n");
   } 
}


int main() {
   int m[301][301];
   for (int y = 1; y <= 300; y++)
      for (int x = 1; x <= 300; x++)
         m[y][x] = power_level(x, y, 1723);


   int maior = -10000000, maiorx = 1, maiory = 1, maiort = 1;
   int p;

   for(int t = 1; t <= 300; t++) {
      for (int y = 1; y <= 300-t; y++) {
         for (int x = 1; x <= 300-t; x++) {
             p = calcular_somatorio_grid(x, y, t, m);
             if (p > maior) {
                maior = p;
                maiorx = x;
                maiory = y;
                maiort = t;
             }
         }
      }
   }


   printf("top-left (%d,%d), size: %d,  total power: %d\n", maiorx, maiory, maiort, maior);

   //mostrar_grid(maiorx, maiory, maiort, m);   
   return 0;
}
