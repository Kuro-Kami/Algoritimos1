//3.	Faça um programa que receba 4 números inteiros positivos, calcule a média desses números e imprima o resultado na tela.  
//Exemplo: Entradas: 2, 5, 15, 13 - Processamento: (2 + 5 + 15 + 13)/4 - Saída: 8 
//R: 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
    int main()
    {
int med, med2, med3, med4, medg;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira um valor: \n");
    scanf(" %d", &med);
    printf("Insira o segundo valor: \n");
    scanf(" %d", &med2);
    printf("Insira o terceiro valor: \n");
    scanf(" %d", &med3);
    printf("Insira o quarto valor: \n");
    scanf(" %d", &med4);
if(med<0 || med2<0 || med3<0 ||med4<0)
{
        printf("Erro, numero negativo!");
}
else {
    medg = (med+med2+med3+med4)/4;
    printf("A média da somatoria é: %d", medg);
}
return 0;
}