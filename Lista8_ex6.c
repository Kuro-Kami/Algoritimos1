//6.	Escreva um algoritmo que faça a troca dos valores que se encontram na posição x e na posição y, do vetor A. Isto é, o valor da posição x passa para a posição y, e o valor da posição y passa para a posição x. 
#include <stdio.h>
int main() {
    int vet[100], n, x, y, temp;
    printf("Digite o tamanho do vetor: \n");
    scanf("%d", &n);
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < n; i++) {
    printf("vet[%d]: ", i);
        scanf("%d", &vet[i]);
    }
    printf("Digite as posições x e y para troca: \n");
    scanf("%d %d", &x, &y);
    temp = vet[x];
    vet[x] = vet[y];
    vet[y] = temp;
    printf("Vetor depois da troca:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", vet[i]);
    }
    return 0;
}
