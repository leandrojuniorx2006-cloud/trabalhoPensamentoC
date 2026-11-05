#include <stdio.h>
int main() {
    float preco, frete;
    scanf("%f %f", &preco, &frete);
    printf("Total: %.2f\n", preco + frete);
    return 0;
}
