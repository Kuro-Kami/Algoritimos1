//Faça um programa que carregue um vetor de seis elementos numéricos inteiros e mostre: a. A quantidade de números pares;
//b.	Quais são os números pares;
//c.	A quantidade de números ímpares;
//d.	Quais são os números ímpares.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> #include <math.h>
int main()
{
setlocale(LC_ALL,”Protuguese”);
    int vet[] = {30, 31, 32, 33, 34, 35};      int cont_par = 0, cont_impar = 0;         for(int i = 0; i<6; i++){             if(vet[i] % 2 == 0){                 cont_par = cont_par + 1;
            }                 else{
                    cont_impar = cont_impar + 1;
                }
        }
 return(0);
}
