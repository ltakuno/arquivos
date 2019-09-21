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
//   Função: computar_matriz_transposta()
//   Entrada: uma matriz e suas dimensoes (linhas e colunas) 
//   Saída:   a matriz transposta
//[]-------------------------------------------------------------[]
void computar_matriz_transposta(int **matriz, int linhas, int colunas, int **matriz_resultante){
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
   int **m1;
   int **transposta;

   printf("caso de teste 01\n");

   m1 = alocar_matriz(3,3);
   transposta = alocar_matriz(3,3);

   m1[0][0] = 2; m1[0][1] = 4; m1[0][2] = 7; 
   m1[1][0] = 2; m1[1][1] = 4; m1[1][2] = 7; 
   m1[2][0] = 2; m1[2][1] = 4; m1[2][2] = 7; 
   
   computar_matriz_transposta(m1, 3, 3, transposta);

   testar(transposta[0][0], 2); testar(transposta[0][1], 2); testar(transposta[0][2], 2); 
   testar(transposta[1][0], 4); testar(transposta[1][1], 4); testar(transposta[1][2], 4); 
   testar(transposta[2][0], 7); testar(transposta[2][1], 7); testar(transposta[2][2], 7); 

   liberar_matriz(m1, 3);
   liberar_matriz(transposta, 3);
}

void caso_de_teste02(){
   int **m1;
   int **transposta;

   printf("caso de teste 02\n");

   m1 = alocar_matriz(3,3);
   transposta = alocar_matriz(3,3);

   m1[0][0] =  1; m1[0][1] =  2; m1[0][2] =  3; 
   m1[1][0] =  7; m1[1][1] =  8; m1[1][2] =  9; 
   m1[2][0] = 13; m1[2][1] = 14; m1[2][2] = 15; 
   computar_matriz_transposta(m1, 3, 3, transposta);

   testar(transposta[0][0], 1); testar(transposta[0][1], 7); testar(transposta[0][2],13); 
   testar(transposta[1][0], 2); testar(transposta[1][1], 8); testar(transposta[1][2],14); 
   testar(transposta[2][0], 3); testar(transposta[2][1], 9); testar(transposta[2][2],15); 

   liberar_matriz(m1, 3);
   liberar_matriz(transposta, 3);
}

void caso_de_teste03(){
   int **m1;
   int **transposta;

   printf("caso de teste 03\n");

   m1 = alocar_matriz(3,3);
   transposta = alocar_matriz(3,3);


   m1[0][0] = 2; m1[0][1] = 4; m1[0][2] = 6; 
   m1[1][0] = 2; m1[1][1] = 4; m1[1][2] = 6;
   m1[2][0] = 2; m1[2][1] = 4; m1[2][2] = 6; 
   computar_matriz_transposta(m1, 3, 3, transposta);

   testar(transposta[0][0], 2); testar(transposta[0][1], 2); testar(transposta[0][2], 2); 
   testar(transposta[1][0], 4); testar(transposta[1][1], 4); testar(transposta[1][2], 4); 
   testar(transposta[2][0], 6); testar(transposta[2][1], 6); testar(transposta[2][2], 6); 

   liberar_matriz(m1, 3);
   liberar_matriz(transposta, 3);
}

void caso_de_teste04(){
   int **m1;
   int **transposta;

   printf("caso de teste 04\n");

   m1 = alocar_matriz(3,3);
   transposta = alocar_matriz(3,3);

   m1[0][0] = 1; m1[0][1] = 4; m1[0][2] = 7; 
   m1[1][0] = 2; m1[1][1] = 5; m1[1][2] = 8; 
   m1[2][0] = 3; m1[2][1] = 6; m1[2][2] = 9; 

   computar_matriz_transposta(m1, 3, 3, transposta);

   testar(transposta[0][0], 1); testar(transposta[0][1], 2); testar(transposta[0][2], 3); 
   testar(transposta[1][0], 4); testar(transposta[1][1], 5); testar(transposta[1][2], 6); 
   testar(transposta[2][0], 7); testar(transposta[2][1], 8); testar(transposta[2][2], 9); 

   liberar_matriz(m1, 3);
   liberar_matriz(transposta, 3);
}

void caso_de_teste05(){
   int **m1;
   int **transposta;

   printf("caso de teste 05\n");

   m1 = alocar_matriz(3,3);
   transposta = alocar_matriz(3,3);

   m1[0][0] = 1; m1[0][1] = 4; m1[0][2] = 1; 
   m1[1][0] = 1; m1[1][1] = 4; m1[1][2] = 1; 
   m1[2][0] = 1; m1[2][1] = 4; m1[2][2] = 1;

   computar_matriz_transposta(m1, 3, 3, transposta);

   testar(transposta[0][0], 1); testar(transposta[0][1], 1); testar(transposta[0][2], 1); 
   testar(transposta[1][0], 4); testar(transposta[1][1], 4); testar(transposta[1][2], 4); 
   testar(transposta[2][0], 1); testar(transposta[2][1], 1); testar(transposta[2][2], 1); 

   liberar_matriz(m1, 3);
   liberar_matriz(transposta, 3);
}

