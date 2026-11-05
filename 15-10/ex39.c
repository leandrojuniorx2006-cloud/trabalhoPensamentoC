#include <stdio.h>

int main() {
    int i;
    float temp, maxima, minima;

    for (i = 1; i <= 7; i++) {
        printf("Temperatura do dia %d: ", i);
        scanf("%f", &temp);

        if (i == 1) {
            maxima = temp;
            minima = temp;
        } else {
            if (temp > maxima) {
                maxima = temp;
            }
            if (temp < minima) {
                minima = temp;
            }
        }
    }

    printf("\nTemperatura maxima da semana: %.1f\n", maxima);
    printf("Temperatura minima da semana: %.1f\n", minima);

    return 0;
}
