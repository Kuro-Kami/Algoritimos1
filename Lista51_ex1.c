1.	Faça um algoritmo utilizando a Linguagem de Programação C que leia a quantidade de números que o usuário desejar digitar e imprima a soma desses valores.
 #include <stdio.h>
int main() {
    int quant, i = 0, val, som = 0;
    printf("Digite a quantidade de numeros que deseja somar: ");
    scanf("%d", &quant);
    if (quant <= 0) {
        printf("Quantidade a baixo de 0\n");
    }
    do {
    printf("Digite o val %d: ", i + 1);
    scanf("%d", &val);
    som += val;
    i++;
    } while (i < quant);
    printf("A soma dos valores digitados e: %d\n", som);
    return 0;
}