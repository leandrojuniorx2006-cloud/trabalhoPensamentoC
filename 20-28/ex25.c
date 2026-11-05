#include <stdio.h>

int main() {
    int clube, cupom;
    scanf("%d %d", &clube, &cupom);
    if (clube == 1 || cupom == 1) {
        printf("Valor do frete: R$ 0.00\n");
    } else {
        printf("Valor do frete: R$ 12.00\n");
    }
    return 0;
}
