#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<math.h>


//[]-------------------------------------------------------------[]
//   Função: alocar_vetor()
//   Entrada: um inteiro indicando o tamanho do vetor 
//           (número de elementos)
//   Saída:   o vetor alocado dinamicamente
//[]-------------------------------------------------------------[]
int *alocar_vetor(int tamanho){
   int *v = (int *) calloc(tamanho, sizeof(int));
   return v;
}

//[]-------------------------------------------------------------[]
//   Função: alocar_matriz()
//   Entrada: numero de linhas e numero de colunas
//   Saída:   a matriz alocada dinamicamente
//[]-------------------------------------------------------------[]
int **alocar_matriz(int linhas, int colunas){
    // colocar o seu codigo aqui
    int **m = (int **)calloc(linhas, sizeof(int *));

    for (int i = 0; i < linhas; i++){
       m[i] = (int *) calloc(colunas, sizeof(int));
    }

    return m;
}

//[]-------------------------------------------------------------[]
//   Função: liberar_matriz()
//   Entrada: numero de linhas e a matriz
//   Saída:   a matriz liberar_matrizda
//[]-------------------------------------------------------------[]
void liberar_matriz(int **matriz, int linhas){
   // colocar o seu codigo aqui
   for (int i = 0; i < linhas; i++)
	   free(matriz[i]);

   free(matriz);
}

//[]-------------------------------------------------------------[]
//   Função: somar_por_coluna()
//   Entrada: matriz e suas dimensoes (linhas e colunas) 
//   Saída:   um vetor em que cada posicao i do vetor contem o 
//            somatorio dos elementos que estão na coluna i da 
//            matriz
//[]-------------------------------------------------------------[]
void somar_por_coluna(int **matriz, int linhas, int colunas, int *valor_soma){
   // colocar o seu codigo aqui
   
   for (int j = 0; j < colunas; j++){
      valor_soma[j] = 0;
      for (int i = 0; i < linhas; i++){
         valor_soma[j] += matriz[i][j];
      }
   }
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
}

//[]-------------------------------------------------------------[]
//    Casos de testes
//[]-------------------------------------------------------------[]
void caso_de_teste01(){
   int **m1;
   int *valor_soma;

   m1 = alocar_matriz(3,6);
   valor_soma = alocar_vetor(6);

   m1[0][0] = 2; m1[0][1] = 4; m1[0][2] = 7; m1[0][3] = 8; m1[0][4] = 12; m1[0][5] = 3;
   m1[1][0] = 2; m1[1][1] = 4; m1[1][2] = 7; m1[1][3] = 8; m1[1][4] = 12; m1[1][5] = 3;
   m1[2][0] = 2; m1[2][1] = 4; m1[2][2] = 7; m1[2][3] = 8; m1[2][4] = 12; m1[2][5] = 3;
   
   somar_por_coluna(m1, 3, 6, valor_soma);

   testar(valor_soma[0], 6);
   testar(valor_soma[1], 12);
   testar(valor_soma[2], 21);
   testar(valor_soma[3], 24);
   testar(valor_soma[4], 36);
   testar(valor_soma[5], 9);

   free(valor_soma);
   liberar_matriz(m1, 3);
}

void caso_de_teste02(){
   int **m1;
   int *valor_soma;

   m1 = alocar_matriz(3,6);
   valor_soma = alocar_vetor(6);


   m1[0][0] =  1; m1[0][1] =  2; m1[0][2] =  3; m1[0][3] =  4; m1[0][4] =  5; m1[0][5] =  6;
   m1[1][0] =  7; m1[1][1] =  8; m1[1][2] =  9; m1[1][3] = 10; m1[1][4] = 11; m1[1][5] = 12;
   m1[2][0] = 13; m1[2][1] = 14; m1[2][2] = 15; m1[2][3] = 16; m1[2][4] = 17; m1[2][5] = 18;
   somar_por_coluna(m1, 3, 6, valor_soma);

   testar(valor_soma[0], 21);
   testar(valor_soma[1], 24);
   testar(valor_soma[2], 27);
   testar(valor_soma[3], 30);
   testar(valor_soma[4], 33);
   testar(valor_soma[5], 36);

   free(valor_soma);
   liberar_matriz(m1, 3);
}

