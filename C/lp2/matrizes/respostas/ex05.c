#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<math.h>

//[]-------------------------------------------------------------[]
//   Função: alocar_matriz()
//   Entrada: numero de linhas e numero de colunas
//   Saída:   a matriz alocada dinamicamente
//[]-------------------------------------------------------------[]
float **alocar_matriz(int linhas, int colunas){
    // colocar o seu codigo aqui
    float **m = (float **)calloc(linhas, sizeof(float *));

    for (int i = 0; i < linhas; i++){
       m[i] = (float *) calloc(colunas, sizeof(float));
    }

    return m;
}

//[]-------------------------------------------------------------[]
//   Função: liberar_matriz()
//   Entrada: numero de linhas e a matriz
//   Saída:   a matriz liberar_matrizda
//[]-------------------------------------------------------------[]
void liberar_matriz(float **matriz, int linhas){
   // colocar o seu codigo aqui
   for (int i = 0; i < linhas; i++)
	   free(matriz[i]);

   free(matriz);
}

//[]-------------------------------------------------------------[]
//   Função: multiplicar_matriz_por_escalar()
//   Entrada: um escalar k, 
//            uma matriz e suas dimensoes (linhas e colunas) 
//   Saída:   todos os elementos da matriz multiplicado por k
//[]-------------------------------------------------------------[]
void multiplicar_matriz_por_escalar(float k, float **matriz, int linhas, int colunas){
   // colocar o seu codigo aqui
   
   for (int i = 0; i < linhas; i++){
      for (int j = 0; j < colunas; j++){
         matriz[i][j] = k * matriz[i][j];
      }
   }
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
   assert(fabs(obtido - esperado) < 0.00001);
}

//[]-------------------------------------------------------------[]
//    Casos de testes
//[]-------------------------------------------------------------[]
void caso_de_teste01(){
   float **m1;
   printf("caso de teste 01\n");

   m1 = alocar_matriz(3,6);

   m1[0][0] = 2; m1[0][1] = 4; m1[0][2] = 7; m1[0][3] = 8; m1[0][4] = 12; m1[0][5] = 3;
   m1[1][0] = 2; m1[1][1] = 4; m1[1][2] = 7; m1[1][3] = 8; m1[1][4] = 12; m1[1][5] = 3;
   m1[2][0] = 2; m1[2][1] = 4; m1[2][2] = 7; m1[2][3] = 8; m1[2][4] = 12; m1[2][5] = 3;
   
   multiplicar_matriz_por_escalar(2, m1, 3, 6);

   testar(m1[0][0], 4); testar(m1[0][1], 8); testar(m1[0][2], 14); testar(m1[0][3], 16); testar(m1[0][4], 24); testar(m1[0][5], 6);
   testar(m1[1][0], 4); testar(m1[1][1], 8); testar(m1[1][2], 14); testar(m1[1][3], 16); testar(m1[1][4], 24); testar(m1[1][5], 6);
   testar(m1[2][0], 4); testar(m1[2][1], 8); testar(m1[2][2], 14); testar(m1[2][3], 16); testar(m1[2][4], 24); testar(m1[2][5], 6);

   liberar_matriz(m1, 3);
}

void caso_de_teste02(){
   float **m1;
   printf("caso de teste 02\n");

   m1 = alocar_matriz(3,6);

   m1[0][0] =  1; m1[0][1] =  2; m1[0][2] =  3; m1[0][3] =  4; m1[0][4] =  5; m1[0][5] =  6;
   m1[1][0] =  7; m1[1][1] =  8; m1[1][2] =  9; m1[1][3] = 10; m1[1][4] = 11; m1[1][5] = 12;
   m1[2][0] = 13; m1[2][1] = 14; m1[2][2] = 15; m1[2][3] = 16; m1[2][4] = 17; m1[2][5] = 18;

   multiplicar_matriz_por_escalar(3, m1, 3, 6);

   testar(m1[0][0], 3);  testar(m1[0][1], 6);  testar(m1[0][2], 9);  testar(m1[0][3], 12); testar(m1[0][4], 15); testar(m1[0][5], 18);
   testar(m1[1][0], 21); testar(m1[1][1], 24); testar(m1[1][2], 27); testar(m1[1][3], 30); testar(m1[1][4], 33); testar(m1[1][5], 36);
   testar(m1[2][0], 39); testar(m1[2][1], 42); testar(m1[2][2], 45); testar(m1[2][3], 48); testar(m1[2][4], 51); testar(m1[2][5], 54);

   liberar_matriz(m1, 3);
}

