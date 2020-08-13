#include<stdio.h>

//[]-------------------------------------------------------------[]
//   Função: contar_quantidade_de_elementos_da_interseccao()
//   Entrada: dois vetores de inteiros v1[] e v2[] e o seus 
//            respectivos tamanhos n1 e n2
//   Saída: devolve a quantidade de números que estão na 
//          interseccao entre v1 e v2  
//[]-------------------------------------------------------------[
int contar_quantidade_de_elementos_da_interseccao(int v1[], int n1, int v2[], int n2){
   int contador = 0;
   for(int i = 0; i < n1; i++)
      for(int j = 0; j < n2; j++)
	   if (v1[i] == v2[j])
		   contador++;
   return contador;
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
   int v2[7] = {2,4,6,8,10,12,14};
   testar(contar_quantidade_de_elementos_da_interseccao(v1, 6, v2, 7), 3);
}

void caso_de_teste02(){
   int v1[10] = {2,7,6,4,5,1,8,9,11,12};
   int v2[10] = {2,7,6,4,5,1,8,9,11,12};
   testar(contar_quantidade_de_elementos_da_interseccao(v1, 10, v2, 10), 10);
}

void caso_de_teste03(){
   int v1[10] = {12,13,65,45,14,91,82,7,13,15};
   int v2[10] = {17,23,45,65,34,61,28,17,12,15};
   testar(contar_quantidade_de_elementos_da_interseccao(v1, 10, v2, 10), 4);
}

void caso_de_teste04(){
   int v1[7] = {20,21,49,28,57,21,22};
   int v2[7] = {30,47,49,58,63,21,74};
   testar(contar_quantidade_de_elementos_da_interseccao(v1, 7, v2, 7), 3);
}

void caso_de_teste05(){
   int v1[6] = {17,2,19,4,14,18};
   int v2[6] = {17,12,26,41,47,18};
   testar(contar_quantidade_de_elementos_da_interseccao(v1, 6, v2, 6), 2);
}

void caso_de_teste06(){
   int v1[10] = {1,3,2,4,7,5,4,9,6,0};
   int v2[10] = {11,23,22,34,37,45,44,59,56,75};
   testar(contar_quantidade_de_elementos_da_interseccao(v1, 10, v2, 10), 0);
}

void caso_de_teste07(){
   int v1[10] = {2,18,27,33,22,15,24,19,26,72};
   int v2[10] = {12,19,2,23,27,35,25,9,6,24};
   testar(contar_quantidade_de_elementos_da_interseccao(v1, 10, v2, 10), 4);
}

void caso_de_teste08(){
   int v1[10] = {32,82,47,13,26,12,4,29,16,28};
   int v2[10] = {12,19,2,23,27,35,25,9,6,24};
   testar(contar_quantidade_de_elementos_da_interseccao(v1, 10, v2, 10), 1);
}

void caso_de_teste09(){
   int v1[10] = {32,33,24,35,37,38,39,30,21,42};
   int v2[10] = {32,33,24,35,37,38,39,30,21,42};
   testar(contar_quantidade_de_elementos_da_interseccao(v1, 10, v2, 10), 10);
}

void caso_de_teste10(){
   int v1[10] = {41,28,47,27,29,35,26,39,46,32};
   int v2[10] = {32,33,24,35,37,38,39,30,21,42};
   testar(contar_quantidade_de_elementos_da_interseccao(v1, 10, v2, 10), 3);
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
