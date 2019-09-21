#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<math.h>

//[]-------------------------------------------------------------[]
//   Função: alocar_matriz()
//   Entrada: numero de linhas e numero de colunas
//   Saída:   a matriz alocada dinamicamente
//[]-------------------------------------------------------------[]
int **alocar_matriz(int linhas, int colunas){
    // colocar o seu codigo aqui
    return NULL;
}

//[]-------------------------------------------------------------[]
//   Função: liberar_matriz()
//   Entrada: numero de linhas e a matriz
//   Saída:   a matriz liberar_matrizda
//[]-------------------------------------------------------------[]
void liberar_matriz(int **matriz, int linhas){
   // colocar o seu codigo aqui
}

//[]-------------------------------------------------------------[]
//   Função: somar_matriz()
//   Entrada:  matriz a e b e suas dimensoes (linhas e colunas) 
//   Saída:   a matriz resultante contendo a soma entre a e b.
//[]-------------------------------------------------------------[]
void somar_matriz(int **matriz_resultante, int **matriz_a, int **matriz_b, int linhas, int colunas){
   // colocar o seu codigo aqui
}


//[]-------------------------------------------------------------[]
//   Função: testar()
//   Entrada: valor obtido da funcao, valor esperado
//   Saída: ok se obtido igual a esperado e nao ok caso contrario
//[]-------------------------------------------------------------[]
void testar(int obtido, int esperado){
   if (obtido == esperado) 
	   printf("Parabéns !!!");
   else
	   printf("Ainda não !!!");
   printf(" obtido: %d  esperado: %d\n", obtido, esperado);
   assert(obtido == esperado);
}

//[]-------------------------------------------------------------[]
//    Casos de testes
//[]-------------------------------------------------------------[]
void caso_de_teste01(){
   int **a, **b, **resultado;

   printf("caso de teste 01\n");

   a = alocar_matriz(3,3);
   b = alocar_matriz(3,3);

   resultado = alocar_matriz(3,3);

   a[0][0] = 2; a[0][1] = 4; a[0][2] = 7; 
   a[1][0] = 2; a[1][1] = 4; a[1][2] = 7; 
   a[2][0] = 2; a[2][1] = 4; a[2][2] = 7; 
   
   b[0][0] = 2; b[0][1] = 4; b[0][2] = 7; 
   b[1][0] = 2; b[1][1] = 4; b[1][2] = 7; 
   b[2][0] = 2; b[2][1] = 4; b[2][2] = 7; 
 
   somar_matriz(resultado, a, b, 3, 3);

   testar(resultado[0][0], 4); testar(resultado[0][1], 8); testar(resultado[0][2], 14);
   testar(resultado[1][0], 4); testar(resultado[1][1], 8); testar(resultado[1][2], 14); 
   testar(resultado[2][0], 4); testar(resultado[2][1], 8); testar(resultado[2][2], 14); 

   liberar_matriz(a, 3);
   liberar_matriz(b, 3);
   liberar_matriz(resultado, 3);
}

void caso_de_teste02(){
   int **a, **b, **resultado;

   printf("caso de teste 02\n");

   a = alocar_matriz(3,3);
   b = alocar_matriz(3,3);

   resultado = alocar_matriz(3,3);

   a[0][0] =  1; a[0][1] =  2; a[0][2] =  3; 
   a[1][0] =  7; a[1][1] =  8; a[1][2] =  9; 
   a[2][0] = 13; a[2][1] = 14; a[2][2] = 15; 

   b[0][0] = 2; b[0][1] = 4; b[0][2] = 7; 
   b[1][0] = 2; b[1][1] = 4; b[1][2] = 7; 
   b[2][0] = 2; b[2][1] = 4; b[2][2] = 7; 
 
   somar_matriz(resultado, a, b, 3, 3);
   printf("resultado[0][0] = %d, a[0][0] = %d, b[0][0] = %d\n", resultado[0][0], a[0][0], b[0][0]);

   testar(resultado[0][0], 3);  testar(resultado[0][1], 6);  testar(resultado[0][2],10); 
   testar(resultado[1][0], 9);  testar(resultado[1][1], 12); testar(resultado[1][2],16); 
   testar(resultado[2][0], 15); testar(resultado[2][1], 18); testar(resultado[2][2],22); 

   liberar_matriz(a, 3);
   liberar_matriz(b, 3);

   liberar_matriz(resultado, 3);
}

