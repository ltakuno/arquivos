//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex07.c
//    Importante: nao altere o nome do arquivo.
//[]--------------------------------------------------------------[]
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

#define btoa(x) x ? "true" : "false" 

void mostra(int v[], int n){
   for(int i=0; i < n; i++){
      printf("%d ", v[i]);
   }
   printf("\n");
}
 
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
   int aux = v[i];
   v[i] = v[j];
   v[j] = aux;
} 

//[]-------------------------------------------------------------[]
//   Função: indice_maior
//   Entrada: vetor v e o seu tamanho n
//            
//   Saída:  devolve o índice do menor elemento
//   
//   Exemplo:  entrada: v = {4, 3, 1}  n = 3
//             saida  : retorna 0, pois v[0] = 4 
//[]-------------------------------------------------------------[]
int indice_maior(int v[], int n){
   int maior = v[0];
   int resultado = 0;
   for (int i = 0; i < n; i++){
      if (v[i] > maior) {
         resultado = i;
         maior = v[i];
      }
   }
   return resultado;
} 

//[]-------------------------------------------------------------[]
//   Função: indice_menor2
//   Entrada: vetor v e o seu tamanho n e um número de inicio 
//            
//   Saída:  devolve o índice do menor elemento do início pra frente
//   
//   Exemplo:  entrada: v = {1, 4, 3}  n = 3, inicio = 0
//             saida  : retorna 0, pois v[0] = 1 
//
//             entrada: v = {1, 4, 3}  n = 3, inicio = 1
//             saida  : retorna 2, pois v[2] = 3 
//[]-------------------------------------------------------------[]
int indice_maior_no_intervalo(int v[], int n, int inicio, int fim){
   int maior = v[inicio];
   int resultado = inicio;
   for (int i = inicio+1; i <= fim; i++){
      if (v[i] > maior) {
         resultado = i;
         maior = v[i];
      }
   }
   return resultado;
} 

 
//[]-------------------------------------------------------------[]
//   Função: selectionSort
//       Selection sort é o algoritmo que percorre a lista, 
//       nesta versão ache o maior elemento e coloque na posicao n-1. 
//       Depois, percorra a lista novamente, buscando o maior elemento no
//       intervalo de 0 a n-2, acha o maior elemento e o coloca na posicao n-2, 
//       e vai fazendo isso até ordenar a lista
//
//
//   Entrada: vetor de tamanho n que armazena números inteiros. 
//            
//   Saída: o vetor ordenado  
//   Ex.:
//       entrada: {9, 8, 4, 6, 3}
//       saída:   {3, 4, 6, 8, 9}
//       
//[]-------------------------------------------------------------[]
void selectionSort(int v[], int n){
   int j;
   for (int i = 0; i < n; i++){
       j = indice_maior_no_intervalo(v, n, 0, n-1-i);
       troca(v, n-1-i, j);
   } 
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
   int v1[10] = {6, 2, 7, 3, 5, 9, 4, 1, 8, 0};
   int total = 0;
   int id = indice_maior(v1, 10);
   total += testar(id, 5);
   
   int v2[10] = {6, 2, 7, 0, 5, 4, 1, 8, 9, 3};
   id = indice_maior(v2, 10);
   total += testar(id, 8);

   int v3[10] = {6, 9, 2, 7, 5, 0, 4, 1, 8, 3};
   id = indice_maior(v3, 10);
   total += testar(id, 1);
   
   return total/3;   
}

float caso_de_teste03(){
   int v1[15] = {3, 44, 38, 5, 47, 15, 36, 26, 27, 2, 46, 4, 19, 50, 48};
   int total = 0;
   int id = indice_maior_no_intervalo(v1, 15, 0, 14);
   total += testar(id, 13);
   
   id = indice_maior_no_intervalo(v1, 15, 3, 10);
   total += testar(id, 4);

   id = indice_maior_no_intervalo(v1, 15, 0, 3);
   total += testar(id, 1);
   
   return total/3; 
}

float caso_de_teste04(){
   int v1[10] = {12, 54, 16, 22, 56, 98, 27, 43,  5, 67};
   int v2[10] = { 5, 12, 16, 22, 27, 43, 54, 56, 67, 98};
                
   selectionSort(v1, 10);
   
   int total = 0;
   
   for (int i = 0; i < 10; i++)
      total += testar(v1[i], v2[i]);
      
   return total/10;
}

float caso_de_teste05(){
   int v1[10] = {6, 0, 8, 4, 9, 3, 7, 2, 5, 1};
   int v2[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  
   selectionSort(v1, 10);
   
   int total = 0;
   
   for (int i = 0; i < 10; i++)
      total += testar(v1[i], v2[i]);
      
   return total/10;
}

float caso_de_teste06(){
   int v1[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2,  1};
   int v2[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  
   selectionSort(v1, 10);
   
   int total = 0;
   
   for (int i = 0; i < 10; i++)
      total += testar(v1[i], v2[i]);
      
   return total/10;
}

float caso_de_teste07(){
   int v1[10] = {1, 4, 7, 9, 2, 6, 5, 3, 0, 8};
   int v2[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  
   selectionSort(v1, 10);
   
   int total = 0;
   
   for (int i = 0; i < 10; i++)
      total += testar(v1[i], v2[i]);
      
   return total/10;
}

float caso_de_teste08(){
   int v1[10] = {1, 2, 4, 8, 7, 5, 3, 9, 6, 0};
   int v2[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  
   selectionSort(v1, 10);
   
   int total = 0;
   
   for (int i = 0; i < 10; i++)
      total += testar(v1[i], v2[i]);
      
   return total/10;
}

float caso_de_teste09(){
   int v1[10] = {9, 18,  7, 16,  5, 14,  3, 12,  1, 10};
   int v2[10] = {1,  3,  5,  7,  9, 10, 12, 14, 16, 18};
  
   selectionSort(v1, 10);
   
   int total = 0;
   
   for (int i = 0; i < 10; i++)
      total += testar(v1[i], v2[i]);
      
   return total/10;
}

float caso_de_teste10(){
   int v1[10] = {5, 12, 14, 4, 3, 15, 10, 7, 6, 8};
   int v2[10] = {3,  4, 5, 6, 7, 8, 10, 12, 14, 15};
  
   selectionSort(v1, 10);
   
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

   printf("exercicio 07\n");
   printf("sua nota foi: %.2f\n", r/10.0);
   return 0;
}
