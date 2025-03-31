//. Dado um vetor A de tamanho 8 e do tipo inteiro faça um programa em C que, utilizando um laço de repetição, receba os valores de entrada e, utilizando outro laço de repetição, verifique qual o maior valor do vetor e apresente esse valor.
#include <stdio.h> #include <locale.h>
int main()
{
  setlocale(LC_ALL, "");   int A[8], valor = 0, maior = 0;   printf ("\n");
  
  for (int i = 0; i < 8; i++)
  {
    scanf ("%d",&A[i]);
  }
  
  for (int i = 0; i < 8; i++)
  { 
    if (A[i] > maior)
    {
      maior = A[i];
    }  
  }
  printf ("\nMaior valor: %d\n",maior);
return 0;
}