void caso_de_teste03(){
   int **m1;
   int *valor_soma;

   m1 = alocar_matriz(3,6);
   valor_soma = alocar_vetor(6);


   m1[0][0] = 2; m1[0][1] = 4; m1[0][2] = 6; m1[0][3] = 8; m1[0][4] = 10; m1[0][5] = 12;
   m1[1][0] = 2; m1[1][1] = 4; m1[1][2] = 6; m1[1][3] = 8; m1[1][4] = 10; m1[1][5] = 12;
   m1[2][0] = 2; m1[2][1] = 4; m1[2][2] = 6; m1[2][3] = 8; m1[2][4] = 10; m1[2][5] = 12;
   somar_por_coluna(m1, 3, 6, valor_soma);

   testar(valor_soma[0], 6);
   testar(valor_soma[1], 12);
   testar(valor_soma[2], 18);
   testar(valor_soma[3], 24);
   testar(valor_soma[4], 30);
   testar(valor_soma[5], 36);

   free(valor_soma);
   liberar_matriz(m1, 3);

}

void caso_de_teste04(){
   int **m1;
   int *valor_soma;

   m1 = alocar_matriz(3,6);
   valor_soma = alocar_vetor(6);


   m1[0][0] = 1; m1[0][1] = 4; m1[0][2] = 7; m1[0][3] = 10; m1[0][4] = 13; m1[0][5] = 16;
   m1[1][0] = 2; m1[1][1] = 5; m1[1][2] = 8; m1[1][3] = 11; m1[1][4] = 14; m1[1][5] = 17;
   m1[2][0] = 3; m1[2][1] = 6; m1[2][2] = 9; m1[2][3] = 12; m1[2][4] = 15; m1[2][5] = 18;
   somar_por_coluna(m1, 3, 6, valor_soma);

   testar(valor_soma[0], 6);
   testar(valor_soma[1], 15);
   testar(valor_soma[2], 24);
   testar(valor_soma[3], 33);
   testar(valor_soma[4], 42);
   testar(valor_soma[5], 51);

   free(valor_soma);
   liberar_matriz(m1, 3);
}

void caso_de_teste05(){
   int **m1;
   int *valor_soma;

   m1 = alocar_matriz(3,6);
   valor_soma = alocar_vetor(6);


   m1[0][0] = 1; m1[0][1] = 4; m1[0][2] = 1; m1[0][3] = 5; m1[0][4] = 2; m1[0][5] = 6;
   m1[1][0] = 1; m1[1][1] = 4; m1[1][2] = 1; m1[1][3] = 5; m1[1][4] = 2; m1[1][5] = 6;
   m1[2][0] = 1; m1[2][1] = 4; m1[2][2] = 1; m1[2][3] = 5; m1[2][4] = 2; m1[2][5] = 6;
   somar_por_coluna(m1, 3, 6, valor_soma);

   testar(valor_soma[0], 3);
   testar(valor_soma[1], 12);
   testar(valor_soma[2], 3);
   testar(valor_soma[3], 15);
   testar(valor_soma[4], 6);
   testar(valor_soma[5], 18);

   free(valor_soma);
   liberar_matriz(m1, 3);
}

void caso_de_teste06(){
   int **m1;
   int *valor_soma;

   m1 = alocar_matriz(3,6);
   valor_soma = alocar_vetor(6);


   m1[0][0] = 12; m1[0][1] = 14; m1[0][2] = 17; m1[0][3] = 18; m1[0][4] = 12; m1[0][5] = 13;
   m1[1][0] = 22; m1[1][1] = 42; m1[1][2] = 72; m1[1][3] = 82; m1[1][4] = 122; m1[1][5] = 32;
   m1[2][0] = 83; m1[2][1] = 63; m1[2][2] = 33; m1[2][3] = 23; m1[2][4] = 32; m1[2][5] = 33;
   somar_por_coluna(m1, 3, 6, valor_soma);

   testar(valor_soma[0], 117);
   testar(valor_soma[1], 119);
   testar(valor_soma[2], 122);
   testar(valor_soma[3], 123);
   testar(valor_soma[4], 166);
   testar(valor_soma[5], 78);

   free(valor_soma);
   liberar_matriz(m1, 3);
}

