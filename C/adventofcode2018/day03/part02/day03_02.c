#include <stdio.h>

struct {
   int    id; 
   int    left_edge; 
   int    top_edge; 
   int    wide; 
   int    tall;
} input[1500];


int main(){

    int id, left_edge, top_edge, wide, tall;

    int m[1000][1000] = {0};
    int i, j, k, mark = -1, n;
    int square_inches = 0, u, v, ok;

    k = 0;
    n = 0;
    while (scanf("#%d @ %d,%d: %dx%d\n", &id, &left_edge, &top_edge, &wide, &tall) != EOF) {
        input[k].id = id;
        input[k].left_edge = left_edge;
        input[k].top_edge = top_edge;
        input[k].wide = wide;
        input[k].tall = tall;
        k++;
        n++;
        for (i = 0; i < wide; i++)
           for (j = 0; j < tall; j++)
                   m[left_edge + i][top_edge + j] += 1;
    }

    for (k = 0; k < n; k++){
       ok = 1;
       for (i = 0; i < input[k].wide; i++)
           for (j = 0; j < input[k].tall; j++)
              if (m[input[k].left_edge + i][input[k].top_edge + j] > 1)
                   ok = 0;
       if (ok) printf("Id (part 02):  %d\n", input[k].id); 
    }
       
    
 
    for (i = 0; i < 1000; i++) {
       for (j = 0; j < 1000; j++){
           if (m[i][j] > 1){
               square_inches++; 
           } 
       }
    }
    
    

    printf("Square inches (part 01): %d\n", square_inches);
     
    return 0;
}
