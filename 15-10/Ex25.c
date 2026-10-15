
#include <stdio.h>

int main() {
    float media, frequencia;

    printf("Digite a média semestral: ");
    scanf("%f", &media);

    printf("Digite o percentual de frequência: ");
    scanf("%f", &frequencia);

    if (media >= 6.0 && frequencia >= 75.0) {
        printf("Aluno aprovado!\n");
    } 
    
    else if (media >= 4.0 && media < 6.0 && frequencia >= 75.0) {
        printf("Aluno em recuperação.\n");
    } 
    
    else {
        printf("Aluno reprovado.\n");
    }

}
