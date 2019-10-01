#include <stdio.h>

int main(void) {


	double v[5];
	double menor, maior, soma = 0;
	
	scanf("%lf", &v[0]);
	menor = maior = v[0];
        soma = v[0];	
	for (int i = 1; i < 5; i++){
		scanf("%lf", &v[i]);
		if (v[i] < menor) menor = v[i];
		else if (v[i] > maior) maior = v[i];
		soma += v[i];
	}
	printf("%.1lf\n", soma - (maior+menor));

	return 0;
}
