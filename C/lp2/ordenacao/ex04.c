//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex04.c
//    Importante: nao altere o nome do arquivo.
//[]--------------------------------------------------------------[]
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

#define btoa(x) x ? "true" : "false" 



//[]-------------------------------------------------------------[]
//   Função: empurra_pares_inicio_impares_fim
//   Entrada: vetor de tamanho n que armazena números inteiros. 
//            
//   Saída:   Empurre todo número par para o inicio do vetor e 
//            todo número ímpar para o fim. 
//   Ex.:
//       entrada: {1, 2, 4, 5, 3}
//       saída:   {2, 4, 1, 5, 3}
//       
//       entrada: {1, 2, 4, 4, 3, 5, 4, 7, 6, 8}
//       saída:   {2, 4, 4, 4, 6, 8, 1, 3, 5, 7}
//[]-------------------------------------------------------------[]
void empurra_pares_inicio_impares_fim(int v[], int n){
  // escreva o seu codigo aqui ...
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
   int v2[5] = {2, 4, 1, 5, 3};
  
   empurra_pares_inicio_impares_fim(v1, 5);
   
   int total = 0;
   
   for (int i = 0; i < 5; i++)
      total += testar(v1[i], v2[i]);
      
   return total/5;
}

float caso_de_teste02(){
   int v1[10] = {1, 2, 4, 4, 3, 5, 4, 7, 6, 8};
   int v2[10] = {2, 4, 4, 4, 6, 8, 1, 3, 5, 7};
  
   empurra_pares_inicio_impares_fim(v1, 10);
   
   int total = 0;
   
   for (int i = 0; i < 10; i++)
      total += testar(v1[i], v2[i]);
      
   return total/10;
}

float caso_de_teste03(){
   int v1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   int v2[10] = {2, 4, 6, 8, 10, 1, 3, 5, 7, 9};
  
   empurra_pares_inicio_impares_fim(v1, 10);
   
   int total = 0;
   
   for (int i = 0; i < 10; i++)
      total += testar(v1[i], v2[i]);
      
   return total/10;
}

float caso_de_teste04(){
   int v1[10] = {12, 54, 16, 27, 43, 22, 5, 56, 67, 98};
   int v2[10] = {12, 54, 16, 22, 56, 98, 27, 43, 5, 67};
                
   empurra_pares_inicio_impares_fim(v1, 10);
   
   int total = 0;
   
   for (int i = 0; i < 10; i++)
      total += testar(v1[i], v2[i]);
      
   return total/10;
}

float caso_de_teste05(){
   int v1[10] = {1, 1, 1, 1, 1, 2, 2, 2, 2, 2};
   int v2[10] = {2, 2, 2, 2, 2, 1, 1, 1, 1, 1};
  
   empurra_pares_inicio_impares_fim(v1, 10);
   
   int total = 0;
   
   for (int i = 0; i < 10; i++)
      total += testar(v1[i], v2[i]);
      
   return total/10;
}

float caso_de_teste06(){
   int v1[10] = {2, 2, 2, 2, 2, 1, 1, 1, 1, 1};
   int v2[10] = {2, 2, 2, 2, 2, 1, 1, 1, 1, 1};
  
   empurra_pares_inicio_impares_fim(v1, 10);
   
   int total = 0;
   
   for (int i = 0; i < 10; i++)
      total += testar(v1[i], v2[i]);
      
   return total/10;
}

float caso_de_teste07(){
   int v1[10] = {1, 2, 2, 1, 1, 2, 2, 1, 1, 2};
   int v2[10] = {2, 2, 2, 2, 2, 1, 1, 1, 1, 1};
  
   empurra_pares_inicio_impares_fim(v1, 10);
   
   int total = 0;
   
   for (int i = 0; i < 10; i++)
      total += testar(v1[i], v2[i]);
      
   return total/10;
}

float caso_de_teste08(){
   int v1[10] = {1, 2, 4, 8, 7, 5, 4, 7, 6, 8};
   int v2[10] = {2, 4, 8, 4, 6, 8, 1, 7, 5, 7};
  
   empurra_pares_inicio_impares_fim(v1, 10);
   
   int total = 0;
   
   for (int i = 0; i < 10; i++)
      total += testar(v1[i], v2[i]);
      
   return total/10;
}

float caso_de_teste09(){
   int v1[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
   int v2[10] = {8, 6, 4, 2, 0, 9, 7, 5, 3, 1};
  
   empurra_pares_inicio_impares_fim(v1, 10);
   
   int total = 0;
   
   for (int i = 0; i < 10; i++)
      total += testar(v1[i], v2[i]);
      
   return total/10;
}

float caso_de_teste10(){
   int v1[10] = {5, 12, 14, 4, 3, 5, 4, 7, 6, 8};
   int v2[10] = {12, 14, 4, 4, 6, 8, 5, 3, 5, 7};
  
   empurra_pares_inicio_impares_fim(v1, 10);
   
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

   printf("exercicio 04\n");
   printf("sua nota foi: %.2f\n", r/10.0);
   return 0;
}
