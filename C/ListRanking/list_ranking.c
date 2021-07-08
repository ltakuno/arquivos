#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define log2(n) log(n)/log(2)


void mostrar(int v[], int n){
    for (int i = 0 ; i < n; i++){
       printf("%2d ", v[i]);
    }

    printf("\n");
}

void mostrar_sucessores(int s[], int n){
    printf("s[i]:        ");
    for (int i = 0 ; i < n; i++){
       printf("%2d ", s[i]);
    }

    printf("\n");

    printf("s[s[i]]:     ");
    for (int i = 0 ; i < n; i++){
       printf("%2d ", s[s[i]]);
    }

    printf("\n");

    printf("s[s[s[i]]]:  ");
    for (int i = 0 ; i < n; i++){
       printf("%2d ", s[s[s[i]]]);
    }

    printf("\n");
}

void mostrar_rotulos(int s[], int l[], int n){
   printf("l(s[i]):      ");

   for (int i = 0; i < n; i++){
      printf("%2d ", l[s[i]]);
   }

   printf("\n");

   printf("l(s[s[i]])    ");

   for (int i = 0; i < n; i++){
      printf("%2d ", l[s[s[i]]]);
   }

   printf("\n");

   printf("l(s[s[s[i]]]) ");

   for (int i = 0; i < n; i++){
      printf("%2d ", l[s[s[s[i]]]]);
   }

   printf("\n");
}

void embaralhar(int v[], int n)
{
    if (n > 1) 
    {
        int i;
        for (i = 0; i < n - 1; i++) 
        {
          size_t j = i + rand() / (RAND_MAX / (n - i) + 1);
          int t = v[j];
          v[j] = v[i];
          v[i] = t;
        }
    }
}

int main(){
    int no[32] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 
	          16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31};
  //  embaralhar(no, 32);
  //  mostrar(no, 32);

//   25 13 25  0 29 10 14  3  6 21 20 24 19 22 31 30  7 27 12 16  5 23  9 15  2 17 18 11  8  4 28  1

    int s[32] = {29, 1, 17, 6, 28, 23, 21, 27, 4, 15, 14, 8, 16, 25, 3, 2, 5, 18, 
	         11, 22, 24, 20, 31, 9, 19, 0, 13, 12, 1, 10, 7, 30};    

    
    int n = 32;
    int p = 4; // processadores

    int l[32] = {0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,2,3,3,3,3,3,3,3,3};

    int sel[32] = {0};

    //mostrar_sucessores(s, n);
    //mostrar_rotulos(s, l, n);

    // algoritmo p²-ruling set
    // entrada: (1) Uma lista ligada L representada pelo vetor s onde s[i] é o sucessor de i na
    //          lista L. (2) p processadores p0, p1, ..., p_{p-1} e LC uma copia de L.
    // saída:  Um subconjunto R \subset L de nós selecionados e |R| = O(n/p)
    

    // 1. algoritmo p-ruling set
    // passo 1.1. Marcar todos os nós como não selecionado
    for (int i = 0; i < n; i++){
       sel[i] = 0;
    }

    // passo 1.2: selecionar maximos locais
    for (int i = 0; i < n; i++){
       if (l[i] < l[s[i]] && l[s[i]] > l[s[s[i]]])
	       sel[s[i]] = 1;

       if (l[i] == l[s[i]]) {
          if (l[s[i]] == l[s[s[i]]])
		  sel[s[i]] = 1;
	  else if(l[s[i]] > l[s[s[i]]])
		  sel[i] = 1;
       }
    }

    // passo 2: diminuir o número de elementos selecionados
    for (int k = 1; k <= log2(p); k++){

       // passo 2.1	    
       for (int i = 0; i < n; i++)	    
          if (sel[s[i]] == 0)
	      s[i] = s[s[i]];
    
       // passo 2.2 
       for (int i = 0; i < n; i++){
          if ((sel[i] && sel[s[i]] && sel[s[s[i]]]) &&
	     !(l[i] < l[s[i]] && l[s[i]] > l[s[s[i]]]) &&
	      (l[s[i]] != l[s[s[i]]])){
	     sel[s[i]] = 0;
          }
       }

       // passo 2.3 - marque todo segundo elemento como não selecionado
       for(int i = 0; i < n; i++)
	   if (l[i] == l[s[i]] && sel[i] && sel[s[i]])
	       sel[s[i]] = 0;  	   
    }

    // passo 3: selecionar o último elemento ???


    printf("sel   :");
    mostrar(sel, n);

    return 0;
}
