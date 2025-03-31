//7.	Dado um vetor de números inteiros A, de tamanho 10, faça um algoritmo para encontrar o valor x presente em uma das posições de A. 
#include <stdio.h>
int main() {
    int vet[10], x, i, enco = 0;
    printf("Digite os 10 elementos do vetor:\n");
    for (i = 0; i < 10; i++) {
        printf("vet[%d]: ", i);
        scanf("%d", &vet[i]);
    }
    printf("Digite o valor que deseja encontrar: ");
    scanf("%d", &x);
    for (i = 0; i < 10; i++) {
        if (vet[i] == x) {
printf("O valor %d foi encontrado na posiçao %d.\n", x, i);
    enco = 1;
    break;
        }
    }
    if (!enco) {
    printf("O valor %d nao foi encontrado no vetor.\n", x);
    }
    return 0;
}