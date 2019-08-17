#include<stdio.h>

//[]-------------------------------------------------------------[]
//   Função: pos_maior_elemento()
//   Entrada: vetor de inteiros v[] e o seu tamanho n
//   Saída:  a posicao do maior elemento do vetor
//[]-------------------------------------------------------------[]
int pos_maior_elemento(int v[], int n){
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
   int v[6] = {1,2,3,4,5,6};
   testar(pos_maior_elemento(v, 6), 5);
}

void caso_de_teste02(){
   int v[10] = {2,7,6,4,5,9,8,7,10,12};
   testar(pos_maior_elemento(v, 10), 9);
}

void caso_de_teste03(){
   int v[10] = {12,15,65,45,57,91,82,7,13,12};
   testar(pos_maior_elemento(v, 10), 5);
}

void caso_de_teste04(){
   int v[7] = {21,25,49,28,57,20,22};
   testar(pos_maior_elemento(v, 7), 4);
}

void caso_de_teste05(){
   int v[6] = {17,2,15,4,14,18};
   testar(pos_maior_elemento(v, 6), 5);
}

void caso_de_teste06(){
   int v[10] = {1,8,7,3,2,5,4,9,6,0};
   testar(pos_maior_elemento(v, 10), 7);
}

void caso_de_teste07(){
   int v[10] = {2,18,27,33,22,15,24,19,26,30};
   testar(pos_maior_elemento(v, 10), 3);
}

void caso_de_teste08(){
   int v[10] = {32,28,47,13,26,12,4,29,16,14};
   testar(pos_maior_elemento(v, 10), 2);
}

void caso_de_teste09(){
   int v[10] = {32,28,21,37,29,25,22,29,17,24};
   testar(pos_maior_elemento(v, 10), 3);
}

void caso_de_teste10(){
   int v[10] = {41,28,47,27,29,35,26,39,46,32};
   testar(pos_maior_elemento(v, 10), 2);
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
