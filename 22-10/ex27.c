#include <stdio.h>

int main() {
    int reserva_confirmada, tem_carteirinha, tem_documento;

    printf("Reserva confirmada? (1 = sim, 0 = nao): ");
    scanf("%d", &reserva_confirmada);

    printf("Possui carteirinha? (1 = sim, 0 = nao): ");
    scanf("%d", &tem_carteirinha);

    printf("Possui documento de identificacao? (1 = sim, 0 = nao): ");
    scanf("%d", &tem_documento);

    if (reserva_confirmada == 1 && (tem_carteirinha == 1 || tem_documento == 1)) {
        printf("Entrada permitida\n");
    } else {
        printf("Entrada nao permitida\n");
    }

    return 0;
}
