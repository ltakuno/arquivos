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
//   Função: media_aritmetica_coluna2_coluna4()
//   Entrada: matriz e suas dimensoes (linhas e colunas) 
//   Saída:   soma de todos os elementos das colunas ímpares 
//[]-------------------------------------------------------------[]
void media_aritmetica_coluna2_coluna4(int **matriz, int linhas, int colunas, float *mediaCol2, float *mediaCol4){
   // colocar o seu codigo aqui
}


//[]-------------------------------------------------------------[]
//   Função: testar()
//   Entrada: valor obtido da funcao, valor esperado
//   Saída: ok se obtido igual a esperado e nao ok caso contrario
//[]-------------------------------------------------------------[]
void testar(float obtido, float esperado){
   if (fabs(obtido - esperado) < 0.00001)
	   printf("Parabéns !!!");
   else
	   printf("Ainda não !!!");
   printf(" obtido: %f  esperado: %f\n", obtido, esperado);
}

//[]-------------------------------------------------------------[]
//    Casos de testes
//[]-------------------------------------------------------------[]
void caso_de_teste01(){
   int **m1;
   float mediaCol2, mediaCol4;
   m1 = alocar_matriz(3,6);

   m1[0][0] = 2; m1[0][1] = 4; m1[0][2] = 7; m1[0][3] = 8; m1[0][4] = 12; m1[0][5] = 3;
   m1[1][0] = 2; m1[1][1] = 4; m1[1][2] = 7; m1[1][3] = 8; m1[1][4] = 12; m1[1][5] = 3;
   m1[2][0] = 2; m1[2][1] = 4; m1[2][2] = 7; m1[2][3] = 8; m1[2][4] = 12; m1[2][5] = 3;
   
   media_aritmetica_coluna2_coluna4(m1, 3, 6, &mediaCol2, &mediaCol4);

   testar(mediaCol2, 7.0);
   testar(mediaCol4, 12.0);

   liberar_matriz(m1, 3);
}

void caso_de_teste02(){
   int **m1;
   float mediaCol2, mediaCol4;

   m1 = alocar_matriz(3,6);

   m1[0][0] =  1; m1[0][1] =  2; m1[0][2] =  3; m1[0][3] =  4; m1[0][4] =  5; m1[0][5] =  6;
   m1[1][0] =  7; m1[1][1] =  8; m1[1][2] =  9; m1[1][3] = 10; m1[1][4] = 11; m1[1][5] = 12;
   m1[2][0] = 13; m1[2][1] = 14; m1[2][2] = 15; m1[2][3] = 16; m1[2][4] = 17; m1[2][5] = 18;

   media_aritmetica_coluna2_coluna4(m1, 3, 6, &mediaCol2, &mediaCol4);

   testar(mediaCol2, 9.0);
   testar(mediaCol4, 11.0);


   liberar_matriz(m1, 3);
}

void caso_de_teste03(){
   int **m1;
   float mediaCol2, mediaCol4;

   m1 = alocar_matriz(3,6);

   m1[0][0] = 2; m1[0][1] = 4; m1[0][2] = 6; m1[0][3] = 8; m1[0][4] = 10; m1[0][5] = 12;
   m1[1][0] = 2; m1[1][1] = 4; m1[1][2] = 6; m1[1][3] = 8; m1[1][4] = 10; m1[1][5] = 12;
   m1[2][0] = 2; m1[2][1] = 4; m1[2][2] = 6; m1[2][3] = 8; m1[2][4] = 10; m1[2][5] = 12;
   media_aritmetica_coluna2_coluna4(m1, 3, 6, &mediaCol2, &mediaCol4);

   testar(mediaCol2, 6.0);
   testar(mediaCol4, 10.0);



   liberar_matriz(m1, 3);

}

void caso_de_teste04(){
   int **m1;
   float mediaCol2, mediaCol4;

   m1 = alocar_matriz(3,6);

   m1[0][0] = 1; m1[0][1] = 4; m1[0][2] = 7; m1[0][3] = 10; m1[0][4] = 13; m1[0][5] = 16;
   m1[1][0] = 2; m1[1][1] = 5; m1[1][2] = 8; m1[1][3] = 11; m1[1][4] = 14; m1[1][5] = 17;
   m1[2][0] = 3; m1[2][1] = 6; m1[2][2] = 9; m1[2][3] = 12; m1[2][4] = 15; m1[2][5] = 18;

   media_aritmetica_coluna2_coluna4(m1, 3, 6, &mediaCol2, &mediaCol4);

   testar(mediaCol2, 8.0);
   testar(mediaCol4, 14.0);


   liberar_matriz(m1, 3);
}

