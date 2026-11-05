#include <stdio.h>

int main() {
    int pontuacao;
    scanf("%d", &pontuacao);
    if (pontuacao < 1000) {
        printf("Bronze\n");
    } else if (pontuacao <= 1499) {
        printf("Prata\n");
    } else if (pontuacao <= 1999) {
        printf("Ouro\n");
    } else {
        printf("Diamante\n");
    }
    return 0;
}
