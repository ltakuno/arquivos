#include <stdio.h>

int main(){
   int x, y, dx, dy;

   while (scanf("position=< %d,  %d> velocity=< %d,  %d>", &x, &y, &dx, &y) != EOF){
	printf("posicao = <%d, %2d> velocidade=<%2d, %2d>\n", x, y, dx, dy);
   }

   return 0;
}
