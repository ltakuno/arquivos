//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex09.c
//    Importante: nao altere o nome do arquivo.
//[]--------------------------------------------------------------[]
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

#define btoa(x) x ? "true" : "false" 

 
//[]-------------------------------------------------------------[]
//   Função: troca
//   Entrada: vetor v, e inteiros i e j. 
//            
//   Saída:  trocar o valor da posicao i pela posição j. 
//   
//   Exemplo:  entrada: v = {4, 3, 1}  i = 0, j = 2
//             saida  : v = {1, 3, 4} 
//[]-------------------------------------------------------------[]
void troca(int v[], int i, int j){
   // escreva o seu codigo aqui
} 

 
//[]-------------------------------------------------------------[]
//   Função: bubble_sort
//   Entrada: vetor de tamanho n que armazena números inteiros. 
//   Saída: o vetor ordenado  
//   Ex.:
//       entrada: {9, 8, 4, 6, 3}
//       saída:   {3, 4, 6, 8, 9}
//
//    algoritmo bubble_sort: 
//        1. Percorra o vetor comparando elementos adjacentes (dois a dois).
//        2. Troque as posições de elementos se eles estiverem fora de ordem.
//        3. Repita os passos 1 e 2 acima com os primeiros n-1 itens,
//           depois com os primeiros n-2 itens, até que reste apenas um item.
//[]-------------------------------------------------------------[]
void bubble_sort(int v[], int n){
   // escreva o seu codigo aqui
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
   int v1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   int total = 0;
   
   troca(v1, 0, 1);
   total += testar(v1[0], 2);
   total += testar(v1[1], 1);

   troca(v1, 2, 4);
   total += testar(v1[2], 5);
   total += testar(v1[4], 3);

   troca(v1, 3, 5);
   total += testar(v1[3], 6);
   total += testar(v1[5], 4);

   troca(v1, 8, 9);
   total += testar(v1[8], 10);
   total += testar(v1[9], 9);

   return total/8;
}


float caso_de_teste02(){
   int v1[5] = {9, 8, 4, 6, 3};
   int v2[5] = {3, 4, 6, 8, 9};
   bubble_sort(v1, 5);
   
   int total = 0;
   
   for (int i = 0; i < 5; i++)
      total += testar(v1[i], v2[i]);
      
   return total/5;
}

float caso_de_teste03(){
   int v1[5] = {4, 9, 8, 3, 6};
   int v2[5] = {3, 4, 6, 8, 9};
   bubble_sort(v1, 5);
   
   int total = 0;
   
   for (int i = 0; i < 5; i++)
      total += testar(v1[i], v2[i]);
      
   return total/5;
}

float caso_de_teste04(){
   int v1[10] = {12, 54, 16, 22, 56, 98, 27, 43,  5, 67};
   int v2[10] = { 5, 12, 16, 22, 27, 43, 54, 56, 67, 98};
                
   bubble_sort(v1, 10);
   
   int total = 0;
   
   for (int i = 0; i < 10; i++)
      total += testar(v1[i], v2[i]);
      
   return total/10;
}

float caso_de_teste05(){
   int v1[10] = {6, 0, 8, 4, 9, 3, 7, 2, 5, 1};
   int v2[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  
   bubble_sort(v1, 10);
   
   int total = 0;
   
   for (int i = 0; i < 10; i++)
      total += testar(v1[i], v2[i]);
      
   return total/10;
}

float caso_de_teste06(){
   int v1[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2,  1};
   int v2[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  
   bubble_sort(v1, 10);
   
   int total = 0;
   
   for (int i = 0; i < 10; i++)
      total += testar(v1[i], v2[i]);
      
   return total/10;
}

float caso_de_teste07(){
   int v1[10] = {1, 4, 7, 9, 2, 6, 5, 3, 0, 8};
   int v2[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  
   bubble_sort(v1, 10);
   
   int total = 0;
   
   for (int i = 0; i < 10; i++)
      total += testar(v1[i], v2[i]);
      
   return total/10;
}

float caso_de_teste08(){
   int v1[10] = {1, 2, 4, 8, 7, 5, 3, 9, 6, 0};
   int v2[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  
   bubble_sort(v1, 10);
   
   int total = 0;
   
   for (int i = 0; i < 10; i++)
      total += testar(v1[i], v2[i]);
      
   return total/10;
}

float caso_de_teste09(){
   int v1[10] = {9, 18,  7, 16,  5, 14,  3, 12,  1, 10};
   int v2[10] = {1,  3,  5,  7,  9, 10, 12, 14, 16, 18};
  
   bubble_sort(v1, 10);
   
   int total = 0;
   
   for (int i = 0; i < 10; i++)
      total += testar(v1[i], v2[i]);
      
   return total/10;
}

float caso_de_teste10(){
   int v1[10] = {5, 12, 14, 4, 3, 15, 10, 7, 6, 8};
   int v2[10] = {3,  4, 5, 6, 7, 8, 10, 12, 14, 15};
  
   bubble_sort(v1, 10);
   
   int total = 0;
   
   for (int i = 0; i < 10; i++)
      total += testar(v1[i], v2[i]);
      
   return total/10;
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

   printf("exercicio 09\n");
   printf("sua nota foi: %.2f\n", r/10.0);
   return 0;
}
