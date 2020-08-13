#include<stdio.h>


//[]-------------------------------------------------------------[]
//   Função: substituir_pares_e_impares_e_depois_somar()
//   Entrada: vetor de inteiros v[] e o seu tamanho
//   Saída: substituir números pares por -1, 
//          substituir números ímpares por +1,
//          e após isso, calcula e devolve o somatório do vetor
//          resultante
//[]-------------------------------------------------------------[
int substituir_pares_e_impares_e_depois_somar(int v[], int n){
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
   int v1[6] = {1,2,3,4,5,6};
   testar(substituir_pares_e_impares_e_depois_somar(v1, 6), 0);
}

void caso_de_teste02(){
   int v1[10] = {2,7,6,4,5,1,8,9,11,12};
   testar(substituir_pares_e_impares_e_depois_somar(v1, 10), 0);
}

void caso_de_teste03(){
   int v1[10] = {12,13,65,45,14,91,82,7,13,15};
   testar(substituir_pares_e_impares_e_depois_somar(v1, 10), 4);
}

void caso_de_teste04(){
   int v1[7] = {20,21,49,28,57,21,22};
   testar(substituir_pares_e_impares_e_depois_somar(v1, 7), 1);
}

void caso_de_teste05(){
   int v1[6] = {17,2,19,4,14,18};
   testar(substituir_pares_e_impares_e_depois_somar(v1, 6), -2);
}

void caso_de_teste06(){
   int v1[10] = {1,3,2,4,7,5,4,9,6,0};
   testar(substituir_pares_e_impares_e_depois_somar(v1, 10), 0);
}

void caso_de_teste07(){
   int v1[10] = {2,18,27,33,22,15,24,19,26,72};
   testar(substituir_pares_e_impares_e_depois_somar(v1, 10), -2);
}

void caso_de_teste08(){
   int v1[10] = {32,82,47,13,26,12,4,29,16,28};
   testar(substituir_pares_e_impares_e_depois_somar(v1, 10), -4);
}

void caso_de_teste09(){
   int v1[10] = {32,33,24,35,37,38,39,30,21,42};
   testar(substituir_pares_e_impares_e_depois_somar(v1, 10), 0);
}

void caso_de_teste10(){
   int v1[10] = {41,28,47,27,29,35,26,39,46,32};
   testar(substituir_pares_e_impares_e_depois_somar(v1, 10), 2);
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
