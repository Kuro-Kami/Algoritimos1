//Faça um programa que carregue um vetor com oito números inteiros e mostre:
//a.	Os números múltiplos de dois;
//b.	Os números múltiplos de três
//c.	Os números múltiplos de dois e de três.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h> #include <setlocale.h>
int main()
 {
    int vet[]={7,12,3,32,17,18,5,40};         for(int i=0; i<8; i++){         if(vet[i] % 2 == 0){             printf("Multiplo de dois: %d", vet[i]);
         }
        if(vet[i] % 3 ==0){             printf("Multiplo de três: %d", vet[i]);
         }
    }
    return(0);
 }