//11.	Dados dois vetores de números inteiros A e B, ambos de tamanho 10, faça um algoritmo que gere um vetor C contendo a união dos conjuntos de dados A e B.
#include <stdio.h>
int main() {
    int veta[10], vetb[10], vetc[20], i, j, k = 0;
    printf("Digite os 10 elementos:\n");
    for (i = 0; i < 10; i++) scanf("%d", &veta[i]);
    printf("Digite os 10 elementos:\n");
    for (i = 0; i < 10; i++) scanf("%d", &vetb[i]);
    for (i = 0; i < 10; i++) vetc[k++] = veta[i];
    for (i = 0; i < 10; i++) {
    for (j = 0; j < k; j++) {
        if (vetb[i] == vetc[j]) break;
}
    if (j == k) vetc[k++] = vetb[i];
    }
    printf("Vetor C:\n");
    for (i = 0; i < k; i++) printf("%d ", vetc[i]);
    return 0;
}
