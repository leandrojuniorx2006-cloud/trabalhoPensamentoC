#include <stdio.h>
int main() {
    float lanche, bebida, pago, total;
    scanf("%f %f %f", &lanche, &bebida, &pago);
    total = lanche + bebida;
    printf("Total: %.2f\n", total);
    printf("Troco: %.2f\n", pago - total);
    return 0;
}
