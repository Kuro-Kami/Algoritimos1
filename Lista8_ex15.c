//15.	Dada uma matriz M, de dimensões 5x5, faça um algoritmo que calcule o determinante dessa matriz.
#include <stdio.h>
int main() {
    int matrix[3][3];
    int i, j;
    int det;
    printf("Digite os elementos da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    det = matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1])
        - matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0])
        + matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]); //até dor nos dedos deu
    printf("\nO determinante da matriz é: %d\n", det);
    return 0;
}
