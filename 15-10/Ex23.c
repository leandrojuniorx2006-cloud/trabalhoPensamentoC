
#include <stdio.h>

int main() {
    int estoque;

    printf("Digite a quantidade de insumos em estoque: ");
    scanf("%d", &estoque);

    if (estoque < 50) {
        printf("ALERTA: Necessidade urgente de reposicao de suprimentos!\n");
        
    } else {
        printf("Estoque estável. Quantidade suficiente no armazem.\n");
    }

    return 0;
}
