#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int m0[20][20], m1[20][20], resultado[20][20];

void gera_matriz(int n, int k){
   int valor;

   srand(time(NULL)+rand());
   printf("\tint m%d[%d][%d] = {{", k, n, n);
   for (int i = 1;i < n*n; i++){   
      valor = rand()%5 + 1;
      if (k == 0)
          m0[(i-1) / n ][(i-1) % n] = valor;
      else  m1[(i-1) / n ][(i-1) % n] = valor;

      printf("%d%s", valor, (i%n == 0)?"},\n\t                {": ",   ");
   }
   valor = rand() % 5 + 1;
   if (k == 0)
      m0[n-1][n-1] = valor;
   else m1[n-1][n-1] = valor;

   printf("%d}};\n\n", valor);
}

void multiplicar(int resultado[20][20], int m0[20][20], int m1[20][20], int n){
     for (int i = 0; i < n; i++){
	     for (int j = 0; j  < n; j++){
		     resultado[i][j] = 0;
		     for (int k = 0; k < n; k++){
			     resultado[i][j] += m0[i][k]*m1[k][j];
		     }
	     }
     }
} 

int main(){
    for (int i = 2; i < 12; i++){
       printf("void caso_de_teste0%d() {\n", i-1);
       printf("\tprintf(\" caso de teste %d \\n\");\n", i-1);
       gera_matriz(10, 0);
       gera_matriz(10, 1);

       multiplicar(resultado, m0, m1, 10);
       printf("\tint resultado[10][10];\n\n");
       printf("\tmultiplicar(resultado, m0, m1, 10);\n");
 
       for (int i = 0; i < 10; i++)
	       for (int j = 0; j < 10; j++)
		       printf("\ttestar(resultado[%d][%d], %d);\n",i, j, resultado[i][j]); 

       printf("\n");
       printf("\n}\n\n");
 
    }

    return 0;
}
