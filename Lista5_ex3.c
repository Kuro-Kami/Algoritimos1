//3.	Faça um programa em C que leia cinco valores: a, b, c, d e e, todos números inteiros, e mostre-os em ordem crescente e decrescente.
#include <stdio.h>
int main() {
    int a, b, c, d, e, temp;
    printf("Digite cinco valores inteiros:\n");
    printf("Valor 1: ");
    scanf("%d", &a);
    printf("Valor 2: ");
    scanf("%d", &b);
    printf("Valor 3: ");
    scanf("%d", &c);
    printf("Valor 4: ");
    scanf("%d", &d);
    printf("Valor 5: ");
    scanf("%d", &e);
    for (int i = 0; i < 4; i++) {
        if (a > b) {
        temp = a; a = b; b = temp; }
        if (b > c) {
        temp = b; b = c; c = temp; }
        if (c > d) {
        temp = c; c = d; d = temp; }
        if (d > e) {
        temp = d; d = e; e = temp; }
    }
    printf("\nValores em ordem crescente: %d %d %d %d %d\n", a, b, c, d, e);
    printf("Valores em ordem decrescente: %d %d %d %d %d\n", e, d, c, b, a);
    return 0;
}