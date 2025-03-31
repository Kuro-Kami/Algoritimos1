//3.	Peça para a pessoa entrar com a data de nascimento dela e verifique se é uma data válida. (Um mês só pode ter até 31 dias, um ano tem 12 meses, e assim por diante). 
#include <stdio.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
short int dia1 = 31, mes2 = 12, ano3 = 2024;
short int dia, mes, ano;
printf("Insira o dia do seu nascenimento: \n");
scanf(" %hd", &dia);
printf("Insira o mês: \n");
scanf(" %hd", &mes);
printf("Insira o ano: \n");
scanf(" %hd", &ano);
if(dia <= dia1 && mes <= mes2 && ano <= ano3){
printf("Sua data de nascimento é válida.\n");
}
else{
printf("Por favor, insira uma data de nascimento válida. \n");
}
return 0;
}