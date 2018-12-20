#include<stdio.h>
#include<stdlib.h>

#define MAX 500

typedef struct No {
   int valor;
   struct No *prox;
   struct No *ant;
} No;

No *novoNo(int valor){
   No *novo = (No *) malloc(sizeof(No));
   novo->valor = valor;
   novo->prox = novo;
   novo->ant = novo;
   return novo;
}

void insere(No **atual, int bola) {
   No *novo = novoNo(bola);

   novo->prox = (*atual)->prox->prox;
   novo->ant = (*atual)->prox;
   novo->ant->prox = novo;
   novo->prox->ant = novo;
   *atual = novo;
}

void mostraLista(No *inicio, No *atual){
   No *p = inicio;
   
   
   printf((p == atual)? "(%d) ": "%d ", p->valor);
   p = p->prox;
   while (p != inicio) {
      printf((p == atual)? "(%d) ": "%d ", p->valor);
      p = p->prox;
   }

   printf("\n");
}

void removeSetimaAnterior(No **atual, int *jogador) { 
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

   int jogadores[MAX] = {0}, bolas;
   int numJogadores;

   No *inicio = novoNo(0);
   No *atual = inicio;
   int jogador = 0;
   int maior = 0;

   while (scanf("%d players; last marble is worth %d points", &numJogadores, &bolas) != EOF){
      for (int bola = 1; bola <= bolas; bola++){
         if (bola % 23 != 0) {
            insere(&atual, bola);
         } else {
            jogadores[jogador] += bola;
            removeSetimaAnterior(&atual, &jogadores[jogador]);
            if (jogadores[jogador] > maior) 
               maior = jogadores[jogador];
         }
         //mostraLista(inicio, atual);
         jogador = (jogador + 1) % numJogadores; 
      }

      printf("part01: %d\n", maior);
      
   }

   return 0;
}
