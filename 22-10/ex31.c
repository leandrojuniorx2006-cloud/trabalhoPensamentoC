#include <stdio.h>

int main() {
    int i;
    float valor, total = 0;

    for (i = 1; i <= 5; i++) {
        printf("Valor da venda %d: ", i);
        scanf("%f", &valor);
        total = total + valor;
    }

    printf("\nTotal recebido: R$ %.2f\n", total);

    return 0;
}
