//Padilha fez
#include <stdio.h>
#include <stdbool.h>
int main() {
    float nota1, nota2, nota3, soma, media;
    int contador_aprovados = 0;
    int contador_reprovados = 0;
    int contador_exames = 0;
    char encerramento;
    

    while (true){
        printf("\nDigite a primeira nota: ");
        scanf("%f", &nota1);
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);
        printf("Digite a terceira nota: ");
        scanf("%f", &nota3);
        soma = nota1 + nota2 + nota3;
        media = soma / 3;


        if(media >= 7 && media <= 10){
            printf("Aprovado!!");
            contador_aprovados++;
        } else if (media >= 5 && media < 7){
            printf("Exame de Recuperação");
            contador_exames++;
        } else if(media < 5){
            printf("Reprovado!");
            contador_reprovados++;
        } else if(media < 0){
            printf("Digite corretamente, só aceita numeros positivos;");
        }
        
        printf("\ndigite (y) para encerrar e ter ser relatorio ou continuar (n): ");
        scanf(" %c", &encerramento);
        if (encerramento == 'y'){
            printf("Relatórios de alunos: \n");
            printf("Alunos reprovados: %d\n", contador_reprovados);
            printf("alunos aprovados: %d\n", contador_aprovados);
            printf("Alunos em exame: %d\n", contador_exames);
            break;
        }
        else if(encerramento == 'n'){
            continue;
        }
    }
    
    

    
    
    return 0;
}
