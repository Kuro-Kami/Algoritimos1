//1.	Faça um programa em C que leia um valor inteiro e positivo n, e calcule a expressão abaixo. Após, imprima o resultado na tela. Soma = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n
#include <stdio.h>
int main() {
    int n, i;
    int soma = 0;
    printf("Digite um valor inteiro e positivo: \n");
    scanf("%d", &n);
     if (n <= 0) {
        printf("O valor deve ser inteiro e positivo.\n");
    }
    for (i = 1; i <= n; i++) {
        soma += 1 / i;
    }
    printf("A soma da serie e: %d\n", soma);

    return 0;
}  