void caso_de_teste03(){
   float **m1;
   printf("caso de teste 03\n");

   m1 = alocar_matriz(3,6);


   m1[0][0] = 2; m1[0][1] = 4; m1[0][2] = 6; m1[0][3] = 8; m1[0][4] = 10; m1[0][5] = 12;
   m1[1][0] = 2; m1[1][1] = 4; m1[1][2] = 6; m1[1][3] = 8; m1[1][4] = 10; m1[1][5] = 12;
   m1[2][0] = 2; m1[2][1] = 4; m1[2][2] = 6; m1[2][3] = 8; m1[2][4] = 10; m1[2][5] = 12;
 
   multiplicar_matriz_por_escalar(4, m1, 3, 6);

   testar(m1[0][0], 8); testar(m1[0][1], 16); testar(m1[0][2], 24); testar(m1[0][3], 32); testar(m1[0][4], 40); testar(m1[0][5], 48);
   testar(m1[1][0], 8); testar(m1[1][1], 16); testar(m1[1][2], 24); testar(m1[1][3], 32); testar(m1[1][4], 40); testar(m1[1][5], 48);
   testar(m1[2][0], 8); testar(m1[2][1], 16); testar(m1[2][2], 24); testar(m1[2][3], 32); testar(m1[2][4], 40); testar(m1[2][5], 48);

  liberar_matriz(m1, 3);

}

void caso_de_teste04(){
   float **m1;
   printf("caso de teste 04\n");

   m1 = alocar_matriz(3,6);

   m1[0][0] = 1; m1[0][1] = 4; m1[0][2] = 7; m1[0][3] = 10; m1[0][4] = 13; m1[0][5] = 16;
   m1[1][0] = 2; m1[1][1] = 5; m1[1][2] = 8; m1[1][3] = 11; m1[1][4] = 14; m1[1][5] = 17;
   m1[2][0] = 3; m1[2][1] = 6; m1[2][2] = 9; m1[2][3] = 12; m1[2][4] = 15; m1[2][5] = 18;
 
   multiplicar_matriz_por_escalar(0.5, m1, 3, 6);

   testar(m1[0][0], 0.5); testar(m1[0][1], 2.0); testar(m1[0][2], 3.5); testar(m1[0][3], 5.0); testar(m1[0][4], 6.5); testar(m1[0][5], 8.0);
   testar(m1[1][0], 1.0); testar(m1[1][1], 2.5); testar(m1[1][2], 4.0); testar(m1[1][3], 5.5); testar(m1[1][4], 7.0); testar(m1[1][5], 8.5);
   testar(m1[2][0], 1.5); testar(m1[2][1], 3.0); testar(m1[2][2], 4.5); testar(m1[2][3], 6.0); testar(m1[2][4], 7.5); testar(m1[2][5], 9.0);

   liberar_matriz(m1, 3);
}

