#include <stdio.h>

int main() {
    int inicio, fim, passo, i;

    printf("Limite inferior: ");
    scanf("%d", &inicio);

    printf("Limite superior: ");
    scanf("%d", &fim);

    printf("Passo: ");
    scanf("%d", &passo);

    if (passo <= 0 || inicio > fim) {
        printf("Erro: o passo deve ser positivo e o limite inferior deve ser menor ou igual ao superior.\n");
        return 1;
    }

    printf("\nAscendente: ");
    for (i = inicio; i <= fim; i = i + passo) {
        if (i != inicio) {
            printf(", ");
        }
        printf("%d", i);
    }

    printf("\nDescendente: ");
    for (i = fim; i >= inicio; i = i - passo) {
        if (i != fim) {
            printf(", ");
        }
        printf("%d", i);
    }

    printf("\n");

    return 0;
}
