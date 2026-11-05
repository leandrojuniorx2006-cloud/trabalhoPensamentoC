#include <stdio.h>

int main() {
    int estoque, pedido;
    scanf("%d %d", &estoque, &pedido);
    if (pedido <= estoque) {
        printf("Venda confirmada\nEstoque restante: %d\n", estoque - pedido);
    } else {
        printf("Estoque insuficiente\n");
    }
    return 0;
}
