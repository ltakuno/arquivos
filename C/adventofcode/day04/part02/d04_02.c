#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX 300
#define MAXL 1100

int cmpfunc (const void *a, const void *b){
    return strcmp( (char *)a, (char *)b);
}
int main(){


   int ano, mes, dia, hora, min;
   int ID = 0;
   char s[MAX];
   int asleep[3500] = {0};
   int minutos[3500][60] = {0};
   int total_dormindo = 0;
   int maior_ID_dormindo, maior_minuto, maior_vezes;
   int inicio, fim;
   int total_input = 0;

   char input[1100][MAX];
   int i = 0;
    
    while (fgets(s, MAX, stdin) != NULL) {
        strcpy(input[i], s);
        i++;
        total_input++;
    }
 
    qsort(input, total_input, MAX * sizeof(char), cmpfunc);   

    for (i = 0; i < total_input; i++){
        strcpy(s, input[i]);
        sscanf(s, "[%d-%d-%d %d:%d]", &ano, &mes, &dia, &hora, &min);
        //printf("[%02d-%02d-%02d %02d:%02d] ", ano, mes, dia, hora, min);
        //printf("%s ", s+19);

        if (*(s+19) == 'G'){
           printf("%s", s);
           if (asleep[ID] > total_dormindo) {
              total_dormindo = asleep[ID];
              maior_ID_dormindo = ID;
           }
       
           sscanf(s+19, "Guard #%d", &ID);
           inicio = 0;
        } 
        else if (*(s+19) == 'f'){
           inicio = min;
        }
        else if (*(s+19) == 'w'  && inicio > 0){

           fim = min;
           asleep[ID] += fim - inicio;
           for (int i = inicio; i < fim; i++)
                minutos[ID][i] += 1;

           inicio = 0;
        }

    }

    if (asleep[ID] > total_dormindo) {
       total_dormindo = asleep[ID];
       maior_ID_dormindo = ID;
    }
 

  printf("ID : %d, total de minutos: %d\n", maior_ID_dormindo, total_dormindo);
   maior_vezes = 0;
   maior_minuto = 0;
   for (int m = 0; m < 60; m++){
      if (minutos[maior_ID_dormindo][m] > maior_vezes) {
         maior_vezes = minutos[maior_ID_dormindo][m];
         maior_minuto = m;
      } 
      printf("%d " , minutos[maior_ID_dormindo][m]);
   } 

   printf("\nMinuto que o guard dormiu mais: %d\n", maior_minuto); 
   printf("Answer :%d\n", maior_ID_dormindo * maior_minuto);

// ------------------------------- part 02 -------------------------
   int maior_id=0, maior_m=0;
   for (int id = 0; id < 3500; id++) {
      if (asleep[id] > 0) {
         for (int m = 0; m < 60; m++){
            if (minutos[id][m] > minutos[maior_id][maior_m]){
               maior_id = id;
               maior_m = m;
            }
         }
      }
   }
      

   printf("Answer 2: %d * %d = %d\n" , maior_id, maior_m, maior_id * maior_m);

   return 0;
}