void caso_de_teste03(){
   int **a, **b, **resultado;

   printf("caso de teste 03\n");

   a = alocar_matriz(3,3);
   b = alocar_matriz(3,3);

   resultado = alocar_matriz(3,3);

   a[0][0] = 2; a[0][1] = 4; a[0][2] = 6; 
   a[1][0] = 2; a[1][1] = 4; a[1][2] = 6;
   a[2][0] = 2; a[2][1] = 4; a[2][2] = 6; 

   b[0][0] = 2; b[0][1] = 4; b[0][2] = 7; 
   b[1][0] = 2; b[1][1] = 4; b[1][2] = 7; 
   b[2][0] = 2; b[2][1] = 4; b[2][2] = 7; 

   somar_matriz(resultado, a, b, 3, 3);

   testar(resultado[0][0], 4); testar(resultado[0][1], 8); testar(resultado[0][2], 13); 
   testar(resultado[1][0], 4); testar(resultado[1][1], 8); testar(resultado[1][2], 13); 
   testar(resultado[2][0], 4); testar(resultado[2][1], 8); testar(resultado[2][2], 13); 

   liberar_matriz(a, 3);
   liberar_matriz(b, 3);
 
   liberar_matriz(resultado, 3);
}

void caso_de_teste04(){
   int **a, **b, **resultado;


   printf("caso de teste 04\n");

   a = alocar_matriz(3,3);
   b = alocar_matriz(3,3);

   resultado = alocar_matriz(3,3);

   a[0][0] = 1; a[0][1] = 4; a[0][2] = 7; 
   a[1][0] = 2; a[1][1] = 5; a[1][2] = 8; 
   a[2][0] = 3; a[2][1] = 6; a[2][2] = 9; 

   b[0][0] = 2; b[0][1] = 4; b[0][2] = 7; 
   b[1][0] = 2; b[1][1] = 4; b[1][2] = 7; 
   b[2][0] = 2; b[2][1] = 4; b[2][2] = 7; 
 
   somar_matriz(resultado, a, b, 3, 3);

   testar(resultado[0][0], 3); testar(resultado[0][1],  8); testar(resultado[0][2], 14); 
   testar(resultado[1][0], 4); testar(resultado[1][1],  9); testar(resultado[1][2], 15); 
   testar(resultado[2][0], 5); testar(resultado[2][1], 10); testar(resultado[2][2], 16); 

   liberar_matriz(a, 3);
   liberar_matriz(b, 3);
   liberar_matriz(resultado, 3);
}

void caso_de_teste05(){
   int **a, **b, **resultado;


   printf("caso de teste 05\n");

   a = alocar_matriz(3,3);
   b = alocar_matriz(3,3);

   resultado = alocar_matriz(3,3);

   a[0][0] = 1; a[0][1] = 4; a[0][2] = 1; 
   a[1][0] = 1; a[1][1] = 4; a[1][2] = 1; 
   a[2][0] = 1; a[2][1] = 4; a[2][2] = 1;

   b[0][0] = 2; b[0][1] = 4; b[0][2] = 7; 
   b[1][0] = 2; b[1][1] = 4; b[1][2] = 7; 
   b[2][0] = 2; b[2][1] = 4; b[2][2] = 7; 

   somar_matriz(resultado, a, b, 3, 3);

   testar(resultado[0][0], 3); testar(resultado[0][1], 8); testar(resultado[0][2], 8); 
   testar(resultado[1][0], 3); testar(resultado[1][1], 8); testar(resultado[1][2], 8); 
   testar(resultado[2][0], 3); testar(resultado[2][1], 8); testar(resultado[2][2], 8); 

   liberar_matriz(a, 3);
   liberar_matriz(b, 3);
   liberar_matriz(resultado, 3);
}

void caso_de_teste06(){
   int **a, **b, **resultado;


   printf("caso de teste 06\n");

   a = alocar_matriz(3,3);
   b = alocar_matriz(3,3);
   resultado = alocar_matriz(3,3);
 

   a[0][0] = 12; a[0][1] = 14; a[0][2] = 17; 
   a[1][0] = 22; a[1][1] = 42; a[1][2] = 72; 
   a[2][0] = 83; a[2][1] = 63; a[2][2] = 33; 

   b[0][0] = 2; b[0][1] = 4; b[0][2] = 7; 
   b[1][0] = 2; b[1][1] = 4; b[1][2] = 7; 
   b[2][0] = 2; b[2][1] = 4; b[2][2] = 7; 

   somar_matriz(resultado, a, b, 3, 3);

   testar(resultado[0][0], 14); testar(resultado[0][1], 18); testar(resultado[0][2], 24); 
   testar(resultado[1][0], 24); testar(resultado[1][1], 46); testar(resultado[1][2], 79); 
   testar(resultado[2][0], 85); testar(resultado[2][1], 67); testar(resultado[2][2], 40); 

   liberar_matriz(a, 3);
   liberar_matriz(b, 3);
   liberar_matriz(resultado, 3);
}

