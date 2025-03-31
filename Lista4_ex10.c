//10.	Considere um inteiro p > 1, verificar se p é primo.
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int p, div = 2;
    int pri= 1;
    printf("Digite um numero: \n");
    scanf("%d", &p);
    while (div * div <= p) {
    if (p % div == 0) {
    pri = 0;
    break;
}
    div++;
    if (pri) {
    printf("%d é primo.\n", p);
    } else {
    printf("%d não é primo.\n", p);
    }
    }
return 0;
    }