void caso_de_teste07(){
   int **m1;
   int *valor_soma;

   m1 = alocar_matriz(3,6);
   valor_soma = alocar_vetor(6);


   m1[0][0] = 0; m1[0][1] = 1; m1[0][2] = 0; m1[0][3] = 1; m1[0][4] = 0; m1[0][5] = 1;
   m1[1][0] = 0; m1[1][1] = 1; m1[1][2] = 0; m1[1][3] = 1; m1[1][4] = 0; m1[1][5] = 1;
   m1[2][0] = 0; m1[2][1] = 1; m1[2][2] = 0; m1[2][3] = 1; m1[2][4] = 0; m1[2][5] = 1;
   somar_por_coluna(m1, 3, 6, valor_soma);

   testar(valor_soma[0], 0);
   testar(valor_soma[1], 3);
   testar(valor_soma[2], 0);
   testar(valor_soma[3], 3);
   testar(valor_soma[4], 0);
   testar(valor_soma[5], 3);

   free(valor_soma);
   liberar_matriz(m1, 3);
}

void caso_de_teste08(){
   int **m1;
   int *valor_soma;

   m1 = alocar_matriz(3,6);
   valor_soma = alocar_vetor(6);


   m1[0][0] = 0; m1[0][1] = -1; m1[0][2] = 0; m1[0][3] = 1; m1[0][4] = 12; m1[0][5] = -1;
   m1[1][0] = 0; m1[1][1] = -1; m1[1][2] = 0; m1[1][3] = 1; m1[1][4] = 12; m1[1][5] = -1;
   m1[2][0] = 0; m1[2][1] = -1; m1[2][2] = 0; m1[2][3] = 1; m1[2][4] = 12; m1[2][5] = -1;
   somar_por_coluna(m1, 3, 6, valor_soma);

   testar(valor_soma[0], 0);
   testar(valor_soma[1], -3);
   testar(valor_soma[2], 0);
   testar(valor_soma[3], 3);
   testar(valor_soma[4], 36);
   testar(valor_soma[5], -3);

   free(valor_soma);
   liberar_matriz(m1, 3);
}

void caso_de_teste09(){
   int **m1;
   int *valor_soma;


   m1 = alocar_matriz(3,6);
   valor_soma = alocar_vetor(6);


   m1[0][0] = 2; m1[0][1] = 4; m1[0][2] = 7; m1[0][3] = 8; m1[0][4] = 12; m1[0][5] = -12;
   m1[1][0] = 2; m1[1][1] = 4; m1[1][2] = 7; m1[1][3] = 8; m1[1][4] = 12; m1[1][5] = -12;
   m1[2][0] = 2; m1[2][1] = 4; m1[2][2] = 7; m1[2][3] = 8; m1[2][4] = 12; m1[2][5] = -12;
   somar_por_coluna(m1, 3, 6, valor_soma);

   testar(valor_soma[0], 6);
   testar(valor_soma[1], 12);
   testar(valor_soma[2], 21);
   testar(valor_soma[3], 24);
   testar(valor_soma[4], 36);
   testar(valor_soma[5], -36);

   free(valor_soma);
   liberar_matriz(m1, 3);
}

void caso_de_teste10(){
   int **m1;
   int *valor_soma;


   m1 = alocar_matriz(3,6);
   valor_soma = alocar_vetor(6);


   m1[0][0] = 2; m1[0][1] = 8; m1[0][2] = 7; m1[0][3] = 4; m1[0][4] = 12; m1[0][5] = -1;
   m1[1][0] = 2; m1[1][1] = 4; m1[1][2] = 7; m1[1][3] = 8; m1[1][4] = 12; m1[1][5] = 33;
   m1[2][0] = 2; m1[2][1] = 9; m1[2][2] = 7; m1[2][3] = 3; m1[2][4] = 12; m1[2][5] = -123;
   somar_por_coluna(m1, 3, 6, valor_soma);

   testar(valor_soma[0], 6);
   testar(valor_soma[1], 21);
   testar(valor_soma[2], 21);
   testar(valor_soma[3], 15);
   testar(valor_soma[4], 36);
   testar(valor_soma[5], -91);

   free(valor_soma);
   liberar_matriz(m1, 3);
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
