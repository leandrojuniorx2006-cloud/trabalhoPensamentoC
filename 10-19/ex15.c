#include <stdio.h>

int main() {
    int codigo;
    scanf("%d", &codigo);
    if (codigo == 1234) {
        printf("Acesso permitido\n");
    } else {
        printf("Codigo incorreto\n");
    }
    return 0;
}
