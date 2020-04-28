#include <stdio.h>
#include <stdlib.h>
int main(){

  int n, i=0, a[100], sum = 0;
  scanf("%d", &n);
  while(i < n){
    scanf("%d", &a[i]);
    sum += abs(a[i]);
    i++;
  }

  printf("%d", sum);
  
  return 0;
}
