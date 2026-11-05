#include <stdio.h>

int main() {
    int opcao;
    scanf("%d", &opcao);
    switch (opcao) {
        case 1: printf("Agua - R$ 3.00\n"); break;
        case 2: printf("Suco - R$ 5.00\n"); break;
        case 3: printf("Cafe - R$ 4.00\n"); break;
        default: printf("Opcao invalida\n"); break;
    }
    return 0;
}
