#include <stdio.h>

int main() {
    int reserva, carteirinha, documento;
    scanf("%d %d %d", &reserva, &carteirinha, &documento);
    if (reserva == 1 && (carteirinha == 1 || documento == 1)) {
        printf("Entrada permitida\n");
    } else {
        printf("Entrada nao permitida\n");
    }
    return 0;
}
