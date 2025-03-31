//8.	Dado um vetor de números inteiros A, de tamanho 10, faça um algoritmo para verificar se existem números repetidos dentro do vetor. Caso exista, apresente quais são, e a quantidade que se repetem.
 #include <stdio.h>
int main() {
    int vet[10], i, j;
    int rep[10] = {0};
    int cont;
    printf("Digite os 10 elementos do vetor:\n");
    for (i = 0; i < 10; i++) {
    printf("vet[%d]: ", i);
    scanf("%d", &vet[i]);
    }
    printf("\nNumeros repetidos:\n");
    for (i = 0; i < 10; i++) {
        if (rep[i] == 1) {
            cont;
        }
cont = 1;
    for (j = i + 1; j < 10; j++) {
            if (vet[i] == vet[j]) {
    cont++;
        rep[j] = 1;
    }
        }
if (cont > 1) {
    printf("O numero %d se repete %d vezes.\n", vet[i], cont);
}
    }
    return 0;
}
