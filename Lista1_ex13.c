//13.	Escreva um algoritmo para ler um valor e escrever a mensagem “É MAIOR QUE 10!” se o valor lido for maior que 10, ou escrever “NÃO É MAIOR QUE 10!” caso contrário.
//R:
#include <stdio.h>
	int main()
    {
		float nume;
			printf("Escreva um valor:\n");
			scanf(" %f", &nume);
		if(nume>10){
			printf("E MAIOR QUE 10!");
		}
		else if(nume==10){
			printf("E igual a 10");
		}
		else{
			printf("NAO E MAIOR QUE 10!"); 
		}
	return 0;
	}
