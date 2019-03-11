#include<stdio.h>


int main(){

    int nvertices = 9;
    int mat_adj[9][9] = {{0,0,0,0,0,0,0,0,1},
                         {0,0,1,0,0,0,0,0,0},
                         {0,1,0,1,0,0,0,0,0},
                         {0,0,1,0,0,0,0,0,0},
                         {0,0,0,0,0,1,0,0,0},
                         {0,0,0,0,1,0,1,0,0},
                         {0,0,0,0,0,1,0,0,0},
                         {0,0,0,0,0,0,0,0,1},
                         {1,0,0,0,0,0,0,1,0}};

    int nprocessadores = 3;
    
    int componente[5];


    int vini, vfim, nvertices_proc, id;

 // vini = id * n/p;
 // vfim = (id + 1) * n/p

    for (i = 0; i < nvertices; i++){
       componente[i] = i;    
    }

    for (i = vini; i < vfim; i++){
       for (j = 0; j < i; j++){
	  // Investiga o vértice i em relação a vértice j
	  investigaVertice(i, j, i);
       }
    }


    int terminou = 0;

    while (!terminou){
       // Espera receber msg de algum dos demais processadores
       recebe(msg);
       
       // todo:  implementar a mensagem ... o envio e recebimento
       if (msg == (NOVO_COMP, v, comp_v) && comp_v < componente[v]){
          componente[v] = comp_v;
       }
    
    
    } 

    return 0;

}
