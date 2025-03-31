//3.	Dado n, imprimir os n primeiros naturais ímpares. 
#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "PORTUGUESE");
    int nat, impar =1;
    printf("Digite um numero positivo: \n");
    scanf(" %d", &nat);
    while(nat>0 && nat%2==1 && impar<=nat)
   {
    impar;
    printf("Os primeiro naturais até: %d são: %d \n", nat, impar);
    impar = impar +2;
    }
return 0;
}
