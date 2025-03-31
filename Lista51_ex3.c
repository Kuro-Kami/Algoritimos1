//3.	Faça um algoritmo utilizando a Linguagem de Programação C que permite ao usuário transformar um número natural em número binário e imprima o número binário na tela.
#include <stdio.h>
int main() {
    int num, rest, bin = 0, fat = 1;
    printf("Informe um numero natural: ");
    scanf("%d", &num);
    if (num == 0) {
        printf("O numero binario correspondente e: 0\n");
    }
    do {
        rest = num % 2;
        bin += rest * fat;
        fat *= 10;
        num = num / 2;
    } while (num > 0);
    printf("O numero binario correspondente e: %d\n", bin);
    return 0;
} 