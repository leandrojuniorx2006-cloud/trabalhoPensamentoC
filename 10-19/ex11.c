#include <stdio.h>

int main() {
    float distancia, litros, consumo;
    scanf("%f %f", &distancia, &litros);
    consumo = distancia / litros;
    printf("Consumo medio: %.2f km/l\n", consumo);
    return 0;
}
