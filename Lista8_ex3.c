//3.	Escreva um algoritmo para encontrar o n-ésimo dígito dentro de um algarismo numérico – número inteiro. 
#include <stdio.h>

int main() {
    int num, n, dig, quant = 0, temp;
printf("Digite um numero inteiro: \n");
scanf("%d", &num);
printf("Digite a posição do digito que deseja encontrar: ");
scanf("%d", &n);
    if (num < 0) {
        num -= num;
}

    temp = num;
    while (temp != 0) {
        temp = temp / 10;
    quant++;
    }
    if (n > quant || n <= 0) {
        printf("Posição invalida! O numero tem %d algarismo(s).\n", quant);
}
    for (int i = 1; i <= quant - n; i++) {
        num = num / 10;
}
    dig = num % 10;
printf("O %dº digito é: %d\n", n, dig);

    return 0;
}
