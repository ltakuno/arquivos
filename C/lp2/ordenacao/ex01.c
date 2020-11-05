//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex01.c
//    Importante: nao altere o nome do arquivo.
//[]--------------------------------------------------------------[]
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

#define btoa(x) x ? "true" : "false" 

//[]-------------------------------------------------------------[]
//   Função: posiciona_ultimo_elemento
//   Entrada: vetor de tamanho n que armazena números inteiros.
//            O vetor está ordenado até a penúltima posição.
//   Saída:   Coloque o ultimo elemento na posição correta e devolva
//            o vetor ordenado.
//  
//   Ex.:
//       entrada: {1, 2, 4, 5, 3}
//       saída:   {1, 2, 3, 4, 5}
//       
//       entrada: {10, 22,  24,  35,  13}
//       saída:   {10, 13,  22,  24,  35}
//[]-------------------------------------------------------------[]
void posiciona_ultimo_elemento(int v[], int n){
   // escreva o seu codigo aqui...
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
   int v1[5] = {1, 2, 4, 5, 3};
   int v2[5] = {1, 2, 3, 4, 5};
   
   posiciona_ultimo_elemento(v1, 5);
   
   int total = 0;
   
   for (int i = 0; i < 5; i++)
      total += testar(v1[i], v2[i]);
      
   return total/5;
}

float caso_de_teste02(){
   int v1[5] = {10, 22, 24, 35, 13};
   int v2[5] = {10, 13, 22, 24, 35};
   
   posiciona_ultimo_elemento(v1, 5);
   
   int total = 0;
   
   for (int i = 0; i < 5; i++)
      total += testar(v1[i], v2[i]);
      
   return total/5;
}

float caso_de_teste03(){
   int v1[5] = {1, 2, 3, 4, 5};
   int v2[5] = {1, 2, 3, 4, 5};
   
   posiciona_ultimo_elemento(v1, 5);
   
   int total = 0;
   
   for (int i = 0; i < 5; i++)
      total += testar(v1[i], v2[i]);
      
   return total/5;
}

float caso_de_teste04(){
   int v1[5] = {2, 3, 4, 5, 1};
   int v2[5] = {1, 2, 3, 4, 5};
   
   posiciona_ultimo_elemento(v1, 5);
   
   int total = 0;
   
   for (int i = 0; i < 5; i++)
      total += testar(v1[i], v2[i]);
      
   return total/5;
}

float caso_de_teste05(){
   int v1[5] = {10, 13, 22, 35, 24};
   int v2[5] = {10, 13, 22, 24, 35};
   
   posiciona_ultimo_elemento(v1, 5);
   
   int total = 0;
   
   for (int i = 0; i < 5; i++)
      total += testar(v1[i], v2[i]);
      
   return total/5;
}

float caso_de_teste06(){
   int v1[5] = {10, 13, 24, 35, 22};
   int v2[5] = {10, 13, 22, 24, 35};
   
   posiciona_ultimo_elemento(v1, 5);
   
   int total = 0;
   
   for (int i = 0; i < 5; i++)
      total += testar(v1[i], v2[i]);
      
   return total/5;
}

float caso_de_teste07(){
   int v1[5] = {13, 22, 24, 35, 10};
   int v2[5] = {10, 13, 22, 24, 35};
   
   posiciona_ultimo_elemento(v1, 5);
   
   int total = 0;
   
   for (int i = 0; i < 5; i++)
      total += testar(v1[i], v2[i]);
      
   return total/5;
}

float caso_de_teste08(){
   int v1[5] = {1, 3, 4, 5, 2};
   int v2[5] = {1, 2, 3, 4, 5};
   
   posiciona_ultimo_elemento(v1, 5);
   
   int total = 0;
   
   for (int i = 0; i < 5; i++)
      total += testar(v1[i], v2[i]);
      
   return total/5;
}

float caso_de_teste09(){
   int v1[5] = {12, 23, 34, 45, 56};
   int v2[5] = {12, 23, 34, 45, 56};
   
   posiciona_ultimo_elemento(v1, 5);
   
   int total = 0;
   
   for (int i = 0; i < 5; i++)
      total += testar(v1[i], v2[i]);
      
   return total/5;
}

float caso_de_teste10(){
   int v1[5] = {23, 34, 45, 56, 12};
   int v2[5] = {12, 23, 34, 45, 56};
   
   posiciona_ultimo_elemento(v1, 5);
   
   int total = 0;
   
   for (int i = 0; i < 5; i++)
      total += testar(v1[i], v2[i]);
      
   return total/5;
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

   printf("exercicio 01\n");
   printf("sua nota foi: %.2f\n", r/10.0);
   return 0;
}
