#include <stdio.h>

int main() {
    int cadastro, autorizacao;

    printf("Cadastro ativo? (1 = sim, 0 = nao): ");
    scanf("%d", &cadastro);

    printf("Apresentou autorizacao? (1 = sim, 0 = nao): ");
    scanf("%d", &autorizacao);

    if (cadastro == 1 && autorizacao == 1) {
        printf("Retirada permitida\n");
    } else {
        printf("Retirada nao permitida\n");
    }

    return 0;
}
