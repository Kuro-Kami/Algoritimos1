//7.	Dados n e uma sequência de n números inteiros positivos, determinar a soma dos números pares, dos ímpares e as respectivas quantidades de cada um dos subconjuntos.
#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
    int n, numb;
    int par = 0, imp = 0;
    int pare = 0, impa = 0, i = 0;
    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);
    while (i < n) {
    printf("Digite o %dº numero: ", i + 1);
    scanf("%d", &numb);
    if (numb % 2 == 0) {
    par += numb;
    pare++;
    } else {
    imp+= numb;
    impa++;
    }
    i++;
    }
    printf("\nSoma dos numeros pares: %d\n", par);
    printf("Quantidade de numeros pares: %d\n", pare);
    printf("Soma dos numeros impares: %d\n", imp);
    printf("Quantidade de numeros impares: %d\n", impa);
return 0;
}