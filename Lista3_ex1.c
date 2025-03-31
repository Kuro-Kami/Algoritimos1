//1.	Faça um programa que peça dois números ao usuário e mostre qual o maior e qual o menor.
#include <stdio.h>4
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
    float a, b;
    printf("Insira o primeiro numero: \n");
    scanf(" %f", &a);
    printf("Insira o segundo numero: \n");
    scanf(" %f", &b);
if(1<2){
    printf("O numero %.3f é maior que %.3f", b, a);
}
else{
    printf("O numero %.3f é maior que %.3f", a, b);
}
return 0;
} 