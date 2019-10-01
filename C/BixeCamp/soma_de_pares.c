#include<stdio.h>

int main(){
	int s[10]={7,9,12,13,17,20,21,27,30,32};

	int i, j, n = 10;
	i = 0; j = n - 1;
	int x, h;
	scanf("%d", &x);

	while(i < j){
	   if (s[i] + s[j] == x){
	   	printf("Achei\n");
		return 0;
	   }
	   h = s[i] + s[j];
           if (h > x) j--;
	   else       i++;
	}
	printf( "Não achei!\n ");
	return 0;
}
