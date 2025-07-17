#include <stdio.h>

int main() {
    int altura, opcao, i, j;

    printf("Digite a altura do triangulo: ");
    scanf("%d", &altura);

    if (altura < 1) {
        printf("Altura invalida! Deve ser maior que 0.\n");
        return 1;
    }

    printf("Escolha o tipo de triangulo:\n");
    printf("1 - Preenchido\n");
    printf("2 - Vazado\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    if (opcao != 1 && opcao != 2) {
        printf("Opcao invalida! Escolha 1 ou 2.\n");
        return 1;
    }

    for (i = 1; i <= altura; i++) {
        for (j = 1; j <= i; j++) {
            
            if (opcao == 1 ||               
                j == 1 || j == i ||         
                i == altura) {              
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n"); 
    }
    
    return 0;
}