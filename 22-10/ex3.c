#include <stdio.h>
int main() {
    char nome[50];
    int idade;
    char turma;
    scanf("%49s %d %c", nome, &idade, &turma);
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Turma: %c\n", turma);
    return 0;
}
