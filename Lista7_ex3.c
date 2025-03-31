//3.	Escrever um algoritmo que lê uma matriz M(12,13) e divida todos os 13 elementos de cada uma das 12 linhas de M pelo maior elemento em módulo daquela linha. Escrever a matriz lida e a modificada.
#include <stdio.h>
#define linha 12
#define coluna 13

int main() {
    float matrix[linha][coluna];
    int i, j;

    printf("Digite os elementos da matriz:\n");
    for (i = 0; i < linha; i++) {
        for (j = 0; j < coluna; j++) {
    printf("Matriz[%d][%d]: ", i, j);
        scanf("%f", &matrix[i][j]);
}
}
    printf("\nMatriz original:\n");
    for (i = 0; i < linha; i++) {
    for (j = 0; j < coluna; j++) {
        printf("%.2f\t", matrix[i][j]);
    }
        printf("\n");
    }


    for (i = 0; i < linha; i++) {

        float maior = matrix[i][0];
        for (j = 1; j < coluna; j++) {
            if (matrix[i][j] > maior) {
        maior = matrix[i][j];
    }
        }
        for (j = 0; j < coluna; j++) {
    matrix[i][j] = matrix[i][j] / maior;
}
    }

    printf("\nMatriz modificada:\n");
    for (i = 0; i < linha; i++) {
        for (j = 0; j < coluna; j++) {
        printf("%.2f\t", matrix[i][j]);
}
        printf("\n");
    }
    return 0;
}
