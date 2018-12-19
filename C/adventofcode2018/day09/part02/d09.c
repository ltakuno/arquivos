#include<stdio.h>
#include<stdlib.h>

#define MAX 500

typedef struct No {
   long valor;
   struct No *prox;
   struct No *ant;
} No;

No *novoNo(long valor){
   No *novo = (No *) malloc(sizeof(No));
   novo->valor = valor;
   novo->prox = novo;
   novo->ant = novo;
   return novo;
}

void insere(No **atual, long bola) {
   No *novo = novoNo(bola);

   novo->prox = (*atual)->prox->prox;
   novo->ant = (*atual)->prox;
   novo->ant->prox = novo;
   novo->prox->ant = novo;
   *atual = novo;
}

void mostraLista(No *inicio, No *atual){
   No *p = inicio;
   
   
   printf((p == atual)? "(%ld) ": "%ld ", p->valor);
   p = p->prox;
   while (p != inicio) {
      printf((p == atual)? "(%ld) ": "%ld ", p->valor);
      p = p->prox;
   }

   printf("\n");
}

void removeSetimaAnterior(No **atual, unsigned long *jogador) { 
   for (int i = 0; i < 7; i++)
      *atual = (*atual)->ant;

   *jogador = *jogador + (*atual)->valor;

   No *prox = (*atual)->prox;
   No *ant = (*atual)->ant;

   prox->ant = ant;
   ant->prox = prox;
   free(*atual);

   *atual = prox;
}

int main(){
   unsigned long jogadores[MAX] = {0};
   long  bolas;
   int numJogadores;

   No *inicio = novoNo(0);
   No *atual = inicio;
   int jogador = 0;
   unsigned long maior = 0;

   scanf("%d players; last marble is worth %ld points", &numJogadores, &bolas); 
   for (long bola = 1; bola <= bolas * 100; bola++){
      if (bola % 23 != 0) {
         insere(&atual, bola);
      } else {
         jogadores[jogador] += bola;
         removeSetimaAnterior(&atual, &jogadores[jogador]);
         if (jogadores[jogador] > maior) {
            maior = jogadores[jogador];
         }
      }
      //mostraLista(inicio, atual);
      jogador = (jogador + 1) % numJogadores; 
   }
   printf("part02: %lu\n", maior);

   return 0;
}
