#include <stdio.h>

int main() {
    float nota;

    printf("Digite a nota: ");
    scanf("%f", &nota);

    if (nota < 0 || nota > 10) {
        printf("Nota invalida\n");
    } else {
        printf("Nota valida\n");
    }

    return 0;
}
