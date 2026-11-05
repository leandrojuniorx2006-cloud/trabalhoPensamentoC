#include <stdio.h>

int main() {
    float temperatura;
    scanf("%f", &temperatura);
    if (temperatura > 30) {
        printf("Alerta de temperatura\n");
    } else {
        printf("Temperatura dentro do limite\n");
    }
    return 0;
}
