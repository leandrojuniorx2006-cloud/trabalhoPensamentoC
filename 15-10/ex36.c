#include <stdio.h>

int main() {
    int k, i;
    int pares = 0, impares = 0;

    printf("Digite um numero inteiro positivo K: ");
    scanf("%d", &k);

    if (k <= 0) {
        printf("Erro: K deve ser positivo.\n");
        return 1;
    }

    for (i = 1; i <= k; i++) {
        if (i % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("\nCenso de 1 ate %d:\n", k);
    printf("Quantidade de pares: %d\n", pares);
    printf("Quantidade de impares: %d\n", impares);

    return 0;
}
