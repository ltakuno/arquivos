#include<stdio.h>
#include<stdlib.h>
#include<assert.h>


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
//   Função: maior_elemento()
//   Entrada: matriz e suas dimensoes (linhas e colunas) 
//   Saída:   o maior elemento da matriz
//[]-------------------------------------------------------------[]
int maior_elemento(int **matriz, int linhas, int colunas){
   // colocar o seu codigo aqui
   return 0;
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

   m1 = alocar_matriz(3,2);

   m1[0][0] = 2; m1[0][1] = 4;
   m1[1][0] = 3; m1[1][1] = 5;
   m1[2][0] = 6; m1[2][1] = 1;

   testar(maior_elemento(m1, 3, 2), 6);

   liberar_matriz(m1, 3);
}

void caso_de_teste02(){
   int **m1;

   m1 = alocar_matriz(4,3);

   m1[0][0] = 2; m1[0][1] = 4; m1[0][2] = 10;
   m1[1][0] = 3; m1[1][1] = 5; m1[1][2] = 7;
   m1[2][0] = 6; m1[2][1] = 1; m1[2][2] = 9;
   m1[3][0] = 0; m1[3][1] = 11; m1[3][2] = 8;

   testar(maior_elemento(m1, 4, 3), 11);

   liberar_matriz(m1, 4);
}

void caso_de_teste03(){
   int **m1;

   m1 = alocar_matriz(2,3);

   m1[0][0] = 12; m1[0][1] = 9; m1[0][2] = 10;
   m1[1][0] = 13; m1[1][1] = 6; m1[1][2] = 7;

   testar(maior_elemento(m1, 2, 3), 13);

   liberar_matriz(m1, 2);
}

void caso_de_teste04(){
   int **m1;

   m1 = alocar_matriz(5,2);

   m1[0][0] = 2; m1[0][1] = 4;
   m1[1][0] = 3; m1[1][1] = 5;
   m1[2][0] = 6; m1[2][1] = 1;
   m1[3][0] = 7; m1[3][1] = 8;
   m1[4][0] = 8; m1[4][1] = 10;


   testar(maior_elemento(m1, 5, 2), 10);

   liberar_matriz(m1, 5);
}

void caso_de_teste05(){
   int **m1;

   m1 = alocar_matriz(3,2);

   m1[0][0] = 82; m1[0][1] = 64;
   m1[1][0] = 73; m1[1][1] = 75;
   m1[2][0] = 56; m1[2][1] = 81;

   testar(maior_elemento(m1, 3, 2), 82);

   liberar_matriz(m1, 3);
}

void caso_de_teste06(){
   int **m1;

   m1 = alocar_matriz(3,2);

   m1[0][0] = 25; m1[0][1] = 47;
   m1[1][0] = 34; m1[1][1] = 52;
   m1[2][0] = 68; m1[2][1] = 11;

   testar(maior_elemento(m1, 3, 2), 68);

   liberar_matriz(m1, 3);
}

void caso_de_teste07(){
   int **m1;

   m1 = alocar_matriz(3,2);

   m1[0][0] = 20; m1[0][1] = 23;
   m1[1][0] = 24; m1[1][1] = 25;
   m1[2][0] = 26; m1[2][1] = 21;

   testar(maior_elemento(m1, 3, 2), 26);

   liberar_matriz(m1, 3);
}

void caso_de_teste08(){
   int **m1;

   m1 = alocar_matriz(3,2);

   m1[0][0] = 14; m1[0][1] = 12;
   m1[1][0] = 15; m1[1][1] = 13;
   m1[2][0] = 11; m1[2][1] = 10;

   testar(maior_elemento(m1, 3, 2), 15);

   liberar_matriz(m1, 3);
}

void caso_de_teste09(){
   int **m1;

   m1 = alocar_matriz(3,2);

   m1[0][0] = 21; m1[0][1] = 61;
   m1[1][0] = 31; m1[1][1] = 51;
   m1[2][0] = 11; m1[2][1] = 41;

   testar(maior_elemento(m1, 3, 2), 61);

   liberar_matriz(m1, 3);
}

void caso_de_teste10(){
   int **m1;

   m1 = alocar_matriz(3,2);

   m1[0][0] = -200; m1[0][1] = -400;
   m1[1][0] = -300; m1[1][1] = -500;
   m1[2][0] = -600; m1[2][1] = -100;

   testar(maior_elemento(m1, 3, 2), -100);

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