void caso_de_teste05(){
   int **m1;
   float mediaCol2, mediaCol4;

   m1 = alocar_matriz(3,6);

   m1[0][0] = 1; m1[0][1] = 4; m1[0][2] = 1; m1[0][3] = 5; m1[0][4] = 2; m1[0][5] = 6;
   m1[1][0] = 1; m1[1][1] = 4; m1[1][2] = 1; m1[1][3] = 5; m1[1][4] = 2; m1[1][5] = 6;
   m1[2][0] = 1; m1[2][1] = 4; m1[2][2] = 1; m1[2][3] = 5; m1[2][4] = 2; m1[2][5] = 6;

   media_aritmetica_coluna2_coluna4(m1, 3, 6, &mediaCol2, &mediaCol4);

   testar(mediaCol2, 1.0);
   testar(mediaCol4, 2.0);


   liberar_matriz(m1, 3);
}

void caso_de_teste06(){
   int **m1;
   float mediaCol2, mediaCol4;

   m1 = alocar_matriz(3,6);

   m1[0][0] = 12; m1[0][1] = 14; m1[0][2] = 17; m1[0][3] = 18; m1[0][4] = 12; m1[0][5] = 13;
   m1[1][0] = 22; m1[1][1] = 42; m1[1][2] = 72; m1[1][3] = 82; m1[1][4] = 122; m1[1][5] = 32;
   m1[2][0] = 83; m1[2][1] = 63; m1[2][2] = 33; m1[2][3] = 23; m1[2][4] = 32; m1[2][5] = 33;

   media_aritmetica_coluna2_coluna4(m1, 3, 6, &mediaCol2, &mediaCol4);

   testar(mediaCol2, 40.666668);
   testar(mediaCol4, 55.333332);


   liberar_matriz(m1, 3);
}

void caso_de_teste07(){
   int **m1;
   float mediaCol2, mediaCol4;

   m1 = alocar_matriz(3,6);

   m1[0][0] = 0; m1[0][1] = 1; m1[0][2] = 0; m1[0][3] = 1; m1[0][4] = 0; m1[0][5] = 1;
   m1[1][0] = 0; m1[1][1] = 1; m1[1][2] = 0; m1[1][3] = 1; m1[1][4] = 0; m1[1][5] = 1;
   m1[2][0] = 0; m1[2][1] = 1; m1[2][2] = 0; m1[2][3] = 1; m1[2][4] = 0; m1[2][5] = 1;

   media_aritmetica_coluna2_coluna4(m1, 3, 6, &mediaCol2, &mediaCol4);

   testar(mediaCol2, 0.0);
   testar(mediaCol4, 0.0);


   liberar_matriz(m1, 3);
}

void caso_de_teste08(){
   int **m1;
   float mediaCol2, mediaCol4;

   m1 = alocar_matriz(3,6);

   m1[0][0] = 0; m1[0][1] = -1; m1[0][2] = 0; m1[0][3] = 1; m1[0][4] = 12; m1[0][5] = -1;
   m1[1][0] = 0; m1[1][1] = -1; m1[1][2] = 0; m1[1][3] = 1; m1[1][4] = 12; m1[1][5] = -1;
   m1[2][0] = 0; m1[2][1] = -1; m1[2][2] = 0; m1[2][3] = 1; m1[2][4] = 12; m1[2][5] = -1;

   media_aritmetica_coluna2_coluna4(m1, 3, 6, &mediaCol2, &mediaCol4);

   testar(mediaCol2, 0.0);
   testar(mediaCol4, 12.0);


   liberar_matriz(m1, 3);
}

void caso_de_teste09(){
   int **m1;
   float mediaCol2, mediaCol4;

   m1 = alocar_matriz(3,6);

   m1[0][0] = 2; m1[0][1] = 4; m1[0][2] = 7; m1[0][3] = 8; m1[0][4] = 12; m1[0][5] = -12;
   m1[1][0] = 2; m1[1][1] = 4; m1[1][2] = 7; m1[1][3] = 8; m1[1][4] = 12; m1[1][5] = -12;
   m1[2][0] = 2; m1[2][1] = 4; m1[2][2] = 7; m1[2][3] = 8; m1[2][4] = 12; m1[2][5] = -12;

   media_aritmetica_coluna2_coluna4(m1, 3, 6, &mediaCol2, &mediaCol4);

   testar(mediaCol2, 7.0);
   testar(mediaCol4, 12.0);


   liberar_matriz(m1, 3);
}

void caso_de_teste10(){
   int **m1;
   float mediaCol2, mediaCol4;

   m1 = alocar_matriz(3,6);

   m1[0][0] = 2; m1[0][1] = 8; m1[0][2] = 7; m1[0][3] = 4; m1[0][4] = 12; m1[0][5] = -1;
   m1[1][0] = 2; m1[1][1] = 4; m1[1][2] = 7; m1[1][3] = 8; m1[1][4] = 12; m1[1][5] = 33;
   m1[2][0] = 2; m1[2][1] = 9; m1[2][2] = 7; m1[2][3] = 3; m1[2][4] = 12; m1[2][5] = -123;

   media_aritmetica_coluna2_coluna4(m1, 3, 6, &mediaCol2, &mediaCol4);

   testar(mediaCol2, 7.0);
   testar(mediaCol4, 12.0);


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
