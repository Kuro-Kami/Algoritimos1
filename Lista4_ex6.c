//6.	Dado uma sequência de n números inteiros quaisquer. Encontre o maior e o menor valor dessa sequência.
#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
    int n, num;
    int mai, men;
    int i = 1;
    printf("Digite a quantidade de números: \n");
    scanf("%d", &n);
    printf("Digite o primeiro numero da sequencia: \n");
    scanf("%d", &num);
    mai = num;
    men = num;
    while (i <= n) {
    printf("Digite o %dº numero: ", i);
    scanf("%d", &num);
    if (num > mai) {
    mai = num;
    }
    if (num < men) {
    men = num;
    }
    i++;
    }
    printf("O maior valor é: %d\n", mai);
    printf("O menor valor é: %d\n", men);
return 0;
}