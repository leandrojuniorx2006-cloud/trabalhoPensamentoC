#include <stdio.h>

int main() {
    int n, i;
    long long fatorial = 1;

    printf("Digite um numero inteiro nao negativo: ");
    scanf("%d", &n);

    if (n < 0 || n > 20) {
        printf("Erro: digite um valor entre 0 e 20.\n");
        return 1;
    }

    for (i = n; i >= 1; i--) {
        fatorial = fatorial * i;
    }

    printf("%d! = %lld\n", n, fatorial);

    return 0;
}
