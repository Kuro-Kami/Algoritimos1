//4.	Uma pessoa é obrigada a realizar o alistamento no exército brasileiro se for do sexo masculino e tiver 18 anos. 
//Faça um programa que verifique se o usuário do seu programa precisará passar pelo processo de alistamento ou não. 
#include <stdio.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int id;
char sex;
printf("Insira sua idade: \n");
scanf(" %d", &id);
printf("Insira seu sexo(M para masculino, F para feminino):\n");
scanf(" %c", &sex);
if(id=18 && sex == 'M'){
printf("Você terá que se alistar esse ano \n");
}
else{
printf("Você não precisará se alistar");
}
return 0;
}