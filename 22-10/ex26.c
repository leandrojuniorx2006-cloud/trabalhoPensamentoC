#include <stdio.h>

int main() {
    int assinatura_ativa;

    printf("Assinatura ativa? (1 = sim, 0 = nao): ");
    scanf("%d", &assinatura_ativa);

    if (!assinatura_ativa) {
        printf("Exibir anuncios\n");
    } else {
        printf("Reproducao sem anuncios\n");
    }

    return 0;
}
