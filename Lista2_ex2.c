//2.	Faça um programa que receba 3 números do tipo float, utilizando scanf, e os imprima na tela.
//R: 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	int main()
	{
		float numb, numb2, numb3;
			setlocale(LC_ALL, "Portuguese");
				printf("Insira o primeiro valor: \n");
				scanf("%f", &numb);
			printf("Insira o segundo valor: \n");
			scanf("%f", &numb2);
		printf("Insira o ultimo valor: \n");
		scanf("%f", &numb3);
    printf("Os valores inseridos foram: %.2f, %.2f e %.2f", numb,numb2, numb3);
		return 0;
	}