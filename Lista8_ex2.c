//2.	Escreva um algoritmo que encontre a quantidade de algarismos de um número inteiro n.
#include <stdio.h>
int main() {
    int n, quant = 0;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    if (n < 0) {
        n = -n;
}
    while (n != 0) {
        n = n / 10;
        quant++;
}
    printf("O numero tem %d algarismos.\n", quant);
    return 0;
} 