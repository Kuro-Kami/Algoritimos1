//4.	Faça um programa que apresente o quadrado de todo número par que ele recebe. Exemplo: Entrada: 8 - Processamento: é par? Então imprima 8x8 - Saída: 64
//R: 
#include <stdio.h>
#include <locale.h>
	int main()
{
setlocale(LC_ALL, "Portuguese");
int par, quad;
printf("Insira um numero par: \n");
scanf(" %d", &par);
if (par % 2 == 0)
{
quad = par * par;
printf("O quadrado desse numero par é: %d", quad);
}
else{
printf("O numero inserido não é par!");
}
return 0;
}
