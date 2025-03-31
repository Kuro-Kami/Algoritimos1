//2.	Dado n, calcular a soma dos n primeiros números naturais. 
#include <stdio.h>
#include <locale.h>
int main()
    {
    setlocale(LC_ALL, "PORTUGUESE");
    int numbN;
    int numb = 0;
    int resp = 0;
    printf("Digite o valor de n: ");
    scanf(" %d", &numbN);
    while(numb<=numbN)
    {
    printf("\n Soma = %d + %d: \n", resp, numb);
    resp = resp+numb;
    numb++;
    }
    printf("\n\n Valor da soma = %d \n\n", resp);
return 0;
}