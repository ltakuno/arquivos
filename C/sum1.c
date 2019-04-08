#include<stdio.h>
#include<math.h>

int main(){
   int a[8];
   int n = 8;
   int sum = 0;

   printf("[");
   for (int i = 0; i < n; i++) {
	   a[i] = i+1;
           sum += i+1;
	   printf("%d ",i+1);
   }
   printf("\x8]\n");

   for (int i = 0; i < n; i++)
	   for (int j = 1; j <= log(n)/log(2); j++)
		   if (i % (1<<j) == (1<<j)-1){
			   printf("a[%d] = a[%d] + a[%d]\n",i, i, i - (1<<(j-1)));
			   a[i] = a[i] + a[i- (1<<(j-1))];
			   printf("a[%d] = %d\n ", i, a[i]);

		   }

   printf("sum=%d,   sum=%d    sum=%d\n",sum, a[7], (1+8)*4);

   return 0;
}
