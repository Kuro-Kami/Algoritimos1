//12.	Dados dois vetores de números inteiros A e B, ambos de tamanho 10, faça um algoritmo que verifique todos os valores que se repetem em A e B, ou seja, todos os valores da intersecção dos conjuntos A e B.
#include <stdio.h>
int main() {
    int veta[10], vetb[10];
    int i, j;
    printf("Digite os 10 elementos do vetor:\n");
    for (i = 0; i < 10; i++) {
        printf("veta[%d]: ", i);
        scanf("%d", &veta[i]);
    }
    printf("\nDigite os 10 elementos do vetor:\n");
    for (i = 0; i < 10; i++) {
printf("vetb[%d]: ", i);
scanf("%d", &vetb[i]);
    }
    printf("\nValores que se repetem em A e B:\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
        if (veta[i] == vetb[j]) {
        printf("%d ", veta[i]);
                break;
        }
    }
    }
    return 0;
} 
