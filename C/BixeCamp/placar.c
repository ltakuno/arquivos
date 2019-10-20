/*
 *   PLACAR - Quem vai ser aprovado
 *   SPOJ
 * */

#include<stdio.h>
#include<string.h>


int main(){
    int n, problemas, menor;
    char nome[30], nome_res[30];
    int instancia=1;


    while (scanf("%d", &n) != EOF){
        menor = 11;
        nome_res[0] = 'z';
        printf("Instancia %d\n", instancia);
        instancia++;
        while (n){
            scanf("%s", nome);
            scanf("%d", &problemas);

            if (problemas < menor){
                menor = problemas;
                strcpy(nome_res, nome);
            }
            else
            if ((problemas == menor) &&  strcmp(nome, nome_res) > 0){
                menor = problemas;
                strcpy(nome_res, nome);
            }


            n--;
        }

        printf("%s\n", nome_res);


    }

}
