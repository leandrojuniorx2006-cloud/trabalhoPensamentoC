#include <stdio.h>

int main() {
    float preco_original, desconto, preco_final;
    scanf("%f", &preco_original);
    desconto = preco_original * 0.10;
    preco_final = preco_original - desconto;
    printf("Desconto: %.2f\n", desconto);
    printf("Preco final: %.2f\n", preco_final);
    return 0;
}
