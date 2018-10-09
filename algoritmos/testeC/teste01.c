#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
   int x = 53;
   printf("%ld\n", sizeof(int));
   switch(x & 0x80000000){
      case 0x80000000:
         printf("negativo!\n");
         break;

      case 0x0:
         printf("positivo!\n");
         break;
   }


   return 0;
}
