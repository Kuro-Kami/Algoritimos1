//7.1 Escreva um algoritmo que leia uma matriz (5,5) e calcule as soma
//a. Da linha 4;
//b. Da coluna 2;
//c. Da diagonal principal;
//d. De todos elementos;

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
    {
       setlocale(LC_ALL, "PORTUGUESE");
        int matrix[5][5] = {{1,2,3,4,5}, {6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
        int som = 0, soma = 0, somad = 0, somat = 0;
            for(int i = 0 ; i<5 ; i++){
                printf("\n ");
                for(int j = 0 ; j<5 ; j++){
                    printf("%d ", matrix[i][j]);
                if(i == 4){
                    som = som + matrix[3][j];
                }
                if(j == 2){
                    soma = soma + matrix[i][1];
                }
                if(i == j){
                    somad += matrix[i][j];
                }
                somat += matrix[i][j];
                }
            }

                printf("\n A soma da linha 4 é: %d", som);
                printf("\n A soma da coluna 2 é: %d", soma);
                printf("\n A soma da diagonal principal é: %d", somad);
                printf("\n A soma total é: %d", somat);


      return 0;
    } 
