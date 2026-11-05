#include <stdio.h>

int main() {
    float renda, parcela;
    int situacao;

    printf("Digite a renda mensal bruta: ");
    scanf("%f", &renda);

    printf("Digite o valor da parcela do emprestimo: ");
    scanf("%f", &parcela);

    printf("Situacao no cadastro de protecao ao credito (0 = adimplente, 1 = inadimplente): ");
    scanf("%d", &situacao);

    if (parcela <= renda * 0.30 && situacao == 0) {
        printf("\nPARECER: EMPRESTIMO APROVADO\n");
    } else {
        printf("\nPARECER: EMPRESTIMO RECUSADO\n");
    }

    return 0;
}
