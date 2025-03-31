//5.	Considere x inteiro e n natural, calcular a potência x por n.
#include <stdio.h>
#include <math.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
    int x, n;
    float res;
    printf("Digite o valor de x (base): \n");
    scanf("%d", &x);
    printf("Digite o valor de n (expoente): \n");
    scanf("%d", &n);
    while (n<0){
        printf("Digite um valor válido para o expoente\n");
        break;
    }
    while(n>=0){
        res=x*n;
    printf("Resultado de %d com expoente %d é: %.2f\n", x, n, res);
    break;
    }
    return 0;
}