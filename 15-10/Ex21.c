#include <stdio.h>

int main() {
    float valor, desconto, total;

    printf("Digite o valor total da compra: R$ ");
    scanf("%f", &valor);

    if (valor > 250.00) {
        desconto = valor * 0.10;
        total = valor - desconto;
    } else {
        total = valor;
    }

    printf("Valor final a pagar: R$ %.2f\n", total);

    return 0;
}