void caso_de_teste06(){
   int **m1;
   int **transposta;

   printf("caso de teste 06\n");

   m1 = alocar_matriz(3,3);
   transposta = alocar_matriz(3,3);

   m1[0][0] = 12; m1[0][1] = 14; m1[0][2] = 17; 
   m1[1][0] = 22; m1[1][1] = 42; m1[1][2] = 72; 
   m1[2][0] = 83; m1[2][1] = 63; m1[2][2] = 33; 

   computar_matriz_transposta(m1, 3, 3, transposta);

   testar(transposta[0][0], 12); testar(transposta[0][1], 22); testar(transposta[0][2], 83); 
   testar(transposta[1][0], 14); testar(transposta[1][1], 42); testar(transposta[1][2], 63); 
   testar(transposta[2][0], 17); testar(transposta[2][1], 72); testar(transposta[2][2], 33); 

   liberar_matriz(m1, 3);
   liberar_matriz(transposta, 3);
}

void caso_de_teste07(){
   int **m1;
   int **transposta;

   printf("caso de teste 07\n");

   m1 = alocar_matriz(3,3);
   transposta = alocar_matriz(3,3);

   m1[0][0] = 0; m1[0][1] = 1; m1[0][2] = 0; 
   m1[1][0] = 0; m1[1][1] = 1; m1[1][2] = 0; 
   m1[2][0] = 0; m1[2][1] = 1; m1[2][2] = 0; 
    
   computar_matriz_transposta(m1, 3, 3, transposta);

   testar(transposta[0][0], 0); testar(transposta[0][1], 0); testar(transposta[0][2], 0); 
   testar(transposta[1][0], 1); testar(transposta[1][1], 1); testar(transposta[1][2], 1); 
   testar(transposta[2][0], 0); testar(transposta[2][1], 0); testar(transposta[2][2], 0); 

   liberar_matriz(m1, 3);
   liberar_matriz(transposta, 3);
}

void caso_de_teste08(){
   int **m1;
   int **transposta;

   printf("caso de teste 08\n");

   m1 = alocar_matriz(3,3);
   transposta = alocar_matriz(3,3);

   m1[0][0] = 0; m1[0][1] = -1; m1[0][2] = 0;
   m1[1][0] = 0; m1[1][1] = -1; m1[1][2] = 0; 
   m1[2][0] = 0; m1[2][1] = -1; m1[2][2] = 0; 
    computar_matriz_transposta(m1, 3, 3, transposta);

   testar(transposta[0][0], 0);  testar(transposta[0][1], 0);  testar(transposta[0][2], 0); 
   testar(transposta[1][0], -1); testar(transposta[1][1], -1); testar(transposta[1][2], -1); 
   testar(transposta[2][0], 0);  testar(transposta[2][1], 0);  testar(transposta[2][2], 0); 

   liberar_matriz(m1, 3);
   liberar_matriz(transposta, 3);
}

void caso_de_teste09(){
   int **m1;
   int **transposta;

   printf("caso de teste 09\n");

   m1 = alocar_matriz(3,3);
   transposta = alocar_matriz(3,3);

   m1[0][0] = 3; m1[0][1] = 6; m1[0][2] = 9;
   m1[1][0] = 3; m1[1][1] = 6; m1[1][2] = 9; 
   m1[2][0] = 3; m1[2][1] = 6; m1[2][2] = 9; 
    computar_matriz_transposta(m1, 3, 3, transposta);

   testar(transposta[0][0], 3); testar(transposta[0][1], 3); testar(transposta[0][2], 3); 
   testar(transposta[1][0], 6); testar(transposta[1][1], 6); testar(transposta[1][2], 6); 
   testar(transposta[2][0], 9); testar(transposta[2][1], 9); testar(transposta[2][2], 9); 

   liberar_matriz(m1, 3);
   liberar_matriz(transposta, 3);
}

void caso_de_teste10(){
   int **m1;
   int **transposta;

   printf("caso de teste 10\n");

   m1 = alocar_matriz(3,6);
   transposta = alocar_matriz(3,3);

   m1[0][0] = 2; m1[0][1] = 8; m1[0][2] = 7; 
   m1[1][0] = 2; m1[1][1] = 4; m1[1][2] = 7;
   m1[2][0] = 2; m1[2][1] = 9; m1[2][2] = 7;    
   
   computar_matriz_transposta(m1, 3, 3, transposta);

   testar(transposta[0][0], 2); testar(transposta[0][1], 2); testar(transposta[0][2], 2); 
   testar(transposta[1][0], 8); testar(transposta[1][1], 4); testar(transposta[1][2], 9); 
   testar(transposta[2][0], 7); testar(transposta[2][1], 7); testar(transposta[2][2], 7); 

   liberar_matriz(m1, 3);
   liberar_matriz(transposta, 3);
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
