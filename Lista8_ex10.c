//10.	Dado um vetor de números inteiros A, de tamanho 10, faça um algoritmo que ordene os valores presentes em A, de forma decrescente.
 #include <stdio.h>
int main() {
    int vet[10], i, j, temp;
    printf("Digite os 10 elementos do vetor:\n");
    for (i = 0; i < 10; i++) {
    printf("vet[%d]: ", i);
    scanf("%d", &vet[i]);
    }
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
    if (vet[j] < vet[j + 1]) {
    temp = vet[j];
    vet[j] = vet[j + 1];
    vet[j + 1] = temp;
    }
}
    }
    printf("\nVetor ordenado em ordem decrescente:\n");
    for (i = 0; i < 10; i++) {
    printf("%d ", vet[i]);
}
    return 0;
}
