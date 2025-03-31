//4.	Faça um algoritmo utilizando a Linguagem de Programação C que faça a soma dos n primeiros números primos naturais e apresente o resultado na tela. 
#include <stdio.h>
int main() {
    int n, cont = 0, num = 2, som = 0, ehP, div;
    printf("Informe a quantidade de numeros primos a somar: ");
    scanf("%d", &n);
    do {
        ehP = 1;
        div = 2;
        while (div <= num / 2) {
            if (num % div == 0) {
                ehP = 0;
                break;
            }
            div++;
        }
        if (ehP) {
            som += num;
            cont++;
        }
        num++;
    } while (cont < n);
    printf("A soma dos %d primeiros numeros primos e: %d\n", n, som);
    return 0;
}