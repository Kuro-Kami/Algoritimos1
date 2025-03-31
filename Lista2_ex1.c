//1.	Faça um programa que tenha 3 variáveis, uma do tipo float, outra do tipo char e, por último, uma do tipo int. Dê valores a essas variáveis, utilizando scanf, e imprima-as na tela.
//R:
#include <stdio.h>
	int main()
	{
		int num;
		char f[100];
		float num2;
			printf("Escreva um valor inteiro: \n");
			scanf("%d", &num);
		printf("Escreva uma palavra: \n");
		scanf(" %s", &f);
			printf("Escreva um valor (Nao necessario ser inteiro): \n");
			scanf("%f", &num2);
		printf(" \n Voce digitou: %d, %s e %.2f", num, f, num2);
	return 0;
	}