//4.	Faça um algoritmo que encontre o reverso de um número inteiro. 
#include <stdio.h>
int main() {
    int num, rev= 0, rest;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    if (num < 0) {
        num -= num;
    }
    while (num != 0) {
        rest = num % 10;
rev = rev * 10 + rest;
        num = num / 10;
    }
    printf("O reverso do numero é: %d\n", rev);
    return 0;
}
