//4.	Dado uma sequência de n números inteiros quaisquer que representam as temperaturas médias diárias num dado período, determinar a média aritmética da temperatura no mesmo período. 
#include <stdio.h>
#include <locale.h>

int main()    
{ 
setlocale(LC_ALL, "Portuguese");
    int n;
    int temp;
    int soma = 0;
    int i = 0;
    float media;
    printf("Digite o número de dias: \n");
    scanf("%d", &n);
    printf("\n Digite as temperaturas dos dias:\n");
    while (i < n) {
    scanf("%d", &temp);
    soma = soma + temp;
    i++;
    }
    media = (float)soma / n;
   printf("A média das temperaturas é: %.2fC°\n", media);
 return 0;
}