void caso_de_teste05(){
   float **m1;
   printf("caso de teste 05\n");

   m1 = alocar_matriz(3,6);

   m1[0][0] = 1; m1[0][1] = 4; m1[0][2] = 1; m1[0][3] = 5; m1[0][4] = 2; m1[0][5] = 6;
   m1[1][0] = 1; m1[1][1] = 4; m1[1][2] = 1; m1[1][3] = 5; m1[1][4] = 2; m1[1][5] = 6;
   m1[2][0] = 1; m1[2][1] = 4; m1[2][2] = 1; m1[2][3] = 5; m1[2][4] = 2; m1[2][5] = 6;
 
   multiplicar_matriz_por_escalar(5, m1, 3, 6);

   testar(m1[0][0], 5); testar(m1[0][1], 20); testar(m1[0][2], 5); testar(m1[0][3], 25); testar(m1[0][4], 10); testar(m1[0][5], 30);
   testar(m1[1][0], 5); testar(m1[1][1], 20); testar(m1[1][2], 5); testar(m1[1][3], 25); testar(m1[1][4], 10); testar(m1[1][5], 30);
   testar(m1[2][0], 5); testar(m1[2][1], 20); testar(m1[2][2], 5); testar(m1[2][3], 25); testar(m1[2][4], 10); testar(m1[2][5], 30);

   liberar_matriz(m1, 3);
}

void caso_de_teste06(){
   float **m1;
   printf("caso de teste 06\n");

   m1 = alocar_matriz(3,6);


   m1[0][0] = 12; m1[0][1] = 14; m1[0][2] = 17; m1[0][3] = 18; m1[0][4] = 12; m1[0][5] = 13;
   m1[1][0] = 22; m1[1][1] = 42; m1[1][2] = 72; m1[1][3] = 82; m1[1][4] = 122; m1[1][5] = 32;
   m1[2][0] = 83; m1[2][1] = 63; m1[2][2] = 33; m1[2][3] = 23; m1[2][4] = 32; m1[2][5] = 33;
 
   multiplicar_matriz_por_escalar(0.1, m1, 3, 6);

   testar(m1[0][0], 1.2); testar(m1[0][1], 1.4); testar(m1[0][2], 1.7); testar(m1[0][3], 1.8); testar(m1[0][4], 1.2); testar(m1[0][5], 1.3);
   testar(m1[1][0], 2.2); testar(m1[1][1], 4.2); testar(m1[1][2], 7.2); testar(m1[1][3], 8.2); testar(m1[1][4], 12.2); testar(m1[1][5], 3.2);
   testar(m1[2][0], 8.3); testar(m1[2][1], 6.3); testar(m1[2][2], 3.3); testar(m1[2][3], 2.3); testar(m1[2][4], 3.2); testar(m1[2][5], 3.3);

   liberar_matriz(m1, 3);
}

void caso_de_teste07(){
   float **m1;
   printf("caso de teste 07\n");

   m1 = alocar_matriz(3,6);


   m1[0][0] = 0; m1[0][1] = 1; m1[0][2] = 0; m1[0][3] = 1; m1[0][4] = 0; m1[0][5] = 1;
   m1[1][0] = 0; m1[1][1] = 1; m1[1][2] = 0; m1[1][3] = 1; m1[1][4] = 0; m1[1][5] = 1;
   m1[2][0] = 0; m1[2][1] = 1; m1[2][2] = 0; m1[2][3] = 1; m1[2][4] = 0; m1[2][5] = 1;
 
   multiplicar_matriz_por_escalar(6, m1, 3, 6);

   testar(m1[0][0], 0); testar(m1[0][1], 6); testar(m1[0][2], 0); testar(m1[0][3], 6); testar(m1[0][4], 0); testar(m1[0][5], 6);
   testar(m1[1][0], 0); testar(m1[1][1], 6); testar(m1[1][2], 0); testar(m1[1][3], 6); testar(m1[1][4], 0); testar(m1[1][5], 6);
   testar(m1[2][0], 0); testar(m1[2][1], 6); testar(m1[2][2], 0); testar(m1[2][3], 6); testar(m1[2][4], 0); testar(m1[2][5], 6);

   liberar_matriz(m1, 3);
}

