#include<stdio.h>

int main(){

    int v[] = {5,15,34,54,14,2,52,72 };

    int *p = &v[1];
    int *q = &v[5];

    printf("%d\n", (q-p));
    return 0;
}