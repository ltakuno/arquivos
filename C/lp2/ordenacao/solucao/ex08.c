//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex08.c
//    Importante: nao altere o nome do arquivo.
//[]--------------------------------------------------------------[]
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

#define btoa(x) x ? "true" : "false" 

//[]-------------------------------------------------------------[]
//   Função: busca_binaria
//
//   Entrada: vetor ordenado de tamanho n que armazena números inteiros. 
//            um elemento x a ser buscado no vetor
//            
//   Saída:   
//   Ex.:
//       entrada: v = {3, 4, 6, 8, 9}, x = 4
//       saída:   retorna 1, pois v[1] = 4
//       
//[]-------------------------------------------------------------[]
int busca_binaria(int v[], int n, int x){
   int inicio = 0;
   int fim = n-1;
   
   while(inicio <= fim){
      int meio = (inicio + fim)/2;
      if (x == v[meio])
         return meio;
      else {
         if (x < v[meio])
            fim = meio-1;
         else if (x > v[meio])
                 inicio = meio+1;
      }
   }    

   return -1;
}


//[]-------------------------------------------------------------[]
//   Função: testar()
//   Entrada: valor obtido da funcao, valor esperado
//   Saída: ok se obtido igual a esperado e nao ok caso contrario
//[]-------------------------------------------------------------[]
float testar(int obtido, int esperado){
   float resultado;
   if (obtido == esperado){
	   printf("Parabéns !!!");
           resultado = 1.0;  
   } else {
	   printf("Ainda não !!!");
           resultado = 0.0;  
   }
   printf(" obtido: %d  esperado: %d\n", obtido, esperado);
   return resultado;
}

//[]-------------------------------------------------------------[]
//    Casos de testes
//[]-------------------------------------------------------------[]
float caso_de_teste01(){
   int v1[5] = {3, 4, 6, 8, 9};
   return testar(busca_binaria(v1, 10, 4), 1);
}


float caso_de_teste02(){
   int v1[5] = {3, 4, 6, 8, 9};
   return testar(busca_binaria(v1, 10, 9), 4);
}

float caso_de_teste03(){
   int v1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   return testar(busca_binaria(v1, 10, 2), 1);
}

float caso_de_teste04(){
   int v1[10] = { 5, 12, 16, 22, 27, 43, 54, 56, 67, 98};
   return testar(busca_binaria(v1, 10, 16), 2);
}

float caso_de_teste05(){
   int v1[10] = { 5, 12, 16, 22, 27, 43, 54, 56, 67, 98};
   return testar(busca_binaria(v1, 10, 43), 5);
}

float caso_de_teste06(){
   int v1[10] = { 5, 12, 16, 22, 27, 43, 54, 56, 67, 98};
   return testar(busca_binaria(v1, 10, 5), 0);
}

float caso_de_teste07(){
   int v1[10] = { 5, 12, 16, 22, 27, 43, 54, 56, 67, 98};
   return testar(busca_binaria(v1, 10, 98), 9);
}

float caso_de_teste08(){
   int v1[10]= {1,  3,  5,  7,  9, 10, 12, 14, 16, 18};
   return testar(busca_binaria(v1, 10, 18), 9);
}

float caso_de_teste09(){
   int v1[10]= {1,  3,  5,  7,  9, 10, 12, 14, 16, 18};
   return testar(busca_binaria(v1, 10, 5), 2);
}

float caso_de_teste10(){
   int v1[10]= {1,  3,  5,  7,  9, 10, 12, 14, 16, 18};
   return testar(busca_binaria(v1, 10, 7), 3);
}



//[]-------------------------------------------------------------[]
//    programa principal
//[]-------------------------------------------------------------[]
int main(){
   float r = 0.0;
   r += caso_de_teste01(); 
   r += caso_de_teste02(); 
   r += caso_de_teste03(); 
   r += caso_de_teste04(); 
   r += caso_de_teste05(); 
   r += caso_de_teste06(); 
   r += caso_de_teste07(); 
   r += caso_de_teste08(); 
   r += caso_de_teste09(); 
   r += caso_de_teste10(); 

   printf("exercicio 08\n");
   printf("sua nota foi: %.2f\n", r/10.0);
   return 0;
}
