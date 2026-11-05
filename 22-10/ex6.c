#include <stdio.h>
int main() {
    int inicial, recebido, vendido;
    scanf("%d %d %d", &inicial, &recebido, &vendido);
    printf("Estoque final: %d\n", inicial + recebido - vendido);
    return 0;
}
