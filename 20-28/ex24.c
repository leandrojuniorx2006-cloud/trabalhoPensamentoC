#include <stdio.h>

int main() {
    int cadastro, autorizacao;
    scanf("%d %d", &cadastro, &autorizacao);
    if (cadastro == 1 && autorizacao == 1) {
        printf("Retirada permitida\n");
    } else {
        printf("Retirada nao permitida\n");
    }
    return 0;
}
