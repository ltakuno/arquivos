#include<stdio.h>


//[]-------------------------------------------------------------[]
//   Função: trocar()
//[]-------------------------------------------------------------[]
void trocar(int v[], int i, int j){
   int aux = v[i];
   v[i] = v[j];
   v[j] = aux;
}

//[]-------------------------------------------------------------[]
//   Função: inverter()
//   Entrada: vetor de inteiros v[] e o seu tamanho
//   Saída: devolve o vetor v[] na ordem inversa
//       ex: 
//        entrada: [1,2,3,4] 
//        saída:   [4,3,2,1]          
//          
//[]-------------------------------------------------------------[
void inverter(int v[], int n){
   int i = 0;
   int j = n - 1;

   while(i < j) {
       trocar(v, i, j);
       i++; j--;
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
//    Funcao: iguais()
//    Entrada: vetores v1 e v2 e seus tamanhos n1 e n2
//    Saida: devolve 1 se são iguais e 0 caso contrário
//[]-------------------------------------------------------------[]

int iguais(int v1[], int n1, int v2[], int n2){
   if (n1 != n2) 
      return 0;

   for(int i = 0; i < n1; i++) {
      if (v1[i] != v2[i]) 
	     return 0; 
   }

   return 1;
}



//[]-------------------------------------------------------------[]
//    Casos de testes
//[]-------------------------------------------------------------[]
void caso_de_teste01(){
   int v1[6] = {1,2,3,4,5,6};
   int v2[6] = {6,5,4,3,2,1};

   inverter(v1, 6);
   testar(iguais(v1, 6, v2, 6), 1);
}

void caso_de_teste02(){
   int v1[10] = {2,7,6,4,5,1,8,9,11,12};
   int v2[10] = {12,11,9,8,1,5,4,6,7,2};

   inverter(v1, 10);
   testar(iguais(v1, 10, v2, 10), 1);
}

void caso_de_teste03(){
   int v1[10] = {12,13,65,45,14,91,82,7,13,15};
   int v2[10] = {15,13,7,82,91,14,45,65,13,12};
   inverter(v1, 10);
   testar(iguais(v1, 10, v2, 10), 1);
}

void caso_de_teste04(){
   int v1[7] = {20,21,49,28,57,21,22};
   int v2[7] = {22,21,57,28,49,21,20};
   inverter(v1, 7);
   testar(iguais(v1, 7, v2, 7), 1);
}

void caso_de_teste05(){
   int v1[6] = {17,2,19,4,14,18};
   int v2[6] = {18,14,4,19,2,17};
   inverter(v1, 6);
   testar(iguais(v1, 6, v2, 6), 1);
}


void caso_de_teste06(){
   int v1[10] = {1,3,2,4,7,5,4,9,6,0};
   int v2[10] = {0,6,9,4,5,7,4,2,3,1};
   inverter(v1, 10);
   testar(iguais(v1, 10, v2, 10), 1);
}

void caso_de_teste07(){
   int v1[10] = {2,18,27,33,22,15,24,19,26,72};
   int v2[10] = {72,26,19,24,15,22,33,27,18,2};
   inverter(v1, 10);
   testar(iguais(v1, 10, v2, 10), 1);
}

void caso_de_teste08(){
   int v1[10] = {32,82,47,13,26,12,4,29,16,28};
   int v2[10] = {28,16,29,4,12,26,13,47,82,32};
   inverter(v1, 10);
   testar(iguais(v1, 10, v2, 10), 1);
}

void caso_de_teste09(){
   int v1[10] = {32,33,24,35,37,38,39,30,21,42};
   int v2[10] = {42,21,30,39,38,37,35,24,33,32};
   inverter(v1, 10);
   testar(iguais(v1, 10, v2, 10), 1);
}

void caso_de_teste10(){
   int v1[10] = {41,28,47,27,29,35,26,39,46,32};
   int v2[10] = {32,46,39,26,35,29,27,47,28,41};
   inverter(v1, 10);
   testar(iguais(v1, 10, v2, 10), 1);
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
