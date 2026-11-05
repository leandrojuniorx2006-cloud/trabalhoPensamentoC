#include <stdio.h>

int main() {
    int total_minutos, horas, minutos;
    scanf("%d", &total_minutos);
    horas = total_minutos / 60;
    minutos = total_minutos % 60;
    printf("Horas: %d\n", horas);
    printf("Minutos: %d\n", minutos);
    return 0;
}
