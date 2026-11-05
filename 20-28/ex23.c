#include <stdio.h>

int main() {
    float nota, freq;
    scanf("%f %f", &nota, &freq);
    if (nota >= 6.0 && freq >= 75.0) {
        printf("Certificado liberado\n");
    } else {
        printf("Certificado nao liberado\n");
    }
    return 0;
}
