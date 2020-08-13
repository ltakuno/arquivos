#include<stdio.h>



//[]-------------------------------------------------------------[]
//   Função: empurrar_maior_elemento_para_o_fim_do_vetor()
//   Entrada: vetor de inteiros v[] e o seu tamanho
//   Saída: coloca o maior elemento do vetor no final
//   	obs:
//   		1 - todos os elementos devem ser preservados
//   		2 - utilize trocas sucessivas  
//[]-------------------------------------------------------------[
void empurrar_maior_elemento_para_o_fim_do_vetor(int v[], int n){
	// escreva o seu código aqui...
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
   empurrar_maior_elemento_para_o_fim_do_vetor(v1, 6);
   testar(v1[5], 6);
}

void caso_de_teste02(){
   int v1[10] = {2,7,6,4,5,1,8,9,11,12};
   empurrar_maior_elemento_para_o_fim_do_vetor(v1, 10);
   testar(v1[9], 12);
}

void caso_de_teste03(){
   int v1[10] = {12,13,65,45,14,91,82,7,13,15};
   empurrar_maior_elemento_para_o_fim_do_vetor(v1, 10);
   testar(v1[9], 91);
}

void caso_de_teste04(){
   int v1[7] = {20,21,49,28,57,21,22};
   empurrar_maior_elemento_para_o_fim_do_vetor(v1, 7);
   testar(v1[6], 57);
}

void caso_de_teste05(){
   int v1[6] = {17,2,19,4,14,18};
   empurrar_maior_elemento_para_o_fim_do_vetor(v1, 6);
   testar(v1[5], 19);
}

void caso_de_teste06(){
   int v1[10] = {1,3,2,4,7,5,4,9,6,0};
   empurrar_maior_elemento_para_o_fim_do_vetor(v1, 10);
   testar(v1[9], 9);
}

void caso_de_teste07(){
   int v1[10] = {2,18,27,33,22,15,24,19,26,72};
   empurrar_maior_elemento_para_o_fim_do_vetor(v1, 10);
   testar(v1[9], 72);
}

void caso_de_teste08(){
   int v1[10] = {32,82,47,13,26,12,4,29,16,28};
   empurrar_maior_elemento_para_o_fim_do_vetor(v1, 10);
   testar(v1[9], 82);
}

void caso_de_teste09(){
   int v1[10] = {32,33,42,35,37,38,39,30,21,24};
   empurrar_maior_elemento_para_o_fim_do_vetor(v1, 10);
   testar(v1[9], 42);
}

void caso_de_teste10(){
   int v1[10] = {41,28,47,27,29,35,26,39,46,32};
   empurrar_maior_elemento_para_o_fim_do_vetor(v1, 10);
   testar(v1[9], 47);
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
