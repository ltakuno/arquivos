#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<math.h>



//[]-------------------------------------------------------------[]
//   Função: multiplicar()
//   Entrada: matriz a e b e suas dimensoes (linhas e colunas) 
//   Saída:   a matriz resultante contendo a multiplicação entre a e b.
//[]-------------------------------------------------------------[]
void multiplicar(int matriz_resultante[10][10], int matriz_a[10][10], int matriz_b[10][10], int n){
   // colocar o seu codigo aqui
   
    for (int i = 0; i < n; i++){
	     for (int j = 0; j  < n; j++){
		     matriz_resultante[i][j] = 0;
		     for (int k = 0; k < n; k++){
			     matriz_resultante[i][j] += matriz_a[i][k]*matriz_b[k][j];
		     }
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
   assert(obtido == esperado);
}

//[]-------------------------------------------------------------[]
//    Casos de testes
//[]-------------------------------------------------------------[]

void caso_de_teste01() {
	printf(" caso de teste 1 \n");
	int m0[10][10] = {{1,   5,   2,   4,   4,   4,   5,   3,   4,   4},
	                {2,   1,   2,   4,   2,   4,   5,   3,   5,   4},
	                {1,   4,   5,   4,   2,   1,   3,   4,   3,   5},
	                {5,   3,   2,   4,   4,   2,   4,   3,   4,   3},
	                {1,   5,   3,   5,   5,   1,   5,   4,   4,   4},
	                {2,   1,   4,   3,   2,   1,   3,   4,   1,   2},
	                {5,   3,   5,   3,   3,   5,   4,   1,   2,   4},
	                {5,   4,   5,   5,   3,   4,   5,   4,   2,   3},
	                {4,   5,   1,   3,   5,   2,   5,   2,   2,   2},
	                {4,   1,   1,   5,   1,   3,   4,   4,   4,   2}};

	int m1[10][10] = {{5,   4,   1,   1,   5,   3,   4,   1,   5,   5},
	                {2,   3,   1,   3,   4,   3,   1,   3,   2,   3},
	                {4,   5,   5,   3,   3,   3,   5,   2,   4,   2},
	                {1,   3,   3,   1,   1,   2,   3,   1,   2,   4},
	                {5,   5,   1,   2,   2,   1,   5,   2,   4,   3},
	                {4,   4,   4,   1,   4,   1,   3,   5,   5,   3},
	                {3,   5,   3,   5,   2,   3,   3,   1,   3,   1},
	                {4,   4,   1,   1,   5,   2,   1,   1,   4,   1},
	                {3,   4,   2,   2,   1,   5,   4,   1,   1,   3},
	                {3,   3,   4,   5,   5,   5,   4,   2,   5,   1}};

        int resultado[10][10];

	multiplicar(resultado, m0, m1, 10);
	testar(resultado[0][0], 114);
	testar(resultado[0][1], 142);
	testar(resultado[0][2], 90);
	testar(resultado[0][3], 94);
	testar(resultado[0][4], 108);
	testar(resultado[0][5], 101);
	testar(resultado[0][6], 113);
	testar(resultado[0][7], 72);
	testar(resultado[0][8], 118);
	testar(resultado[0][9], 88);
	testar(resultado[1][0], 104);
	testar(resultado[1][1], 128);
	testar(resultado[1][2], 87);
	testar(resultado[1][3], 81);
	testar(resultado[1][4], 94);
	testar(resultado[1][5], 95);
	testar(resultado[1][6], 107);
	testar(resultado[1][7], 58);
	testar(resultado[1][8], 108);
	testar(resultado[1][9], 78);
	testar(resultado[2][0], 100);
	testar(resultado[2][1], 125);
	testar(resultado[2][2], 87);
	testar(resultado[2][3], 87);
	testar(resultado[2][4], 102);
	testar(resultado[2][5], 98);
	testar(resultado[2][6], 103);
	testar(resultado[2][7], 56);
	testar(resultado[2][8], 107);
	testar(resultado[2][9], 73);
	testar(resultado[3][0], 116);
	testar(resultado[3][1], 136);
	testar(resultado[3][2], 77);
	testar(resultado[3][3], 80);
	testar(resultado[3][4], 105);
	testar(resultado[3][5], 97);
	testar(resultado[3][6], 114);
	testar(resultado[3][7], 57);
	testar(resultado[3][8], 116);
	testar(resultado[3][9], 94);
	testar(resultado[4][0], 116);
	testar(resultado[4][1], 147);
	testar(resultado[4][2], 88);
	testar(resultado[4][3], 98);
	testar(resultado[4][4], 107);
	testar(resultado[4][5], 106);
	testar(resultado[4][6], 118);
	testar(resultado[4][7], 63);
	testar(resultado[4][8], 117);
	testar(resultado[4][9], 89);
	testar(resultado[5][0], 79);
	testar(resultado[5][1], 95);
	testar(resultado[5][2], 61);
	testar(resultado[5][3], 56);
	testar(resultado[5][4], 74);
	testar(resultado[5][5], 62);
	testar(resultado[5][6], 76);
	testar(resultado[5][7], 37);
	testar(resultado[5][8], 83);
	testar(resultado[5][9], 54);
	testar(resultado[6][0], 123);
	testar(resultado[6][1], 142);
	testar(resultado[6][2], 98);
	testar(resultado[6][3], 88);
	testar(resultado[6][4], 116);
	testar(resultado[6][5], 97);
	testar(resultado[6][6], 124);
	testar(resultado[6][7], 73);
	testar(resultado[6][8], 132);
	testar(resultado[6][9], 95);
	testar(resultado[7][0], 135);
	testar(resultado[7][1], 161);
	testar(resultado[7][2], 103);
	testar(resultado[7][3], 95);
	testar(resultado[7][4], 130);
	testar(resultado[7][5], 107);
	testar(resultado[7][6], 130);
	testar(resultado[7][7], 75);
	testar(resultado[7][8], 143);
	testar(resultado[7][9], 106);
	testar(resultado[8][0], 105);
	testar(resultado[8][1], 125);
	testar(resultado[8][2], 65);
	testar(resultado[8][3], 78);
	testar(resultado[8][4], 96);
	testar(resultado[8][5], 82);
	testar(resultado[8][6], 99);
	testar(resultado[8][7], 57);
	testar(resultado[8][8], 105);
	testar(resultado[8][9], 85);
	testar(resultado[9][0], 94);
	testar(resultado[9][1], 114);
	testar(resultado[9][2], 70);
	testar(resultado[9][3], 62);
	testar(resultado[9][4], 88);
	testar(resultado[9][5], 82);
	testar(resultado[9][6], 91);
	testar(resultado[9][7], 47);
	testar(resultado[9][8], 97);
	testar(resultado[9][9], 79);


}

void caso_de_teste02() {
	printf(" caso de teste 2 \n");
	int m0[10][10] = {{1,   3,   4,   5,   2,   4,   4,   5,   2,   2},
	                {5,   3,   3,   5,   4,   2,   3,   5,   5,   5},
	                {2,   3,   3,   2,   1,   5,   1,   1,   1,   4},
	                {1,   3,   3,   4,   2,   4,   5,   2,   5,   1},
	                {4,   4,   3,   3,   3,   3,   4,   2,   4,   4},
	                {2,   5,   3,   4,   3,   5,   5,   4,   1,   5},
	                {4,   3,   2,   1,   4,   5,   4,   3,   2,   3},
	                {3,   2,   4,   2,   4,   3,   5,   4,   5,   3},
	                {4,   1,   5,   3,   1,   2,   3,   1,   5,   5},
	                {2,   3,   2,   1,   5,   5,   5,   5,   2,   3}};

	int m1[10][10] = {{2,   3,   5,   4,   2,   1,   4,   1,   1,   5},
	                {3,   2,   3,   5,   1,   2,   1,   2,   3,   5},
	                {3,   4,   5,   1,   5,   1,   4,   1,   2,   4},
	                {4,   4,   3,   3,   4,   2,   3,   4,   2,   5},
	                {3,   4,   1,   2,   5,   3,   1,   2,   1,   3},
	                {2,   4,   1,   1,   1,   5,   2,   4,   2,   5},
	                {4,   5,   3,   2,   2,   3,   5,   1,   2,   3},
	                {2,   1,   1,   4,   3,   3,   1,   3,   1,   2},
	                {2,   2,   2,   2,   3,   2,   3,   1,   5,   4},
	                {5,   1,   4,   3,   2,   2,   2,   3,   5,   5}};

        int resultado[10][10];

	multiplicar(resultado, m0, m1, 10);
	testar(resultado[0][0], 97);
	testar(resultado[0][1], 100);
	testar(resultado[0][2], 84);
	testar(resultado[0][3], 84);
	testar(resultado[0][4], 92);
	testar(resultado[0][5], 82);
	testar(resultado[0][6], 83);
	testar(resultado[0][7], 78);
	testar(resultado[0][8], 71);
	testar(resultado[0][9], 127);
	testar(resultado[1][0], 121);
	testar(resultado[1][1], 112);
	testar(resultado[1][2], 114);
	testar(resultado[1][3], 114);
	testar(resultado[1][4], 116);
	testar(resultado[1][5], 90);
	testar(resultado[1][6], 103);
	testar(resultado[1][7], 88);
	testar(resultado[1][8], 99);
	testar(resultado[1][9], 163);
	testar(resultado[2][0], 71);
	testar(resultado[2][1], 68);
	testar(resultado[2][2], 68);
	testar(resultado[2][3], 59);
	testar(resultado[2][4], 56);
	testar(resultado[2][5], 59);
	testar(resultado[2][6], 57);
	testar(resultado[2][7], 58);
	testar(resultado[2][8], 60);
	testar(resultado[2][9], 104);
	testar(resultado[3][0], 89);
	testar(resultado[3][1], 99);
	testar(resultado[3][2], 78);
	testar(resultado[3][3], 73);
	testar(resultado[3][4], 83);
	testar(resultado[3][5], 77);
	testar(resultado[3][6], 85);
	testar(resultado[3][7], 65);
	testar(resultado[3][8], 76);
	testar(resultado[3][9], 122);
	testar(resultado[4][0], 104);
	testar(resultado[4][1], 102);
	testar(resultado[4][2], 100);
	testar(resultado[4][3], 93);
	testar(resultado[4][4], 91);
	testar(resultado[4][5], 79);
	testar(resultado[4][6], 92);
	testar(resultado[4][7], 71);
	testar(resultado[4][8], 87);
	testar(resultado[4][9], 143);
	testar(resultado[5][0], 118);
	testar(resultado[5][1], 112);
	testar(resultado[5][2], 101);
	testar(resultado[5][3], 102);
	testar(resultado[5][4], 95);
	testar(resultado[5][5], 96);
	testar(resultado[5][6], 92);
	testar(resultado[5][7], 90);
	testar(resultado[5][8], 88);
	testar(resultado[5][9], 153);
	testar(resultado[6][0], 90);
	testar(resultado[6][1], 96);
	testar(resultado[6][2], 82);
	testar(resultado[6][3], 82);
	testar(resultado[6][4], 79);
	testar(resultado[6][5], 82);
	testar(resultado[6][6], 79);
	testar(resultado[6][7], 68);
	testar(resultado[6][8], 69);
	testar(resultado[6][9], 126);
	testar(resultado[7][0], 103);
	testar(resultado[7][1], 107);
	testar(resultado[7][2], 95);
	testar(resultado[7][3], 88);
	testar(resultado[7][4], 102);
	testar(resultado[7][5], 85);
	testar(resultado[7][6], 96);
	testar(resultado[7][7], 70);
	testar(resultado[7][8], 85);
	testar(resultado[7][9], 136);
	testar(resultado[8][0], 94);
	testar(resultado[8][1], 89);
	testar(resultado[8][2], 100);
	testar(resultado[8][3], 74);
	testar(resultado[8][4], 87);
	testar(resultado[8][5], 62);
	testar(resultado[8][6], 92);
	testar(resultado[8][7], 59);
	testar(resultado[8][8], 85);
	testar(resultado[8][9], 129);
	testar(resultado[9][0], 97);
	testar(resultado[9][1], 101);
	testar(resultado[9][2], 78);
	testar(resultado[9][3], 86);
	testar(resultado[9][4], 88);
	testar(resultado[9][5], 92);
	testar(resultado[9][6], 79);
	testar(resultado[9][7], 75);
	testar(resultado[9][8], 72);
	testar(resultado[9][9], 126);


}

void caso_de_teste03() {
	printf(" caso de teste 3 \n");
	int m0[10][10] = {{5,   5,   2,   4,   4,   1,   2,   4,   3,   1},
	                {5,   3,   3,   2,   3,   2,   2,   1,   2,   1},
	                {2,   3,   5,   1,   3,   4,   1,   2,   4,   1},
	                {2,   3,   2,   1,   3,   2,   1,   4,   5,   4},
	                {4,   1,   3,   3,   3,   2,   2,   1,   2,   3},
	                {3,   3,   2,   2,   5,   1,   2,   1,   2,   5},
	                {3,   4,   4,   5,   1,   1,   3,   1,   1,   3},
	                {1,   4,   3,   3,   2,   5,   5,   5,   2,   3},
	                {4,   1,   3,   5,   4,   2,   3,   5,   4,   4},
	                {1,   4,   4,   4,   5,   4,   1,   2,   2,   1}};

	int m1[10][10] = {{1,   1,   5,   2,   3,   3,   3,   4,   4,   4},
	                {4,   4,   1,   2,   3,   4,   4,   3,   1,   2},
	                {5,   2,   3,   2,   1,   4,   3,   3,   3,   5},
	                {1,   5,   2,   5,   1,   5,   4,   5,   5,   4},
	                {5,   3,   3,   1,   5,   5,   1,   3,   2,   3},
	                {1,   2,   4,   3,   5,   1,   4,   2,   4,   3},
	                {3,   1,   2,   2,   2,   4,   3,   1,   1,   2},
	                {4,   5,   5,   3,   2,   1,   2,   3,   3,   1},
	                {5,   1,   4,   1,   3,   3,   1,   3,   1,   1},
	                {5,   3,   1,   3,   1,   3,   4,   3,   3,   4}};

        int resultado[10][10];

	multiplicar(resultado, m0, m1, 10);
	testar(resultado[0][0], 102);
	testar(resultado[0][1], 91);
	testar(resultado[0][2], 97);
	testar(resultado[0][3], 73);
	testar(resultado[0][4], 83);
	testar(resultado[0][5], 108);
	testar(resultado[0][6], 86);
	testar(resultado[0][7], 101);
	testar(resultado[0][8], 83);
	testar(resultado[0][9], 86);
	testar(resultado[1][0], 76);
	testar(resultado[1][1], 58);
	testar(resultado[1][2], 76);
	testar(resultado[1][3], 53);
	testar(resultado[1][4], 67);
	testar(resultado[1][5], 84);
	testar(resultado[1][6], 69);
	testar(resultado[1][7], 75);
	testar(resultado[1][8], 66);
	testar(resultado[1][9], 75);
	testar(resultado[2][0], 95);
	testar(resultado[2][1], 64);
	testar(resultado[2][2], 84);
	testar(resultado[2][3], 55);
	testar(resultado[2][4], 75);
	testar(resultado[2][5], 83);
	testar(resultado[2][6], 71);
	testar(resultado[2][7], 76);
	testar(resultado[2][8], 67);
	testar(resultado[2][9], 76);
	testar(resultado[3][0], 106);
	testar(resultado[3][1], 74);
	testar(resultado[3][2], 84);
	testar(resultado[3][3], 59);
	testar(resultado[3][4], 72);
	testar(resultado[3][5], 83);
	testar(resultado[3][6], 71);
	testar(resultado[3][7], 81);
	testar(resultado[3][8], 66);
	testar(resultado[3][9], 70);
	testar(resultado[4][0], 78);
	testar(resultado[4][1], 60);
	testar(resultado[4][2], 73);
	testar(resultado[4][3], 58);
	testar(resultado[4][4], 61);
	testar(resultado[4][5], 84);
	testar(resultado[4][6], 70);
	testar(resultado[4][7], 76);
	testar(resultado[4][8], 71);
	testar(resultado[4][9], 79);
	testar(resultado[5][0], 98);
	testar(resultado[5][1], 70);
	testar(resultado[5][2], 69);
	testar(resultado[5][3], 58);
	testar(resultado[5][4], 69);
	testar(resultado[5][5], 95);
	testar(resultado[5][6], 74);
	testar(resultado[5][7], 80);
	testar(resultado[5][8], 67);
	testar(resultado[5][9], 81);
	testar(resultado[6][0], 83);
	testar(resultado[6][1], 75);
	testar(resultado[6][2], 66);
	testar(resultado[6][3], 70);
	testar(resultado[6][4], 54);
	testar(resultado[6][5], 97);
	testar(resultado[6][6], 86);
	testar(resultado[6][7], 84);
	testar(resultado[6][8], 75);
	testar(resultado[6][9], 86);
	testar(resultado[7][0], 110);
	testar(resultado[7][1], 95);
	testar(resultado[7][2], 96);
	testar(resultado[7][3], 84);
	testar(resultado[7][4], 85);
	testar(resultado[7][5], 101);
	testar(resultado[7][6], 101);
	testar(resultado[7][7], 91);
	testar(resultado[7][8], 87);
	testar(resultado[7][9], 89);
	testar(resultado[8][0], 119);
	testar(resultado[8][1], 99);
	testar(resultado[8][2], 111);
	testar(resultado[8][3], 88);
	testar(resultado[8][4], 85);
	testar(resultado[8][5], 116);
	testar(resultado[8][6], 96);
	testar(resultado[8][7], 111);
	testar(resultado[8][8], 101);
	testar(resultado[8][9], 102);
	testar(resultado[9][0], 96);
	testar(resultado[9][1], 84);
	testar(resultado[9][2], 81);
	testar(resultado[9][3], 68);
	testar(resultado[9][4], 81);
	testar(resultado[9][5], 99);
	testar(resultado[9][6], 81);
	testar(resultado[9][7], 87);
	testar(resultado[9][8], 78);
	testar(resultado[9][9], 85);


}

void caso_de_teste04() {
	printf(" caso de teste 4 \n");
	int m0[10][10] = {{3,   4,   5,   1,   3,   1,   5,   5,   4,   1},
	                {1,   3,   1,   4,   4,   2,   3,   3,   3,   3},
	                {2,   3,   2,   1,   4,   2,   4,   5,   3,   1},
	                {5,   2,   1,   4,   5,   3,   2,   4,   4,   2},
	                {4,   2,   2,   1,   5,   2,   4,   5,   4,   3},
	                {4,   3,   1,   5,   5,   1,   1,   3,   2,   1},
	                {3,   2,   2,   3,   2,   1,   1,   5,   1,   1},
	                {2,   1,   2,   3,   1,   4,   4,   2,   5,   4},
	                {1,   3,   1,   1,   3,   1,   3,   5,   3,   5},
	                {5,   3,   3,   4,   5,   4,   4,   2,   4,   2}};

	int m1[10][10] = {{5,   4,   3,   5,   3,   3,   4,   4,   5,   5},
	                {2,   2,   1,   1,   5,   2,   5,   1,   1,   5},
	                {2,   3,   5,   4,   5,   2,   5,   4,   5,   1},
	                {1,   2,   1,   1,   3,   5,   5,   3,   4,   4},
	                {2,   5,   1,   4,   1,   2,   5,   2,   4,   1},
	                {3,   3,   5,   2,   1,   2,   5,   1,   5,   2},
	                {3,   2,   5,   3,   2,   2,   2,   1,   4,   5},
	                {2,   3,   2,   2,   1,   4,   5,   3,   5,   4},
	                {5,   5,   1,   4,   3,   1,   5,   3,   3,   1},
	                {1,   5,   3,   5,   4,   1,   3,   1,   4,   1}};

        int resultado[10][10];

	multiplicar(resultado, m0, m1, 10);
	testar(resultado[0][0], 89);
	testar(resultado[0][1], 105);
	testar(resultado[0][2], 89);
	testar(resultado[0][3], 100);
	testar(resultado[0][4], 92);
	testar(resultado[0][5], 75);
	testar(resultado[0][6], 140);
	testar(resultado[0][7], 79);
	testar(resultado[0][8], 126);
	testar(resultado[0][9], 99);
	testar(resultado[1][0], 64);
	testar(resultado[1][1], 92);
	testar(resultado[1][2], 62);
	testar(resultado[1][3], 78);
	testar(resultado[1][4], 71);
	testar(resultado[1][5], 67);
	testar(resultado[1][6], 119);
	testar(resultado[1][7], 57);
	testar(resultado[1][8], 103);
	testar(resultado[1][9], 78);
	testar(resultado[2][0], 73);
	testar(resultado[2][1], 91);
	testar(resultado[2][2], 70);
	testar(resultado[2][3], 81);
	testar(resultado[2][4], 66);
	testar(resultado[2][5], 65);
	testar(resultado[2][6], 119);
	testar(resultado[2][7], 61);
	testar(resultado[2][8], 107);
	testar(resultado[2][9], 83);
	testar(resultado[3][0], 90);
	testar(resultado[3][1], 115);
	testar(resultado[3][2], 74);
	testar(resultado[3][3], 101);
	testar(resultado[3][4], 78);
	testar(resultado[3][5], 83);
	testar(resultado[3][6], 145);
	testar(resultado[3][7], 79);
	testar(resultado[3][8], 131);
	testar(resultado[3][9], 95);
	testar(resultado[4][0], 90);
	testar(resultado[4][1], 117);
	testar(resultado[4][2], 83);
	testar(resultado[4][3], 108);
	testar(resultado[4][4], 79);
	testar(resultado[4][5], 74);
	testar(resultado[4][6], 138);
	testar(resultado[4][7], 75);
	testar(resultado[4][8], 131);
	testar(resultado[4][9], 92);
	testar(resultado[5][0], 66);
	testar(resultado[5][1], 89);
	testar(resultado[5][2], 51);
	testar(resultado[5][3], 76);
	testar(resultado[5][4], 68);
	testar(resultado[5][5], 74);
	testar(resultado[5][6], 121);
	testar(resultado[5][7], 66);
	testar(resultado[5][8], 102);
	testar(resultado[5][9], 83);
	testar(resultado[6][0], 52);
	testar(resultado[6][1], 68);
	testar(resultado[6][2], 50);
	testar(resultado[6][3], 60);
	testar(resultado[6][4], 55);
	testar(resultado[6][5], 62);
	testar(resultado[6][6], 97);
	testar(resultado[6][7], 56);
	testar(resultado[6][8], 88);
	testar(resultado[6][9], 70);
	testar(resultado[7][0], 78);
	testar(resultado[7][1], 98);
	testar(resultado[7][2], 82);
	testar(resultado[7][3], 90);
	testar(resultado[7][4], 76);
	testar(resultado[7][5], 62);
	testar(resultado[7][6], 118);
	testar(resultado[7][7], 61);
	testar(resultado[7][8], 114);
	testar(resultado[7][9], 75);
	testar(resultado[8][0], 62);
	testar(resultado[8][1], 94);
	testar(resultado[8][2], 63);
	testar(resultado[8][3], 83);
	testar(resultado[8][4], 70);
	testar(resultado[8][5], 58);
	testar(resultado[8][6], 110);
	testar(resultado[8][7], 53);
	testar(resultado[8][8], 100);
	testar(resultado[8][9], 73);
	testar(resultado[9][0], 101);
	testar(resultado[9][1], 124);
	testar(resultado[9][2], 96);
	testar(resultado[9][3], 114);
	testar(resultado[9][4], 96);
	testar(resultado[9][5], 87);
	testar(resultado[9][6], 159);
	testar(resultado[9][7], 85);
	testar(resultado[9][8], 145);
	testar(resultado[9][9], 106);


}

void caso_de_teste05() {
	printf(" caso de teste 5 \n");
	int m0[10][10] = {{1,   4,   4,   1,   3,   3,   5,   5,   3,   4},
	                {4,   5,   1,   4,   4,   5,   4,   2,   4,   3},
	                {5,   1,   5,   3,   2,   2,   5,   5,   5,   2},
	                {1,   1,   2,   1,   1,   5,   3,   2,   1,   2},
	                {3,   1,   2,   3,   4,   2,   4,   2,   5,   2},
	                {1,   4,   2,   2,   3,   4,   3,   3,   3,   5},
	                {1,   5,   5,   3,   5,   2,   4,   5,   4,   4},
	                {1,   1,   1,   4,   5,   5,   5,   3,   3,   4},
	                {1,   4,   5,   2,   5,   2,   2,   5,   1,   2},
	                {4,   2,   3,   5,   4,   3,   1,   2,   4,   1}};

	int m1[10][10] = {{3,   3,   2,   3,   4,   1,   5,   3,   2,   5},
	                {3,   5,   5,   3,   2,   4,   2,   2,   1,   1},
	                {5,   3,   1,   4,   2,   5,   2,   2,   2,   5},
	                {1,   1,   4,   5,   1,   4,   2,   5,   1,   3},
	                {4,   4,   4,   5,   1,   1,   4,   4,   2,   1},
	                {4,   4,   3,   1,   2,   2,   2,   5,   5,   5},
	                {1,   1,   3,   4,   2,   3,   3,   3,   2,   5},
	                {2,   3,   3,   1,   2,   5,   1,   2,   3,   4},
	                {5,   1,   2,   4,   3,   3,   2,   4,   5,   2},
	                {1,   5,   4,   3,   1,   5,   5,   5,   4,   1}};

        int resultado[10][10];

	multiplicar(resultado, m0, m1, 10);
	testar(resultado[0][0], 94);
	testar(resultado[0][1], 103);
	testar(resultado[0][2], 103);
	testar(resultado[0][3], 103);
	testar(resultado[0][4], 63);
	testar(resultado[0][5], 119);
	testar(resultado[0][6], 87);
	testar(resultado[0][7], 108);
	testar(resultado[0][8], 92);
	testar(resultado[0][9], 105);
	testar(resultado[1][0], 103);
	testar(resultado[1][1], 109);
	testar(resultado[1][2], 119);
	testar(resultado[1][3], 119);
	testar(resultado[1][4], 73);
	testar(resultado[1][5], 108);
	testar(resultado[1][6], 103);
	testar(resultado[1][7], 132);
	testar(resultado[1][8], 98);
	testar(resultado[1][9], 110);
	testar(resultado[2][0], 104);
	testar(resultado[2][1], 89);
	testar(resultado[2][2], 94);
	testar(resultado[2][3], 116);
	testar(resultado[2][4], 78);
	testar(resultado[2][5], 117);
	testar(resultado[2][6], 95);
	testar(resultado[2][7], 115);
	testar(resultado[2][8], 96);
	testar(resultado[2][9], 129);
	testar(resultado[3][0], 55);
	testar(resultado[3][1], 59);
	testar(resultado[3][2], 57);
	testar(resultado[3][3], 53);
	testar(resultado[3][4], 37);
	testar(resultado[3][5], 62);
	testar(resultado[3][6], 50);
	testar(resultado[3][7], 70);
	testar(resultado[3][8], 60);
	testar(resultado[3][9], 72);
	testar(resultado[4][0], 84);
	testar(resultado[4][1], 72);
	testar(resultado[4][2], 83);
	testar(resultado[4][3], 101);
	testar(resultado[4][4], 58);
	testar(resultado[4][5], 84);
	testar(resultado[4][6], 81);
	testar(resultado[4][7], 102);
	testar(resultado[4][8], 79);
	testar(resultado[4][9], 89);
	testar(resultado[5][0], 84);
	testar(resultado[5][1], 99);
	testar(resultado[5][2], 100);
	testar(resultado[5][3], 94);
	testar(resultado[5][4], 55);
	testar(resultado[5][5], 104);
	testar(resultado[5][6], 84);
	testar(resultado[5][7], 109);
	testar(resultado[5][8], 88);
	testar(resultado[5][9], 86);
	testar(resultado[6][0], 112);
	testar(resultado[6][1], 117);
	testar(resultado[6][2], 121);
	testar(resultado[6][3], 129);
	testar(resultado[6][4], 70);
	testar(resultado[6][5], 136);
	testar(resultado[6][6], 100);
	testar(resultado[6][7], 126);
	testar(resultado[6][8], 99);
	testar(resultado[6][9], 111);
	testar(resultado[7][0], 85);
	testar(resultado[7][1], 92);
	testar(resultado[7][2], 105);
	testar(resultado[7][3], 107);
	testar(resultado[7][4], 56);
	testar(resultado[7][5], 100);
	testar(resultado[7][6], 91);
	testar(resultado[7][7], 125);
	testar(resultado[7][8], 94);
	testar(resultado[7][9], 100);
	testar(resultado[8][0], 89);
	testar(resultado[8][1], 96);
	testar(resultado[8][2], 92);
	testar(resultado[8][3], 95);
	testar(resultado[8][4], 52);
	testar(resultado[8][5], 103);
	testar(resultado[8][6], 74);
	testar(resultado[8][7], 91);
	testar(resultado[8][8], 70);
	testar(resultado[8][9], 89);
	testar(resultado[9][0], 92);
	testar(resultado[9][1], 80);
	testar(resultado[9][2], 87);
	testar(resultado[9][3], 103);
	testar(resultado[9][4], 60);
	testar(resultado[9][5], 87);
	testar(resultado[9][6], 80);
	testar(resultado[9][7], 106);
	testar(resultado[9][8], 76);
	testar(resultado[9][9], 93);


}

void caso_de_teste06() {
	printf(" caso de teste 6 \n");
	int m0[10][10] = {{1,   2,   2,   2,   1,   4,   2,   2,   4,   2},
	                {1,   4,   1,   2,   5,   4,   4,   3,   2,   1},
	                {4,   1,   3,   2,   4,   1,   2,   4,   3,   5},
	                {4,   3,   2,   5,   1,   2,   1,   2,   3,   1},
	                {5,   5,   1,   5,   2,   1,   5,   5,   5,   3},
	                {5,   4,   1,   4,   2,   4,   4,   3,   4,   3},
	                {3,   3,   5,   1,   4,   2,   4,   1,   3,   1},
	                {2,   4,   1,   2,   3,   4,   4,   3,   3,   1},
	                {2,   4,   1,   2,   2,   2,   2,   3,   4,   1},
	                {2,   3,   3,   4,   3,   3,   5,   1,   4,   5}};

	int m1[10][10] = {{5,   1,   1,   2,   3,   3,   4,   3,   1,   3},
	                {5,   4,   4,   5,   1,   2,   1,   4,   1,   2},
	                {3,   1,   4,   2,   1,   5,   1,   5,   4,   3},
	                {2,   3,   3,   4,   5,   2,   1,   3,   5,   2},
	                {2,   1,   2,   5,   3,   4,   4,   3,   2,   4},
	                {1,   1,   1,   1,   2,   4,   3,   2,   5,   1},
	                {2,   4,   5,   1,   2,   4,   5,   5,   3,   1},
	                {3,   4,   1,   4,   1,   3,   2,   4,   3,   5},
	                {4,   5,   5,   1,   1,   3,   1,   3,   4,   1},
	                {5,   2,   4,   4,   3,   5,   5,   4,   1,   4}};

        int resultado[10][10];

	multiplicar(resultado, m0, m1, 10);
	testar(resultado[0][0], 67);
	testar(resultado[0][1], 62);
	testar(resultado[0][2], 69);
	testar(resultado[0][3], 55);
	testar(resultado[0][4], 44);
	testar(resultado[0][5], 77);
	testar(resultado[0][6], 54);
	testar(resultado[0][7], 76);
	testar(resultado[0][8], 73);
	testar(resultado[0][9], 49);
	testar(resultado[1][0], 76);
	testar(resultado[1][1], 73);
	testar(resultado[1][2], 78);
	testar(resultado[1][3], 83);
	testar(resultado[1][4], 57);
	testar(resultado[1][5], 92);
	testar(resultado[1][6], 76);
	testar(resultado[1][7], 95);
	testar(resultado[1][8], 79);
	testar(resultado[1][9], 67);
	testar(resultado[2][0], 100);
	testar(resultado[2][1], 71);
	testar(resultado[2][2], 84);
	testar(resultado[2][3], 89);
	testar(resultado[2][4], 66);
	testar(resultado[2][5], 107);
	testar(resultado[2][6], 87);
	testar(resultado[2][7], 106);
	testar(resultado[2][8], 75);
	testar(resultado[2][9], 89);
	testar(resultado[3][0], 80);
	testar(resultado[3][1], 65);
	testar(resultado[3][2], 69);
	testar(resultado[3][3], 70);
	testar(resultado[3][4], 59);
	testar(resultado[3][5], 74);
	testar(resultado[3][6], 53);
	testar(resultado[3][7], 82);
	testar(resultado[3][8], 74);
	testar(resultado[3][9], 58);
	testar(resultado[4][0], 128);
	testar(resultado[4][1], 115);
	testar(resultado[4][2], 116);
	testar(resultado[4][3], 110);
	testar(resultado[4][4], 83);
	testar(resultado[4][5], 117);
	testar(resultado[4][6], 97);
	testar(resultado[4][7], 135);
	testar(resultado[4][8], 101);
	testar(resultado[4][9], 94);
	testar(resultado[5][0], 112);
	testar(resultado[5][1], 94);
	testar(resultado[5][2], 100);
	testar(resultado[5][3], 94);
	testar(resultado[5][4], 78);
	testar(resultado[5][5], 112);
	testar(resultado[5][6], 94);
	testar(resultado[5][7], 118);
	testar(resultado[5][8], 97);
	testar(resultado[5][9], 81);
	testar(resultado[6][0], 85);
	testar(resultado[6][1], 66);
	testar(resultado[6][2], 88);
	testar(resultado[6][3], 72);
	testar(resultado[6][4], 53);
	testar(resultado[6][5], 99);
	testar(resultado[6][6], 73);
	testar(resultado[6][7], 102);
	testar(resultado[6][8], 77);
	testar(resultado[6][9], 66);
	testar(resultado[7][0], 81);
	testar(resultado[7][1], 77);
	testar(resultado[7][2], 80);
	testar(resultado[7][3], 76);
	testar(resultado[7][4], 55);
	testar(resultado[7][5], 90);
	testar(resultado[7][6], 73);
	testar(resultado[7][7], 95);
	testar(resultado[7][8], 80);
	testar(resultado[7][9], 63);
	testar(resultado[8][0], 77);
	testar(resultado[8][1], 71);
	testar(resultado[8][2], 71);
	testar(resultado[8][3], 68);
	testar(resultado[8][4], 45);
	testar(resultado[8][5], 73);
	testar(resultado[8][6], 54);
	testar(resultado[8][7], 81);
	testar(resultado[8][8], 66);
	testar(resultado[8][9], 56);
	testar(resultado[9][0], 105);
	testar(resultado[9][1], 89);
	testar(resultado[9][2], 113);
	testar(resultado[9][3], 92);
	testar(resultado[9][4], 77);
	testar(resultado[9][5], 119);
	testar(resultado[9][6], 95);
	testar(resultado[9][7], 121);
	testar(resultado[9][8], 97);
	testar(resultado[9][9], 78);


}

void caso_de_teste07() {
	printf(" caso de teste 7 \n");
	int m0[10][10] = {{5,   5,   5,   4,   5,   5,   5,   5,   5,   5},
	                {2,   5,   4,   4,   5,   2,   2,   5,   4,   2},
	                {5,   1,   5,   2,   2,   2,   5,   3,   4,   2},
	                {3,   5,   4,   4,   1,   5,   1,   2,   4,   5},
	                {1,   5,   4,   4,   5,   1,   5,   2,   5,   1},
	                {5,   1,   1,   4,   2,   4,   5,   3,   1,   5},
	                {4,   5,   2,   4,   4,   4,   3,   4,   5,   3},
	                {5,   1,   2,   4,   1,   4,   4,   1,   5,   5},
	                {1,   1,   5,   3,   5,   1,   2,   1,   5,   4},
	                {3,   3,   4,   1,   4,   4,   4,   1,   2,   5}};

	int m1[10][10] = {{2,   2,   2,   5,   3,   1,   3,   1,   2,   3},
	                {3,   3,   5,   4,   1,   4,   1,   3,   1,   5},
	                {2,   1,   5,   2,   5,   5,   4,   5,   1,   1},
	                {4,   4,   2,   1,   3,   2,   1,   3,   2,   4},
	                {2,   1,   1,   2,   2,   1,   2,   2,   5,   4},
	                {3,   2,   1,   2,   3,   5,   3,   1,   1,   4},
	                {4,   5,   4,   5,   5,   4,   1,   2,   1,   4},
	                {2,   4,   5,   2,   5,   1,   4,   4,   4,   4},
	                {2,   1,   2,   3,   4,   4,   4,   2,   1,   5},
	                {2,   4,   4,   5,   1,   5,   3,   3,   3,   5}};

        int resultado[10][10];

	multiplicar(resultado, m0, m1, 10);
	testar(resultado[0][0], 126);
	testar(resultado[0][1], 131);
	testar(resultado[0][2], 153);
	testar(resultado[0][3], 154);
	testar(resultado[0][4], 157);
	testar(resultado[0][5], 158);
	testar(resultado[0][6], 129);
	testar(resultado[0][7], 127);
	testar(resultado[0][8], 103);
	testar(resultado[0][9], 191);
	testar(resultado[1][0], 89);
	testar(resultado[1][1], 90);
	testar(resultado[1][2], 113);
	testar(resultado[1][3], 98);
	testar(resultado[1][4], 112);
	testar(resultado[1][5], 104);
	testar(resultado[1][6], 91);
	testar(resultado[1][7], 99);
	testar(resultado[1][8], 80);
	testar(resultado[1][9], 137);
	testar(resultado[2][0], 79);
	testar(resultado[2][1], 81);
	testar(resultado[2][2], 99);
	testar(resultado[2][3], 102);
	testar(resultado[2][4], 115);
	testar(resultado[2][5], 99);
	testar(resultado[2][6], 87);
	testar(resultado[2][7], 81);
	testar(resultado[2][8], 59);
	testar(resultado[2][9], 111);
	testar(resultado[3][0], 88);
	testar(resultado[3][1], 89);
	testar(resultado[3][2], 107);
	testar(resultado[3][3], 105);
	testar(resultado[3][4], 99);
	testar(resultado[3][5], 124);
	testar(resultado[3][6], 91);
	testar(resultado[3][7], 90);
	testar(resultado[3][8], 61);
	testar(resultado[3][9], 135);
	testar(resultado[4][0], 90);
	testar(resultado[4][1], 86);
	testar(resultado[4][2], 105);
	testar(resultado[4][3], 98);
	testar(resultado[4][4], 109);
	testar(resultado[4][5], 106);
	testar(resultado[4][6], 77);
	testar(resultado[4][7], 90);
	testar(resultado[4][8], 66);
	testar(resultado[4][9], 130);
	testar(resultado[5][0], 85);
	testar(resultado[5][1], 98);
	testar(resultado[5][2], 91);
	testar(resultado[5][3], 106);
	testar(resultado[5][4], 98);
	testar(resultado[5][5], 96);
	testar(resultado[5][6], 76);
	testar(resultado[5][7], 72);
	testar(resultado[5][8], 67);
	testar(resultado[5][9], 123);
	testar(resultado[6][0], 99);
	testar(resultado[6][1], 101);
	testar(resultado[6][2], 113);
	testar(resultado[6][3], 117);
	testar(resultado[6][4], 117);
	testar(resultado[6][5], 117);
	testar(resultado[6][6], 97);
	testar(resultado[6][7], 94);
	testar(resultado[6][8], 80);
	testar(resultado[6][9], 155);
	testar(resultado[7][0], 85);
	testar(resultado[7][1], 89);
	testar(resultado[7][2], 89);
	testar(resultado[7][3], 109);
	testar(resultado[7][4], 102);
	testar(resultado[7][5], 110);
	testar(resultado[7][6], 85);
	testar(resultado[7][7], 73);
	testar(resultado[7][8], 58);
	testar(resultado[7][9], 128);
	testar(resultado[8][0], 68);
	testar(resultado[8][1], 64);
	testar(resultado[8][2], 83);
	testar(resultado[8][3], 81);
	testar(resultado[8][4], 90);
	testar(resultado[8][5], 95);
	testar(resultado[8][6], 78);
	testar(resultado[8][7], 79);
	testar(resultado[8][8], 63);
	testar(resultado[8][9], 106);
	testar(resultado[9][0], 79);
	testar(resultado[9][1], 81);
	testar(resultado[9][2], 96);
	testar(resultado[9][3], 105);
	testar(resultado[9][4], 93);
	testar(resultado[9][5], 111);
	testar(resultado[9][6], 80);
	testar(resultado[9][7], 78);
	testar(resultado[9][8], 64);
	testar(resultado[9][9], 119);


}

void caso_de_teste08() {
	printf(" caso de teste 8 \n");
	int m0[10][10] = {{1,   3,   1,   5,   1,   2,   1,   4,   1,   4},
	                {5,   5,   1,   3,   2,   2,   4,   2,   2,   2},
	                {5,   3,   3,   4,   2,   2,   2,   1,   2,   4},
	                {1,   5,   1,   2,   1,   4,   5,   1,   4,   1},
	                {5,   3,   2,   2,   3,   5,   3,   1,   2,   2},
	                {2,   3,   1,   1,   1,   2,   2,   3,   4,   1},
	                {3,   5,   5,   4,   1,   5,   4,   2,   2,   2},
	                {4,   3,   1,   3,   5,   3,   2,   4,   3,   3},
	                {5,   2,   3,   2,   4,   3,   3,   3,   2,   4},
	                {3,   5,   5,   4,   5,   2,   5,   3,   3,   1}};

	int m1[10][10] = {{4,   5,   3,   5,   4,   5,   1,   5,   4,   3},
	                {5,   5,   4,   2,   3,   1,   1,   2,   5,   5},
	                {3,   2,   1,   2,   2,   4,   1,   5,   1,   5},
	                {5,   4,   4,   5,   5,   4,   1,   2,   5,   1},
	                {5,   1,   5,   3,   5,   3,   4,   5,   1,   3},
	                {1,   3,   1,   1,   1,   4,   5,   1,   4,   5},
	                {1,   5,   5,   1,   1,   4,   2,   1,   2,   1},
	                {4,   1,   4,   3,   1,   3,   2,   4,   2,   2},
	                {3,   2,   1,   4,   5,   3,   2,   1,   1,   2},
	                {2,   3,   4,   1,   3,   4,   1,   1,   2,   2}};

        int resultado[10][10];

	multiplicar(resultado, m0, m1, 10);
	testar(resultado[0][0], 82);
	testar(resultado[0][1], 72);
	testar(resultado[0][2], 81);
	testar(resultado[0][3], 64);
	testar(resultado[0][4], 69);
	testar(resultado[0][5], 78);
	testar(resultado[0][6], 40);
	testar(resultado[0][7], 55);
	testar(resultado[0][8], 73);
	testar(resultado[0][9], 60);
	testar(resultado[1][0], 97);
	testar(resultado[1][1], 104);
	testar(resultado[1][2], 98);
	testar(resultado[1][3], 80);
	testar(resultado[1][4], 86);
	testar(resultado[1][5], 96);
	testar(resultado[1][6], 50);
	testar(resultado[1][7], 74);
	testar(resultado[1][8], 89);
	testar(resultado[1][9], 80);
	testar(resultado[2][0], 96);
	testar(resultado[2][1], 97);
	testar(resultado[2][2], 90);
	testar(resultado[2][3], 82);
	testar(resultado[2][4], 92);
	testar(resultado[2][5], 103);
	testar(resultado[2][6], 47);
	testar(resultado[2][7], 78);
	testar(resultado[2][8], 84);
	testar(resultado[2][9], 81);
	testar(resultado[3][0], 74);
	testar(resultado[3][1], 90);
	testar(resultado[3][2], 78);
	testar(resultado[3][3], 59);
	testar(resultado[3][4], 69);
	testar(resultado[3][5], 80);
	testar(resultado[3][6], 54);
	testar(resultado[3][7], 47);
	testar(resultado[3][8], 75);
	testar(resultado[3][9], 75);
	testar(resultado[4][0], 88);
	testar(resultado[4][1], 96);
	testar(resultado[4][2], 86);
	testar(resultado[4][3], 75);
	testar(resultado[4][4], 83);
	testar(resultado[4][5], 102);
	testar(resultado[4][6], 63);
	testar(resultado[4][7], 76);
	testar(resultado[4][8], 84);
	testar(resultado[4][9], 89);
	testar(resultado[5][0], 66);
	testar(resultado[5][1], 62);
	testar(resultado[5][2], 60);
	testar(resultado[5][3], 56);
	testar(resultado[5][4], 59);
	testar(resultado[5][5], 65);
	testar(resultado[5][6], 40);
	testar(resultado[5][7], 49);
	testar(resultado[5][8], 54);
	testar(resultado[5][9], 58);
	testar(resultado[6][0], 104);
	testar(resultado[6][1], 114);
	testar(resultado[6][2], 98);
	testar(resultado[6][3], 83);
	testar(resultado[6][4], 89);
	testar(resultado[6][5], 115);
	testar(resultado[6][6], 64);
	testar(resultado[6][7], 84);
	testar(resultado[6][8], 101);
	testar(resultado[6][9], 107);
	testar(resultado[7][0], 110);
	testar(resultado[7][1], 92);
	testar(resultado[7][2], 106);
	testar(resultado[7][3], 90);
	testar(resultado[7][4], 100);
	testar(resultado[7][5], 107);
	testar(resultado[7][6], 67);
	testar(resultado[7][7], 89);
	testar(resultado[7][8], 85);
	testar(resultado[7][9], 87);
	testar(resultado[8][0], 101);
	testar(resultado[8][1], 96);
	testar(resultado[8][2], 102);
	testar(resultado[8][3], 84);
	testar(resultado[8][4], 93);
	testar(resultado[8][5], 114);
	testar(resultado[8][6], 63);
	testar(resultado[8][7], 92);
	testar(resultado[8][8], 81);
	testar(resultado[8][9], 90);
	testar(resultado[9][0], 127);
	testar(resultado[9][1], 114);
	testar(resultado[9][2], 121);
	testar(resultado[9][3], 99);
	testar(resultado[9][4], 110);
	testar(resultado[9][5], 121);
	testar(resultado[9][6], 70);
	testar(resultado[9][7], 106);
	testar(resultado[9][8], 96);
	testar(resultado[9][9], 107);


}

void caso_de_teste09() {
	printf(" caso de teste 9 \n");
	int m0[10][10] = {{4,   1,   2,   1,   3,   5,   1,   5,   5,   3},
	                {4,   1,   4,   4,   2,   2,   2,   2,   4,   1},
	                {4,   3,   3,   2,   4,   4,   4,   5,   5,   1},
	                {3,   1,   4,   4,   3,   1,   4,   3,   2,   5},
	                {2,   1,   2,   5,   1,   3,   1,   2,   5,   1},
	                {3,   5,   3,   2,   3,   1,   5,   1,   5,   5},
	                {2,   4,   5,   5,   3,   2,   2,   3,   2,   1},
	                {2,   3,   3,   4,   3,   3,   3,   5,   4,   4},
	                {1,   3,   3,   3,   5,   1,   1,   4,   1,   2},
	                {3,   4,   1,   4,   5,   3,   3,   4,   2,   4}};

	int m1[10][10] = {{3,   1,   1,   3,   2,   1,   3,   2,   5,   1},
	                {4,   4,   1,   2,   3,   1,   2,   1,   4,   5},
	                {4,   3,   3,   4,   2,   2,   5,   3,   1,   5},
	                {5,   3,   2,   2,   2,   3,   3,   2,   4,   4},
	                {2,   4,   2,   4,   2,   1,   1,   5,   1,   5},
	                {1,   4,   4,   4,   4,   5,   5,   3,   2,   2},
	                {2,   3,   2,   3,   2,   3,   3,   1,   4,   3},
	                {1,   3,   4,   4,   3,   2,   4,   4,   2,   1},
	                {3,   2,   1,   3,   2,   4,   5,   3,   1,   3},
	                {5,   4,   1,   1,   3,   4,   5,   5,   4,   4}};

        int resultado[10][10];

	multiplicar(resultado, m0, m1, 10);
	testar(resultado[0][0], 77);
	testar(resultado[0][1], 89);
	testar(resultado[0][2], 69);
	testar(resultado[0][3], 97);
	testar(resultado[0][4], 79);
	testar(resultado[0][5], 85);
	testar(resultado[0][6], 118);
	testar(resultado[0][7], 98);
	testar(resultado[0][8], 74);
	testar(resultado[0][9], 83);
	testar(resultado[1][0], 81);
	testar(resultado[1][1], 72);
	testar(resultado[1][2], 54);
	testar(resultado[1][3], 81);
	testar(resultado[1][4], 60);
	testar(resultado[1][5], 67);
	testar(resultado[1][6], 97);
	testar(resultado[1][7], 72);
	testar(resultado[1][8], 70);
	testar(resultado[1][9], 83);
	testar(resultado[2][0], 91);
	testar(resultado[2][1], 104);
	testar(resultado[2][2], 78);
	testar(resultado[2][3], 114);
	testar(resultado[2][4], 87);
	testar(resultado[2][5], 89);
	testar(resultado[2][6], 125);
	testar(resultado[2][7], 100);
	testar(resultado[2][8], 90);
	testar(resultado[2][9], 106);
	testar(resultado[3][0], 98);
	testar(resultado[3][1], 92);
	testar(resultado[3][2], 61);
	testar(resultado[3][3], 86);
	testar(resultado[3][4], 71);
	testar(resultado[3][5], 78);
	testar(resultado[3][6], 110);
	testar(resultado[3][7], 92);
	testar(resultado[3][8], 88);
	testar(resultado[3][9], 102);
	testar(resultado[4][0], 72);
	testar(resultado[4][1], 66);
	testar(resultado[4][2], 49);
	testar(resultado[4][3], 69);
	testar(resultado[4][4], 56);
	testar(resultado[4][5], 69);
	testar(resultado[4][6], 90);
	testar(resultado[4][7], 64);
	testar(resultado[4][8], 60);
	testar(resultado[4][9], 72);
	testar(resultado[5][0], 109);
	testar(resultado[5][1], 102);
	testar(resultado[5][2], 55);
	testar(resultado[5][3], 90);
	testar(resultado[5][4], 79);
	testar(resultado[5][5], 85);
	testar(resultado[5][6], 117);
	testar(resultado[5][7], 91);
	testar(resultado[5][8], 98);
	testar(resultado[5][9], 119);
	testar(resultado[6][0], 93);
	testar(resultado[6][1], 91);
	testar(resultado[6][2], 64);
	testar(resultado[6][3], 89);
	testar(resultado[6][4], 70);
	testar(resultado[6][5], 68);
	testar(resultado[6][6], 100);
	testar(resultado[6][7], 79);
	testar(resultado[6][8], 78);
	testar(resultado[6][9], 105);
	testar(resultado[7][0], 102);
	testar(resultado[7][1], 107);
	testar(resultado[7][2], 74);
	testar(resultado[7][3], 101);
	testar(resultado[7][4], 86);
	testar(resultado[7][5], 92);
	testar(resultado[7][6], 126);
	testar(resultado[7][7], 103);
	testar(resultado[7][8], 92);
	testar(resultado[7][9], 111);
	testar(resultado[8][0], 72);
	testar(resultado[8][1], 80);
	testar(resultado[8][2], 54);
	testar(resultado[8][3], 75);
	testar(resultado[8][4], 59);
	testar(resultado[8][5], 52);
	testar(resultado[8][6], 77);
	testar(resultado[8][7], 78);
	testar(resultado[8][8], 60);
	testar(resultado[8][9], 88);
	testar(resultado[9][0], 98);
	testar(resultado[9][1], 107);
	testar(resultado[9][2], 68);
	testar(resultado[9][3], 96);
	testar(resultado[9][4], 84);
	testar(resultado[9][5], 82);
	testar(resultado[9][6], 109);
	testar(resultado[9][7], 100);
	testar(resultado[9][8], 97);
	testar(resultado[9][9], 110);


}

void caso_de_teste10() {
	printf(" caso de teste 10 \n");
	int m0[10][10] = {{1,   4,   4,   1,   4,   3,   5,   2,   4,   1},
	                {3,   3,   2,   3,   1,   2,   2,   5,   4,   4},
	                {3,   2,   5,   4,   3,   2,   2,   2,   2,   4},
	                {5,   4,   4,   5,   4,   5,   3,   5,   1,   3},
	                {5,   3,   5,   1,   2,   2,   4,   3,   4,   4},
	                {3,   1,   3,   3,   1,   2,   1,   2,   3,   4},
	                {2,   5,   2,   1,   4,   2,   2,   3,   1,   2},
	                {1,   5,   2,   2,   2,   5,   1,   2,   5,   1},
	                {3,   2,   1,   5,   1,   3,   3,   3,   2,   1},
	                {1,   3,   2,   2,   5,   5,   5,   1,   5,   5}};

	int m1[10][10] = {{5,   1,   3,   3,   2,   2,   3,   2,   2,   4},
	                {2,   2,   1,   2,   1,   3,   4,   3,   5,   3},
	                {1,   2,   5,   4,   4,   2,   5,   4,   4,   5},
	                {4,   3,   1,   4,   2,   4,   5,   5,   5,   4},
	                {5,   4,   5,   5,   2,   5,   2,   3,   2,   4},
	                {5,   5,   5,   4,   5,   3,   2,   5,   1,   5},
	                {1,   2,   4,   3,   5,   1,   1,   1,   2,   3},
	                {4,   1,   3,   3,   1,   4,   5,   4,   3,   3},
	                {2,   2,   4,   1,   2,   4,   5,   3,   3,   3},
	                {4,   3,   4,   3,   3,   5,   3,   3,   2,   4}};

        int resultado[10][10];

	multiplicar(resultado, m0, m1, 10);
	testar(resultado[0][0], 81);
	testar(resultado[0][1], 74);
	testar(resultado[0][2], 109);
	testar(resultado[0][3], 91);
	testar(resultado[0][4], 85);
	testar(resultado[0][5], 89);
	testar(resultado[0][6], 96);
	testar(resultado[0][7], 90);
	testar(resultado[0][8], 84);
	testar(resultado[0][9], 108);
	testar(resultado[1][0], 96);
	testar(resultado[1][1], 65);
	testar(resultado[1][2], 95);
	testar(resultado[1][3], 85);
	testar(resultado[1][4], 70);
	testar(resultado[1][5], 100);
	testar(resultado[1][6], 111);
	testar(resultado[1][7], 97);
	testar(resultado[1][8], 87);
	testar(resultado[1][9], 106);
	testar(resultado[2][0], 95);
	testar(resultado[2][1], 73);
	testar(resultado[2][2], 103);
	testar(resultado[2][3], 98);
	testar(resultado[2][4], 80);
	testar(resultado[2][5], 97);
	testar(resultado[2][6], 106);
	testar(resultado[2][7], 99);
	testar(resultado[2][8], 88);
	testar(resultado[2][9], 115);
	testar(resultado[3][0], 139);
	testar(resultado[3][1], 99);
	testar(resultado[3][2], 132);
	testar(resultado[3][3], 133);
	testar(resultado[3][4], 104);
	testar(resultado[3][5], 127);
	testar(resultado[3][6], 136);
	testar(resultado[3][7], 135);
	testar(resultado[3][8], 114);
	testar(resultado[3][9], 152);
	testar(resultado[4][0], 100);
	testar(resultado[4][1], 73);
	testar(resultado[4][2], 121);
	testar(resultado[4][3], 100);
	testar(resultado[4][4], 92);
	testar(resultado[4][5], 101);
	testar(resultado[4][6], 116);
	testar(resultado[4][7], 100);
	testar(resultado[4][8], 93);
	testar(resultado[4][9], 125);
	testar(resultado[5][0], 78);
	testar(resultado[5][1], 56);
	testar(resultado[5][2], 81);
	testar(resultado[5][3], 72);
	testar(resultado[5][4], 62);
	testar(resultado[5][5], 79);
	testar(resultado[5][6], 87);
	testar(resultado[5][7], 79);
	testar(resultado[5][8], 67);
	testar(resultado[5][9], 90);
	testar(resultado[6][0], 80);
	testar(resultado[6][1], 60);
	testar(resultado[6][2], 81);
	testar(resultado[6][3], 78);
	testar(resultado[6][4], 58);
	testar(resultado[6][5], 81);
	testar(resultado[6][6], 81);
	testar(resultado[6][7], 77);
	testar(resultado[6][8], 72);
	testar(resultado[6][9], 89);
	testar(resultado[7][0], 83);
	testar(resultado[7][1], 71);
	testar(resultado[7][2], 89);
	testar(resultado[7][3], 76);
	testar(resultado[7][4], 68);
	testar(resultado[7][5], 88);
	testar(resultado[7][6], 96);
	testar(resultado[7][7], 93);
	testar(resultado[7][8], 79);
	testar(resultado[7][9], 98);
	testar(resultado[8][0], 83);
	testar(resultado[8][1], 59);
	testar(resultado[8][2], 74);
	testar(resultado[8][3], 77);
	testar(resultado[8][4], 64);
	testar(resultado[8][5], 76);
	testar(resultado[8][6], 86);
	testar(resultado[8][7], 83);
	testar(resultado[8][8], 73);
	testar(resultado[8][9], 90);
	testar(resultado[9][0], 110);
	testar(resultado[9][1], 98);
	testar(resultado[9][2], 131);
	testar(resultado[9][3], 108);
	testar(resultado[9][4], 103);
	testar(resultado[9][5], 117);
	testar(resultado[9][6], 105);
	testar(resultado[9][7], 108);
	testar(resultado[9][8], 88);
	testar(resultado[9][9], 129);


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
