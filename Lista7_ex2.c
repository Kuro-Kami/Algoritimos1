//2.Escrever um algoritmo que lê uma matriz A(15,5) e a escreva (valores randômicos*).
//Verifique, a seguir, quais os elementos de A que estão repetidos e quantas vezes cada um está repetido.
//Escrever cada elemento repetido com uma mensagem dizendo que o elemento aparece X vezes em A.


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <time.h>

int main()
 {
    setlocale(LC_ALL, "PORTUGUESE");
        int matrix[15][5];
        int linha = 15, coluna = 5, acumulador = 0;
            srand(time(NULL));
            for(int i= 0; i <linha ; i++)
            {
                  printf(" \n");
                for(int j = 0; j<coluna ; j++){
                        matrix[i][j] = 1 + rand()%100;
                    printf("%d ", matrix[i][j]);
                    acumulador == i;
                    acumulador = matrix[i][j] + acumulador;
                if(matrix[15][5] == matrix[15][5]){
                    printf("\n O Numero %d se repete %d vezes\n", matrix[i][j], acumulador);
                }
                }
            }




 return 0;
 }
