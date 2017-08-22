#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int a = 0;
	long b = 0;
	long long c = 0;
	int i;

	printf ("%d %d %d\n", sizeof(a), sizeof(b), sizeof(c));
	for (i = 2; i <= 1024; i+=2)
		printf(" log10(%d) = %lf \n\n", i , log10((double)i)); 

	return 0;
}
