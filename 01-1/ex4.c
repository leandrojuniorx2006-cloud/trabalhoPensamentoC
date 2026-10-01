#include <stdio.h>

int main(){
    float l1, l2, l3;

    printf("Digite o primeiro lado do triangulo: ");
    scanf("%f", &l1);
    printf("Digite o segundo lado do triangulo: ");
    scanf("%f", &l2);
    printf("Digite o terceiro lado do triangulo: ");
    scanf("%f", &l3);

    if ((l1==l2) && (l2==l3)){
        printf("Equilátero");
    } else if ((l1!=l2) && (l1!=l3) && (l2!=l3)){
        printf("Escaleno");
    } else{
        printf("Isóceles");
    }
    
}
