exercício 6:

#include <stdio.h>
 
int main() {
    char palavra[50];
    int vogais = 0, consoantes = 0;
 
    printf("Digite uma palavra: ");
    scanf("%49s", palavra);
 
    for (int i = 0; palavra[i] != '\0'; i++) {
        char c = palavra[i];
 
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            vogais++;
        } else {
            consoantes++;
        }
    }
 
    printf("Vogais: %d\n", vogais);
    printf("Consoantes: %d\n", consoantes);
 
    return 0;
}
