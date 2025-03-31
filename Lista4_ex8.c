//8.	Dado um inteiro positivo n, determinar o fatorial de n, que denotamos por n!.
#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
    int n, i = 1;
    int fat = 1;
    printf("Digite um número: \n");
    scanf("%d", &n);
    while (i <= n) {
    fat *= i;
    i++;
    }
    printf("O fatorial de %d é %d\n", n, fat);
return 0;
}