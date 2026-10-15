
#include <stdio.h>

int main() {
    float num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    if (num1 > num2) {
        printf("O primeiro numero é maior.\n");} 
    
    else if (num2 > num1) {
        printf("O segundo numero é maior.\n");} 
        
    else {
        printf("Os dois numeros são iguais.\n");}

}
