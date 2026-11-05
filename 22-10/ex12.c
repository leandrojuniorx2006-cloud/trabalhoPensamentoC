#include <stdio.h>

int main() {
    int total_garrafas, capacidade_caixa, caixas_completas, resto;
    scanf("%d %d", &total_garrafas, &capacidade_caixa);
    caixas_completas = total_garrafas / capacidade_caixa;
    resto = total_garrafas % capacidade_caixa;
    printf("Caixas completas: %d\n", caixas_completas);
    printf("Garrafas sobram: %d\n", resto);
    return 0;
}
