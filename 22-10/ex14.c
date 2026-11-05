#include <stdio.h>

int main() {
    float total_conta, valor_por_pessoa;
    int pessoas;
    scanf("%f %d", &total_conta, &pessoas);
    valor_por_pessoa = total_conta / pessoas;
    printf("Valor por pessoa: %.2f\n", valor_por_pessoa);
    return 0;
}
