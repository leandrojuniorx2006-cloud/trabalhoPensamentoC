#include <stdio.h>

int main() {
    int n, i;
    float valor, soma = 0, media;

    printf("Quantidade de medicoes: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Erro: a quantidade deve ser maior que zero.\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        printf("Digite o valor %d: ", i);
        scanf("%f", &valor);
        soma = soma + valor;
    }

    media = soma / n;

    printf("\nSomatorio: %.2f\n", soma);
    printf("Media aritmetica: %.2f\n", media);

    return 0;
}
