//9.	Dado n e dois números naturais i e j diferentes de 0, imprimir em ordem crescente os n primeiros naturais que são múltiplos de i ou de j e ou de ambos. Exemplo: Para n = 6, i = 2, j = 3 a saída deverá ser : 0, 2, 3, 4, 6, 8. 
#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
    int n, i, j;
    int con = 0;  int numb = 0;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    printf("Digite o valor de i: ");
    scanf("%d", &i);
    printf("Digite o valor de j: ");
    scanf("%d", &j);
    while (con < n) {
    if (numb % i == 0 || numb % j == 0) {
    printf("%d", numb);
    con++;
    if (con < n) {
    printf(", ");}
}
    numb++;
}
    printf("\n");
return 0;
}