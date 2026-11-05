#include <stdio.h>

int main() {
    float valor_compra, desconto = 0.0, total_pagar;
    scanf("%f", &valor_compra);
    if (valor_compra >= 200.0) {
        desconto = valor_compra * 0.10;
    }
    total_pagar = valor_compra - desconto;
    printf("Desconto: %.2f\n", desconto);
    printf("Total a pagar: %.2f\n", total_pagar);
    return 0;
}
