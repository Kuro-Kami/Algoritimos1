//5.	Existem três formas de calcular a potência em resistores: (1) P = i.U; (2) P = R.i^2; e (3) P = U^2/R, sendo P a potência, i a corrente elétrica, U a tensão e R a resistência. Faça um programa que apresente o resultado da potência de acordo com a situação do momento, por exemplo, para o caso de não haver corrente ou não haver tensão. Exemplo: Entrada: i, U e R - Processamento: i = 0? Então P = U^2/R, não U = 0? Então P = Rxi^2 - Saída: P. 
#include <stdio.h>4
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float i, U, R, P;
    printf("Caso não houver algum dos valores abaixo, digite 0. \n");
    printf("Insira o valor da corrente (i): \n");
    scanf(" %f", &i);
    printf("Insira o valor da tensão (U): \n");
    scanf(" %f", &U);
    printf("Insira o valor da resistência (R): \n");
    scanf(" %f", &R);
if(i==0){
    P = (U * U)/R;
    printf("O valor da potência é: %.3fW \n", P);
}
else if(U==0){
    P = R * (i*i);
    printf("O valor da potência é: %.3fW \n", P);
}
else {
P = i * U;
printf("O valor da potência é: %.3fW \n", P);
}
return 0;
}
