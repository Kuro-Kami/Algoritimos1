//Dado um vetor A de tamanho 10 e do tipo inteiro faça um programa em C que, utilizando um laço de repetição, insira os valores de 21 a 30 nesse vetor.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> #include <math.h>
int main()
    {
    setlocale(LC_ALL, "Portuguese");         int vetA[10];         for( int i = 0; i<10; i++){             vetA[i] = 21 + i;             printf("Os valores são: %d \n", vetA[i]);
        }
    return 0;
    }