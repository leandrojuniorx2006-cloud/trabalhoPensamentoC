#include <stdio.h>

int main() {
    float consumo, total;

    printf("Digite o consumo em kWh: ");
    scanf("%f", &consumo);

    if (consumo <= 100) {
        total = consumo * 0.40;
    } else if (consumo <= 250) {
        total = 100 * 0.40 + (consumo - 100) * 0.65;
    } else {
        total = 100 * 0.40 + 150 * 0.65 + (consumo - 250) * 0.90;
    }

    total = total + 15.00;

    printf("Total da fatura: R$ %.2f\n", total);

    return 0;
}
