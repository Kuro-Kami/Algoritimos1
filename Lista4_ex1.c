//1.	Dada uma sequência de números naturais em que o último elemento é 0 (zero), imprimir seus quadrados.
#include <stdio.h>
#include <locale.h>
int main()
    {
    setlocale(LC_ALL, "PORTUGUESE");
    int numb = 1;
    int quadrado;
        while(numb != 0)
    {
    printf("Insira um numero ou digite zero para sair: \n");
    scanf(" %d", &numb);
    quadrado = numb*numb;
    printf("\n\n O quadrado de %d = %d \n", numb, quadrado);
    }
return 0;
}