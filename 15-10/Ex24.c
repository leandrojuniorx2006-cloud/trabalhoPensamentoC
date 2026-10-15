
#include <stdio.h>

int main() {
    float horas, valorHora, salario;

    printf("Digite as horas trabalhadas na semana: ");
    scanf("%f", &horas);

    printf("Digite o valor da hora normal: R$ ");
    scanf("%f", &valorHora);

    if (horas > 40) {
        salario = (40 * valorHora) + ((horas - 40) * valorHora * 1.5);
    } else {
        salario = horas * valorHora;
    }

    printf("Salario semanal: R$ %.2f\n", salario);

    return 0;
}
