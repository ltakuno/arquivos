#include<stdio.h>

void f(int x, int n){

   if (x < n){
      int ultimo = x % 10;

      printf(" %d ", x);  
      if (ultimo == 0)
	      f(x * 10 + (ultimo + 1), n);
      else if (ultimo == 9)
	      f(x * 10 + (ultimo -1), n);
      else {
      	      f(x * 10 + (ultimo + 1), n);
	      f(x * 10 + (ultimo - 1), n);
      }
   
   
   }
}


int main(){

   for (int i = 1; i <= 9; i++)
	   f(i, 256);



}
