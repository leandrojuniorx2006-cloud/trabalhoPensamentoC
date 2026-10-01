#include <stdio.h>
#include <stdbool.h>
int main() {

    int numero;
    char veri;

    while (true){
        printf("Digite um numero: ");
        scanf("%d", &numero);
        for (int contador = 1; contador <= 10; contador++) {
            printf("%d x %d = %d\n",
                   numero,
                   contador,
                   numero * contador);
        }

        
        printf("\nSe deseja quebrar o codigo, digite (y)caso contrario(n)\n");
        scanf(" %c", &veri);

        if(veri == 'y'){
            printf("Obrigado por usar o sistema");
            break;
        } else if(veri == 'n'){
            continue;
        } else{
            printf("Digite corretamente");
        }
    }




    
    return 0;
}
