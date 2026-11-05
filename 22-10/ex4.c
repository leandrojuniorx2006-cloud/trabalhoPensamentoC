#include <stdio.h>
int main() {
    float preco;
    int qtd;
    scanf("%f %d", &preco, &qtd);
    printf("Total: %.2f\n", preco * qtd);
    return 0;
}
