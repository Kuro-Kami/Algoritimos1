//2.	Faça um algoritmo utilizando a Linguagem de Programação C que permita ao usuário informar a idade de quantas pessoas ele deseja registrar. Em seguida, o algoritmo deve apresentar a soma das pessoas maiores de idade e a média de idade das pessoas menores de idade informadas.
#include <stdio.h>
int main() {
    int n, idade, somaM = 0, somaMe = 0, contM = 0, i = 0;
    float mediaM = 0;
    printf("Quantas pessoas deseja registrar? ");
    scanf("%d", &n);
    do {
        printf("Informe a idade da pessoa %d: ", i + 1);
        scanf("%d", &idade);
        if (idade >= 18) {
            somaM++;
        } else {
            somaMe += idade;
            contM++;
        }
        i++;
    } while (i < n);
    if (contM > 0) {
        mediaM = (float)somaMe / contM;
    }
    printf("\nTotal de pessoas maiores de idade: %d\n", somaM);
    if (contM > 0) {
        printf("Media de idade das pessoas menores de idade: %.2f\n", mediaM);
    } else {
        printf("Nao foram registradas pessoas menores de idade.\n");
    }
    return 0;
}