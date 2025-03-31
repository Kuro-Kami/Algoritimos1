//9.	Apresente um programa contendo:
//a.	O esqueleto básico para seu funcionamento;
//b.	Declaração de variáveis e operação com as variáveis declaradas;
//c.	Bibliotecas em C (úteis para o programa).
//d.	printf e scanf.

#include <stdio.h>
#include <math.h>

int main (){
int primeiro;
int segundo;
char operacao;
float resultado;

printf("Escolha o primeiro numero: \n");
scanf("%d", &primeiro);
printf("Escolha o segundo numero: \n");
scanf("%d", &segundo);
printf("Escolha uma operacao: '+', '-', 'x', '/','r' \n");
scanf(" %c", &operacao);

if(operacao == '+'){
resultado = primeiro + segundo;
printf("O resultado e: %.2f \n", resultado );

}
else if(operacao == 'r'){
resultado = sqrt(primeiro);
printf("A raiz quadrada do primeiro numero e: %.2f \n", resultado);
}
else if(operacao == '-'){
resultado = primeiro - segundo;
printf("O resultado e: %.2f \n", resultado);
}else if(operacao == 'x'){
	resultado = primeiro * segundo;
	printf("O resultado e: %.2f \n", resultado);
}else if(operacao == '/'){

if(segundo != 0) {
resultado = primeiro / segundo;
printf("O resultado e: %.2f \n", resultado);
}else {
	printf("Erro, divisao por zero \n");
}

}else {
	printf("Operacao invalida \n");
}

return 0;
}
