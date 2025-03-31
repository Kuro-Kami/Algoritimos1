//12.	Escreva um algoritmo para ler as dimensões de um retângulo (base e altura), calcular e escrever a área do retângulo.
//R: 
#include <stdio.h>
	int main()
	{
		float bas;
		float alt;
		float res;
			printf("Escreva o valor da base:\n");
			scanf(" %f", &bas);
		printf("Escreva o valor da altura: \n");
		scanf(" %f",&alt);
			res = bas * alt;
			printf("O valor da area e: %.2f \n", res);
	return 0;
    }
