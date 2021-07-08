#include<stdio.h>
#include<openacc.h>

int main(){
	int a[100] = {0};
	int n = 100;
	#pragma acc kernels
	{
		for (int i = 0; i < n; i++)
			a[i] = 1;
	}

	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);

	return 0;
}

