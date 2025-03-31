//.	Escreva um algoritmo para ler um valor (do teclado) e escrever (na tela) o seu antecessor.
#include <stdio.h>
int main()
	{
	int num;
		printf("Escreva um numero: \n");
		scanf(" %d", &num);
		num--;
	printf("O antecessor dele e: %d", num);
  return 0;
	}
