#include <stdio.h>

void marca_square_inches(int m[1000][1000], int i, int j){
     int wide = 0, tall = 0;
     int u, v, mark;
     mark = m[i][j];
     
     for (u = i; m[u][j] == mark; u++) tall++;
     for (v = j; m[i][v] == mark; v++) wide++;

     for (u = 0; u < tall; u++)
        for (v = 0; v < wide; v++)
            m[i + u][j + v] = 0;

}

void mostrar(int m[1000][1000]){
   int i, j;

   for (i = 0; i < 1000; i++)
   {
      for (j = 0; j < 1000; j++) {
         if (m[i][j] == 0) printf(".");
         else printf("%d", m[i][j]);
      }
      printf("\n");
   }

}

int main(){

    int id, left_edge, top_edge, wide, tall;

    int m[1000][1000] = {0};
    int i, j, mark = -1;
    int square_inches = 0, u, v, tem_square;

    while (scanf("#%d @ %d,%d: %dx%d\n", &id, &left_edge, &top_edge, &wide, &tall) != EOF) {
        // printf ("#%d @ %d,%d: %dx%d\n", id, left_edge, top_edge, wide, tall);
        tem_square = 0;
        for (i = 0; i < wide; i++)
           for (j = 0; j < tall; j++)
                   m[left_edge + i][top_edge + j] += 1;
    }

 
    for (i = 0; i < 1000; i++) {
       for (j = 0; j < 1000; j++){
           if (m[i][j] > 1){
               square_inches++; 
           } 
       }
    }
    
    

    printf("Answer: %d\n", square_inches);
     
    return 0;
}
