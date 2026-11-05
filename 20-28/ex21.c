#include <stdio.h>

int main() {
    float planejado, gasto;
    scanf("%f %f", &planejado, &gasto);
    if (gasto < planejado) {
        printf("Disponivel: R$ %.2f\n", planejado - gasto);
    } else if (gasto == planejado) {
        printf("Orcamento totalmente utilizado\n");
    } else {
        printf("Gasto a mais: R$ %.2f\n", gasto - planejado);
    }
    return 0;
}
