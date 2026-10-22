#include <stdio.h>

int main() {

    int cracha, id;

    printf("digite seu cracha e seu id:");
    scanf("%d %d", &cracha, &id);
    
    if(!(cracha == 123 && id == 1)){
        printf("Acesso Negado!");
    } else if(cracha == 123 && id == 1){
        printf("Acesso Permitido!");
    }
    else {
    printf("....");
}
} 
