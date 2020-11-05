//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex02.c
//    Importante: nao altere o nome do arquivo.
//[]--------------------------------------------------------------[]
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

#define btoa(x) x ? "true" : "false" 


//[]-------------------------------------------------------------[]
//   Função: empurra_para_fim
//   Entrada: vetor de tamanho n que armazena números inteiros. 
//            Um número inteiro x.
//            
//   Saída:   Empurre todo número igual a x para o fim do vetor
//            
//            
//  
//   Ex.:
//       entrada: {1, 2, 4, 5, 3}, x = 2
//       saída:   {1, 4, 5, 3, 2}
//       
//       entrada: {1, 2, 4, 4, 3, 5, 4, 7, 6, 8}, x = 4
//       saída:   {1, 2, 3, 5, 7, 6, 8, 4, 4, 4}
//[]-------------------------------------------------------------[]
void empurra_para_fim(int v[], int n, int x){
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
   int v2[5] = {1, 4, 5, 3, 2};
  
   empurra_para_fim(v1, 5, 2);
   
   int total = 0;
   
   for (int i = 0; i < 5; i++)
      total += testar(v1[i], v2[i]);
      
   return total/5;
}

float caso_de_teste02(){
   int v1[10] = {1, 2, 4, 4, 3, 5, 4, 7, 6, 8};
   int v2[10] = {1, 2, 3, 5, 7, 6, 8, 4, 4, 4};
  
   empurra_para_fim(v1, 10, 4);
   
   int total = 0;
   
   for (int i = 0; i < 10; i++)
      total += testar(v1[i], v2[i]);
      
   return total/10;
}

float caso_de_teste03(){
   int v1[5] = {1, 2, 4, 5, 3};
   int v2[5] = {2, 4, 5, 3, 1};
  
   empurra_para_fim(v1, 5, 1);
   
   int total = 0;
   
   for (int i = 0; i < 5; i++)
      total += testar(v1[i], v2[i]);
      
   return total/5;
}

float caso_de_teste04(){
   int v1[10] = {1, 1, 2, 2, 3, 3, 2, 4, 5, 7};
   int v2[10] = {1, 1, 3, 3, 4, 5, 7, 2, 2, 2};
  
   empurra_para_fim(v1, 10, 2);
   
   int total = 0;
   
   for (int i = 0; i < 10; i++)
      total += testar(v1[i], v2[i]);
      
   return total/10;
}

float caso_de_teste05(){
   int v1[10] = {1, 1, 1, 2, 3, 3, 2, 1, 7, 9};
   int v2[10] = {2, 3, 3, 2, 7, 9, 1, 1, 1, 1};
  
   empurra_para_fim(v1, 10, 1);
   
   int total = 0;
   
   for (int i = 0; i < 10; i++)
      total += testar(v1[i], v2[i]);
      
   return total/10;
}

float caso_de_teste06(){
   int v1[10] = {1, 1, 1, 2, 3, 3, 2, 1, 7, 9};
   int v2[10] = {1, 1, 1, 2, 3, 3, 2, 1, 7, 9};
  
   empurra_para_fim(v1, 10, 9);
   
   int total = 0;
   
   for (int i = 0; i < 10; i++)
      total += testar(v1[i], v2[i]);
      
   return total/10;
}

float caso_de_teste07(){
   int v1[10] = {1, 1, 1, 2, 3, 3, 2, 1, 7, 9};
   int v2[10] = {1, 1, 1, 2, 2, 1, 7, 9, 3, 3};
  
   empurra_para_fim(v1, 10, 3);
   
   int total = 0;
   
   for (int i = 0; i < 10; i++)
      total += testar(v1[i], v2[i]);
      
   return total/10;
}

float caso_de_teste08(){
   int v1[10] = {1, 2, 1, 2, 1, 2, 1, 2, 1, 2};
   int v2[10] = {1, 1, 1, 1, 1, 2, 2, 2, 2, 2};
  
   empurra_para_fim(v1, 10, 2);
   
   int total = 0;
   
   for (int i = 0; i < 10; i++)
      total += testar(v1[i], v2[i]);
      
   return total/10;
}

float caso_de_teste09(){
   int v1[10] = {1, 2, 1, 2, 1, 2, 1, 2, 1, 2};
   int v2[10] = {2, 2, 2, 2, 2, 1, 1, 1, 1, 1};
  
   empurra_para_fim(v1, 10, 1);
   
   int total = 0;
   
   for (int i = 0; i < 10; i++)
      total += testar(v1[i], v2[i]);
      
   return total/10;
}

float caso_de_teste10(){
   int v1[10] = {1, 2, 1, 2, 1, 2, 1, 2, 1, 2};
   int v2[10] = {1, 2, 1, 2, 1, 2, 1, 2, 1, 2};
  
   empurra_para_fim(v1, 10, 10);
   
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

   printf("exercicio 02\n");
   printf("sua nota foi: %.2f\n", r/10.0);
   return 0;
}
