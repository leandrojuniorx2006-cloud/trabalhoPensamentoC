#include <stdio.h>

int main() {
    int assinatura;
    scanf("%d", &assinatura);
    if (!assinatura) {
        printf("Exibir anuncios\n");
    } else {
        printf("Reproducao sem anuncios\n");
    }
    return 0;
}
