#include <stdio.h>

int main() {
    int requisicoes = 1500;
    float memoria = 72.5;
    char estado = 'A';
    char protocolo[] = "TCP/IP";

    printf("Requisicoes: %d | Memoria RAM: %.2f%% | Estado: %c | Protocolo: %s\n",
           requisicoes, memoria, estado, protocolo);

    return 0;
}
