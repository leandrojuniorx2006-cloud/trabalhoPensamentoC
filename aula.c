#include <stdio.h>

int main() {
    int N, i;
    float numero, maior, menor, soma, media;

    printf("Quantos numeros voce quer digitar? ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("A quantidade deve ser maior que zero.\n");
        return 1;
    }

    soma = 0;

    for (i = 1; i <= N; i++) {
        printf("Digite o %dº numero: ", i);
        scanf("%f", &numero);

        if (i == 1) {
            maior = numero;
            menor = numero;
        } else {
            if (numero > maior) {
                maior = numero;
            }

            if (numero < menor) {
                menor = numero;
            }
        }

        soma += numero;
    }

    media = soma / N;

    printf("\nMaior valor: %.2f\n", maior);
    printf("Menor valor: %.2f\n", menor);
    printf("Media: %.2f\n", media);

    return 0;
}