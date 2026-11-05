#include <stdio.h>

int main() {
    int i, soma = 0;

    printf("Numeros de 1 a 100 divisiveis por 3 e por 5:\n");

    for (i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d\n", i);
            soma = soma + i;
        }
    }

    printf("\nTotal acumulado: %d\n", soma);

    return 0;
}
