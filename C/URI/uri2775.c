// 2775 - preparando a produção

#include<stdio.h>
#define MAX 1123

int main(){
	int n;
	int pacote[MAX], tempo[MAX];
	int resultado;

	while(scanf("%d", &n) != EOF){
		for (int i = 0; i < n; i++)
			scanf("%d", &pacote[i]);
		for (int i = 0; i < n; i++)
			scanf("%d", &tempo[i]);

		resultado = 0;
		for (int i = n-2; i >= 0; i--)
			for (int j = i; j < n; j++)
				if (pacote[i] > pacote[j])
					resultado += tempo[i] + tempo[j];

		printf("%d\n", resultado);
	}
}
