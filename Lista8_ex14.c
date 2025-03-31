//14.	Dada uma matriz M, de dimensões 3x3, faça um algoritmo que some todos os elementos abaixo da diagonal principal, e exiba o resultado. 
#include <stdio.h>
int main() {
    int matrix[3][3], i, j, soma = 0;
    printf("Digite os elementos da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
    printf("matrix[%d][%d]: ", i, j);
    scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 1; i < 3; i++) {
    for (j = 0; j < i; j++) {
soma += matrix[i][j];
    }
    }
    printf("\nA soma dos elementos abaixo da diagonal principal eh: %d\n", soma);
    return 0;
}
