//. Dado um vetor A de tamanho 20 e do tipo inteiro faça um programa em C que, utilizando um laço de repetição, insira os valores de 5 a 24 e, utilizando outro laço de repetição, calcule o dobro de cada valor inserido e armazene em um vetor B.
#include <stdio.h> #include <locale.h>
int main()
{
  setlocale(LC_ALL, "");   int A[20], B[20], cont = 5;
    
  printf ("\nValores:");   for (int i = 0; i < 20; i++)
  {
    A[i] = cont;     cont++;     printf(" %d", A[i]);
  }
  
  printf ("\n\nDobro dos valores:");   for (int i = 0; i < 20; i++)
  {
    B[i] = A[i] * 2;     printf (" %d", B[i]);     cont++;
  }
return 0;
}