void caso_de_teste08(){
   float **m1;
   printf("caso de teste 08\n");

   m1 = alocar_matriz(3,6);

   m1[0][0] = 0; m1[0][1] = -1; m1[0][2] = 0; m1[0][3] = 1; m1[0][4] = 12; m1[0][5] = -1;
   m1[1][0] = 0; m1[1][1] = -1; m1[1][2] = 0; m1[1][3] = 1; m1[1][4] = 12; m1[1][5] = -1;
   m1[2][0] = 0; m1[2][1] = -1; m1[2][2] = 0; m1[2][3] = 1; m1[2][4] = 12; m1[2][5] = -1;
 
   multiplicar_matriz_por_escalar(7, m1, 3, 6);

   testar(m1[0][0], 0); testar(m1[0][1], -7); testar(m1[0][2], 0); testar(m1[0][3], 7); testar(m1[0][4], 84); testar(m1[0][5], -7);
   testar(m1[1][0], 0); testar(m1[1][1], -7); testar(m1[1][2], 0); testar(m1[1][3], 7); testar(m1[1][4], 84); testar(m1[1][5], -7);
   testar(m1[2][0], 0); testar(m1[2][1], -7); testar(m1[2][2], 0); testar(m1[2][3], 7); testar(m1[2][4], 84); testar(m1[2][5], -7);

   liberar_matriz(m1, 3);
}

void caso_de_teste09(){
   float **m1;
   printf("caso de teste 09\n");

   m1 = alocar_matriz(3,6);

   m1[0][0] = 2; m1[0][1] = 4; m1[0][2] = 7; m1[0][3] = 8; m1[0][4] = 12; m1[0][5] = -12;
   m1[1][0] = 2; m1[1][1] = 4; m1[1][2] = 7; m1[1][3] = 8; m1[1][4] = 12; m1[1][5] = -12;
   m1[2][0] = 2; m1[2][1] = 4; m1[2][2] = 7; m1[2][3] = 8; m1[2][4] = 12; m1[2][5] = -12;
 
   multiplicar_matriz_por_escalar(9, m1, 3, 6);

   testar(m1[0][0], 18); testar(m1[0][1], 36); testar(m1[0][2], 63); testar(m1[0][3], 72); testar(m1[0][4], 108); testar(m1[0][5], -108);
   testar(m1[1][0], 18); testar(m1[1][1], 36); testar(m1[1][2], 63); testar(m1[1][3], 72); testar(m1[1][4], 108); testar(m1[1][5], -108);
   testar(m1[2][0], 18); testar(m1[2][1], 36); testar(m1[2][2], 63); testar(m1[2][3], 72); testar(m1[2][4], 108); testar(m1[2][5], -108);

   liberar_matriz(m1, 3);
}

void caso_de_teste10(){
   float **m1;
   printf("caso de teste 10\n");

   m1 = alocar_matriz(3,6);

   m1[0][0] = 2; m1[0][1] = 8; m1[0][2] = 7; m1[0][3] = 4; m1[0][4] = 12; m1[0][5] = -1;
   m1[1][0] = 2; m1[1][1] = 4; m1[1][2] = 7; m1[1][3] = 8; m1[1][4] = 12; m1[1][5] = 33;
   m1[2][0] = 2; m1[2][1] = 9; m1[2][2] = 7; m1[2][3] = 3; m1[2][4] = 12; m1[2][5] = -123;
 
   multiplicar_matriz_por_escalar(10.5, m1, 3, 6);

   testar(m1[0][0], 21.0); testar(m1[0][1], 84.0); testar(m1[0][2], 73.5); testar(m1[0][3], 42.0); testar(m1[0][4], 126.0); testar(m1[0][5], -10.5);
   testar(m1[1][0], 21.0); testar(m1[1][1], 42.0); testar(m1[1][2], 73.5); testar(m1[1][3], 84.0); testar(m1[1][4], 126.0); testar(m1[1][5], 346.5);
   testar(m1[2][0], 21.0); testar(m1[2][1], 94.5); testar(m1[2][2], 73.5); testar(m1[2][3], 31.5); testar(m1[2][4], 126.0); testar(m1[2][5], -1291.5);

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
