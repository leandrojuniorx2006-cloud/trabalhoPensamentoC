#include <stdio.h>

int main() {
    int i;
    float preco;

    printf("Digite o preco de uma copia: ");
    scanf("%f", &preco);

    printf("\nQuantidade | Valor\n");

    for (i = 1; i <= 10; i++) {
        printf("%d copias: R$ %.2f\n", i, i * preco);
    }

    return 0;
}
