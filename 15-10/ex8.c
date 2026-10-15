#include <stdio.h>

int main() {
    int dia = 15;
    int mes = 10;
    int ano = 2026;
    float versao = 2.5;

    printf("Data de lancamento: %02d/%02d/%d | Versao do sistema: %.1f\n",
           dia, mes, ano, versao);

    return 0;
}
