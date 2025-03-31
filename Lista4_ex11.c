//11.	Diz-se que dois números primos são gêmeos, se eles são ímpares consecutivos. Exemplo: 3 e 5, 5 e 7, 11, e 13. Encontre todos os primos gêmeos no intervalo [3,1000].
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int ini = 3, fim = 1000;
    int numb = ini;
    int pri = -1;
    while (numb <= fim) {
    int prim = 1;
    int div = 2;
    while (div * div <= numb) {
    if (numb % div == 0) {
    prim = 0;
    break;
}
    div++;
}
    if (prim) {
    if (pri != -1 && numb - pri == 2) {
    printf("Primos gêmeos: %d e %d\n", pri, numb);
}
    pri = numb;
}
    numb++;
}
return 0;
}