//5.	Faça um algoritmo que determine se um número inteiro é palíndromo ou não. (OBS: Número palíndromo é qualquer número que lido da esquerda para a direita ou da direita para a esquerda possui a mesma forma. Ex: 242 ou 3443).
#include <stdio.h>
int main() {
int num, rev = 0, rest, origin;
    printf("Digite um numero inteiro: ");
scanf("%d", &num);
    origin = num;
    if (num < 0) {
num = -num;
    }
while (num != 0) {
    rest = num % 10;
        rev = rev * 10 + rest;
    num = num / 10;
}
if (origin == rev) {
printf("%d e um numero palindromo.\n", origin);
    } else {
        printf("%d nao e um numero palindromo.\n", origin);
}
    return 0;
} 
