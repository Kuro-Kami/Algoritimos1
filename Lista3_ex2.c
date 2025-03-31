//2.	Para doar sangue uma pessoa precisa ter entre 18 e 69 anos e pesar no mínimo 50 kg. Faça um programa que pergunte a idade e o peso do usuário e verifique se ele pode doar sangue.
#include <stdio.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int id, pes;
printf("Insira sua idade:\n");
scanf(" %d", &id);
printf("Insira seu peso total:\n");
scanf(" %d", &pes);
if(id>=18 || id<=69 && pes>=50)
{
printf("Você atende aos requisitos, pode doar sangue \n");
}
else{
printf("Você não atende aos requisitos para doar sangue \n");
}
return 0;
}
