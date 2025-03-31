//12.	Encontre todos os números primos entre 2 e 20.000.
#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
    int numb = 2, i, pri;
    while (numb <= 20000) {
    pri = 1;
    i = 2;
    while (i * i <= numb) {
    if (numb % i == 0) {
    pri = 0;
    break;
}
    i++;
}
    if (pri) {
    printf("%d ", numb);
}
    numb++;
}
return 0;
} 