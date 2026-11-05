#include <stdio.h>

int main() {
    int i, idade;
    int maiores = 0, menores = 0;

    for (i = 1; i <= 12; i++) {
        printf("Idade do inscrito %d: ", i);
        scanf("%d", &idade);

        if (idade >= 18) {
            maiores++;
        } else {
            menores++;
        }
    }

    printf("\nCom 18 anos ou mais: %d\n", maiores);
    printf("Com menos de 18 anos: %d\n", menores);

    return 0;
}
