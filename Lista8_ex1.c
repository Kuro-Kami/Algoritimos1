//1.	Escreva um algoritmo para encontrar o Mdc entre dois números inteiros, x e y.
#include <stdio.h>
int main() {
    int xis, ypsolon, resto;
    printf("Digite dois numeros inteiros: \n");
    scanf("%d", &xis);
    scanf("%d", &ypsolon);
    while (ypsolon != 0) {
    resto = xis % ypsolon;
        xis = ypsolon;
    ypsolon = resto;
}
    printf("O MDC eh: %d\n", xis);
    return 0;
} 