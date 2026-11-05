#include <stdio.h>

int main() {
    float preco_a, preco_b;
    scanf("%f %f", &preco_a, &preco_b);
    if (preco_a < preco_b) {
        printf("Loja A possui o menor preco: %.2f\n", preco_a);
    } else if (preco_b < preco_a) {
        printf("Loja B possui o menor preco: %.2f\n", preco_b);
    } else {
        printf("Os precos sao iguais\n");
    }
    return 0;
}
