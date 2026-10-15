#include <stdio.h>

int main() {
    char nome[] = "Circuito Integrado X100";
    float tensao = 5.0;
    int lote = 123456;
    char eficiencia = 'A';

    printf("=== FICHA TECNICA ===\n\n");
    printf("Nome do circuito: %s\n", nome);
    printf("Tensao nominal: %.1f V\n", tensao);
    printf("Lote de fabricacao: %d\n", lote);
    printf("Classe de eficiencia: %c\n", eficiencia);

    return 0;
}
