// Uma escola deseja saber se existem alunos cursando, simultaneamente, as disciplinas Lógica e Linguagem de Programação. Coloque os números das matrículas dos alunos que cursam Lógica em um vetor, no máximo 10 alunos. Coloque os números das matrículas dos alunos que cursam Linguagem de Programação em outro vetor, no máximo 8 alunos. Mostre o número de matrícula que aparece nos dois vetores.
#include <stdio.h> int main()
{
    int vet_matlogica [10] = {10,15,6,35,76,98,97,101,92,1};     int vet_matprog [8] = {1,0,5,4,3,5,6,98};     for(int i=0; i<10; i++)
    {         if(i<8)
        {
	 	           printf("Numero da mat Logica = %d e Numero da mat Linguagem = %d 
\n",vet_matlogica[i],vet_matprog[i]);
        }
        else
        {
            printf("Numero da mat logica = %d \n",vet_matlogica[i]);
        }
    }
    printf("\n\n\n");     for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            if(vet_matlogica[i] == vet_matprog[j]){                 printf("Matricula %d esta duplicada nas posicoes %d e %d \n",vet_matlogica[i],i+1,j+1);
            }
        }
    }