void caso_de_teste07(){
   int **a, **b, **resultado;


   printf("caso de teste 07\n");

   a = alocar_matriz(3,3);
   b = alocar_matriz(3,3);
   resultado = alocar_matriz(3,3);
 
   a[0][0] = 0; a[0][1] = 1; a[0][2] = 0; 
   a[1][0] = 0; a[1][1] = 1; a[1][2] = 0; 
   a[2][0] = 0; a[2][1] = 1; a[2][2] = 0; 

   b[0][0] = 2; b[0][1] = 4; b[0][2] = 7; 
   b[1][0] = 2; b[1][1] = 4; b[1][2] = 7; 
   b[2][0] = 2; b[2][1] = 4; b[2][2] = 7; 

   somar_matriz(resultado, a, b, 3, 3);
   
   testar(resultado[0][0], 2); testar(resultado[0][1], 5); testar(resultado[0][2], 7); 
   testar(resultado[1][0], 2); testar(resultado[1][1], 5); testar(resultado[1][2], 7); 
   testar(resultado[2][0], 2); testar(resultado[2][1], 5); testar(resultado[2][2], 7); 

   liberar_matriz(a, 3);
   liberar_matriz(b, 3);
   liberar_matriz(resultado, 3);
}

void caso_de_teste08(){
   int **a, **b, **resultado;


   printf("caso de teste 08\n");

   a = alocar_matriz(3,3);
   b = alocar_matriz(3,3);
   resultado = alocar_matriz(3,3);

   a[0][0] = 0; a[0][1] = -1; a[0][2] = 0;
   a[1][0] = 0; a[1][1] = -1; a[1][2] = 0; 
   a[2][0] = 0; a[2][1] = -1; a[2][2] = 0; 

   b[0][0] = 2; b[0][1] = 4; b[0][2] = 7; 
   b[1][0] = 2; b[1][1] = 4; b[1][2] = 7; 
   b[2][0] = 2; b[2][1] = 4; b[2][2] = 7; 

   somar_matriz(resultado, a, b, 3, 3);
 
   testar(resultado[0][0], 2); testar(resultado[0][1], 3);  testar(resultado[0][2], 7); 
   testar(resultado[1][0], 2); testar(resultado[1][1], 3);  testar(resultado[1][2], 7); 
   testar(resultado[2][0], 2); testar(resultado[2][1], 3);  testar(resultado[2][2], 7); 

   liberar_matriz(a, 3);
   liberar_matriz(b, 3);

   liberar_matriz(resultado, 3);
}

void caso_de_teste09(){
   int **a, **b, **resultado;


   printf("caso de teste 09\n");

   a = alocar_matriz(3,3);
   b = alocar_matriz(3,3);
   resultado = alocar_matriz(3,3);

   a[0][0] = 3; a[0][1] = 6; a[0][2] = 9;
   a[1][0] = 3; a[1][1] = 6; a[1][2] = 9; 
   a[2][0] = 3; a[2][1] = 6; a[2][2] = 9; 

   b[0][0] = 2; b[0][1] = 4; b[0][2] = 7; 
   b[1][0] = 2; b[1][1] = 4; b[1][2] = 7; 
   b[2][0] = 2; b[2][1] = 4; b[2][2] = 7; 

   somar_matriz(resultado, a, b, 3, 3);
 
   testar(resultado[0][0], 5); testar(resultado[0][1], 10); testar(resultado[0][2], 16); 
   testar(resultado[1][0], 5); testar(resultado[1][1], 10); testar(resultado[1][2], 16); 
   testar(resultado[2][0], 5); testar(resultado[2][1], 10); testar(resultado[2][2], 16); 

   liberar_matriz(a, 3);
   liberar_matriz(b, 3);
   liberar_matriz(resultado, 3);
}

void caso_de_teste10(){
   int **a, **b, **resultado;

   printf("caso de teste 10\n");

   a = alocar_matriz(3,6);
   b = alocar_matriz(3,3);
   resultado = alocar_matriz(3,3);

   a[0][0] = 2; a[0][1] = 8; a[0][2] = 7; 
   a[1][0] = 2; a[1][1] = 4; a[1][2] = 7;
   a[2][0] = 2; a[2][1] = 9; a[2][2] = 7;    

   b[0][0] = 2; b[0][1] = 4; b[0][2] = 7; 
   b[1][0] = 2; b[1][1] = 4; b[1][2] = 7; 
   b[2][0] = 2; b[2][1] = 4; b[2][2] = 7; 
 
   somar_matriz(resultado, a, b, 3, 3);
   
   testar(resultado[0][0], 4); testar(resultado[0][1], 12); testar(resultado[0][2], 14); 
   testar(resultado[1][0], 4); testar(resultado[1][1],  8); testar(resultado[1][2], 14); 
   testar(resultado[2][0], 4); testar(resultado[2][1], 13); testar(resultado[2][2], 14); 

   liberar_matriz(a, 3);
   liberar_matriz(b, 3);

   liberar_matriz(resultado, 3);
}


//[]-------------------------------------------------------------[]
//    Casos de testes
//[]-------------------------------------------------------------[]
int main(){
   caso_de_teste01(); 
   caso_de_teste02(); 
   caso_de_teste03(); 
   caso_de_teste04(); 
   caso_de_teste05(); 
   caso_de_teste06(); 
   caso_de_teste07(); 
   caso_de_teste08(); 
   caso_de_teste09(); 
   caso_de_teste10(); 
   return 0;
}
