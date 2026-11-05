#include <stdio.h>

int main() {
    int participa_clube, cupom_valido;
    float frete;

    printf("Participa do clube? (1 = sim, 0 = nao): ");
    scanf("%d", &participa_clube);

    printf("Cupom valido? (1 = sim, 0 = nao): ");
    scanf("%d", &cupom_valido);

    if (participa_clube == 1 || cupom_valido == 1) {
        frete = 0;
    } else {
        frete = 12.00;
    }

    printf("Valor do frete: R$ %.2f\n", frete);

    return 0;
}
