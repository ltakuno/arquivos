#include<mpi.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


#define MESTRE 0
#define MSG_LIDER 9999
#define MSG_NOVA_ELEICAO 9998
#define MSG_RESPOSTA_ELEICAO 9997

#define TAG_MSG_LIDER 1
#define TAG_MSG_NOVA_ELEICAO 2
#define TAG_MSG_RESPOSTA_ELEICAO 3

#define TENTATIVAS 100


void obter_prox_ant(int *ant, int *prox, int id, int p);
void envia_msg_lider(int id, int p);
void envia_resposta_eleicao(int id, int id_remoto); 
void inicia_nova_eleicao(int id, int p);

typedef enum {LIDER_ATIVO, EM_ELEICAO} Estado; 

int main(int argc, char *argv[]) {

   int id, p, prox, ant, lider = -1, buf[2], rodadas_de_msgs = 10;
   Estado estado = LIDER_ATIVO;
   int eleito = -1;
   MPI_Status status;

   MPI_Init(&argc,&argv);
   MPI_Comm_size(MPI_COMM_WORLD,&p);
   MPI_Comm_rank(MPI_COMM_WORLD,&id);

   while(rodadas_de_msgs) {
      if (id == lider) {
         envia_msg_lider(id, p);
     } else {
         int flag = 0, contador = 0;
    
         // verifica se há mensagem 
         while (!flag && contador < TENTATIVAS){
            MPI_Iprobe(MPI_ANY_SOURCE, MPI_ANY_TAG, MPI_COMM_WORLD, &flag, &status);
	    contador++;
         }

         if (flag){ // recebeu alguma mensagem
             MPI_Recv(buf, 2, MPI_INT, MPI_ANY_SOURCE, MPI_ANY_TAG, MPI_COMM_WORLD, &status);
             if (status.MPI_TAG == TAG_MSG_LIDER){
		lider = buf[0];     
	        printf("%d - recebi mensagem do lider %d\n", id, lider);
             } 
	     
	     if (status.MPI_TAG == TAG_MSG_NOVA_ELEICAO){
	        int id_remoto = buf[0];

		if (id > id_remoto){
		   envia_resposta_eleicao(id, id_remoto);
		   eleito = id;
		} else { 
		   eleito  = id_remoto;
		}
	     }
         } else if (contador == TENTATIVAS) {
		  //printf("%d inicia uma nova eleição, estado %d\n", id, estado);

  		 if (estado == LIDER_ATIVO){
                  inicia_nova_eleicao(id, p);
                  estado = EM_ELEICAO;
	       } else {
                  lider = eleito;
		  estado = LIDER_ATIVO;
               }

         }

      }
      rodadas_de_msgs--;
   }
   MPI_Finalize();
   return 0;
}


void envia_msg_lider(int id, int p) { 
   int buf[2];

   buf[0] = id;
   buf[1] = MSG_LIDER;
   for (int i = 0; i < p; i++) 
      if (i != id){
         MPI_Send(buf, 2, MPI_INT, i, TAG_MSG_LIDER, MPI_COMM_WORLD);
      }
}

void envia_resposta_eleicao(int id, int id_remoto) {
   int buf[2];
   buf[0] = id;
   buf[1] = MSG_RESPOSTA_ELEICAO;
   MPI_Send(buf, 2, MPI_INT, id_remoto, TAG_MSG_RESPOSTA_ELEICAO, MPI_COMM_WORLD);
}

void inicia_nova_eleicao(int id, int p){
   int buf[2];
   MPI_Status status;
   buf[0] = id;
   buf[1] = MSG_NOVA_ELEICAO;
   for (int i = p-1; i > id+1; i--) {
      MPI_Send(buf, 2, MPI_INT, i, TAG_MSG_NOVA_ELEICAO,MPI_COMM_WORLD);
   }

}

