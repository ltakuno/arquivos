/*
[]---------------------------------------------------------------[]
       Programa: conexo.c
       Descricao: Conectividade em grafos
[]---------------------------------------------------------------[]
*/

#include<stdio.h>
#include<mpi.h>

#define numeroDeTarefas 6 

/*int matrizVizinhanca[8][8] = {
                                {0,1,1,0,0,0,0,0},
                                {1,0,1,1,1,0,0,0},
                                {1,1,0,0,0,0,0,0},
                                {0,1,0,0,0,0,0,0},
                                {0,1,0,0,0,0,0,0},
                                {0,0,0,0,0,0,1,1},
                                {0,0,0,0,0,1,0,1},
                                {0,0,0,0,0,1,1,0},
                             };
*/

int matrizVizinhanca[6][6] =  {
                                 {0,1,1,0,0,0},
                                 {1,0,1,1,1,0},
                                 {1,1,0,0,0,1},
                                 {0,1,0,0,0,0},
                                 {0,1,0,0,0,0},
                                 {0,0,2,0,0,0},
                              };

// int matrizVizinhanca[3][3] = { {0,1,1},{1,0,0},{1,0,0}};
/*[]------------------------------------------------------------------[]
  |       retorna o número de vizinhos da tarefa myRank
  []------------------------------------------------------------------[]*/
int contaNumeroDeVizinhos(int myRank){
   int i;
   int contador = 0;
   for (i = 0; i < numeroDeTarefas; i++){
      if (matrizVizinhanca[myRank][i] == 1)  
         contador++;
   }
   return contador;
}

/*[]------------------------------------------------------------------[]
  |      finaliza 
  []------------------------------------------------------------------[]*/
int finaliza(int contador[], int numeroDeVizinhos, int myRank){
  if (contador[myRank] < numeroDeVizinhos) return 0;
  else  return 1; 
}

/*[]------------------------------------------------------------------[]
  |       programa principal
  []------------------------------------------------------------------[]*/
int main(int argc, char **argv){
   int i, j;
   int numeroDeVizinhos;
   int myRank;
   int source;
   int tag = 50;
   int pai[numeroDeTarefas];
   int contador[numeroDeTarefas];
   int reached[numeroDeTarefas];
   int initiated[numeroDeTarefas];
   int id;
   int origem;
   MPI_Status status;

   // incializacao do MPI
   MPI_Init(&argc, &argv);
   MPI_Comm_rank(MPI_COMM_WORLD, &myRank);
   numeroDeVizinhos = contaNumeroDeVizinhos(myRank);

   // inicializando variáveis
   for (i = 0; i < numeroDeTarefas; i++) {
      pai[i] = -1;
      contador[i] = 0;
      reached[i] = 0;
      initiated[i] = 0;
   }
   if (myRank == 0){
      reached[myRank] = 1;
      initiated[myRank] = 1;

      // enviando minha id para os vizinhos
      for (i=0; i < numeroDeTarefas; i++) {
         if (matrizVizinhanca[myRank][i] == 1){
             MPI_Send(&myRank, 1, MPI_INT, i, tag, MPI_COMM_WORLD);
         }
      }
   } 

   while (!finaliza(contador, numeroDeVizinhos, myRank)) {
      MPI_Recv(&id, 1, MPI_INT, MPI_ANY_SOURCE, tag, MPI_COMM_WORLD, &status);
      origem = status.MPI_SOURCE;
      printf("%d - recebeu id = %d da origem = %d\n", myRank, id, origem);

      if (!initiated[myRank]){
         initiated[myRank]  = 1;
         reached[myRank] = 1;
         for (i = 0; i < numeroDeTarefas; i++)
            if (matrizVizinhanca[myRank][i] == 1)
                 MPI_Send(&myRank, 1, MPI_INT, i, tag, MPI_COMM_WORLD);    
      }

      contador[id]++;
 
      if (reached[id] == 0) {
         reached[id] = 1;
         pai[id] = origem;
         for(j = 0; j < numeroDeTarefas; j++)
            if (matrizVizinhanca[myRank][j] == 1 && j != pai[id]){
                MPI_Send(&id, 1, MPI_INT, j, tag, MPI_COMM_WORLD);
            }    
      }
    
   
      if (contador[id] >= contaNumeroDeVizinhos(id))
         if (pai[id] != -1)
            MPI_Send(&id, 1, MPI_INT, pai[id], tag, MPI_COMM_WORLD);

   }
   // imprimindo resultado
   printf("processo %d: Elementos conectados: ", myRank);
   
   for(i = 0; i < numeroDeTarefas; i++)
      if (contador[i] != 0) printf("%d ", i);
   printf("\n");

   fflush(stdout);
   MPI_Finalize();

   return 0;
}

