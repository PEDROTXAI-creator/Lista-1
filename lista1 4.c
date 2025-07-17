#include <stdio.h>

int main() {
    int altura, opcao, i, j;
    
    printf("Digite a altura do quadrado: ");
    scanf("%d", &altura);

    if (altura < 1) {
        printf("Altura invalida! Deve ser maior que 0.\n");
        return 1;
    }

    printf("Escolha o tipo de quadrado:\n");
    printf("1 - Preenchido\n");
    printf("2 - Vazado\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    if (opcao != 1 && opcao != 2) {
        printf("Opcao invalida! Escolha 1 ou 2.\n");
        return 1;
    }

    for (i = 0; i < altura; i++) {
        for (j = 0; j < altura; j++) {
    
            if (opcao == 1 ||               
                i == 0 || i == altura-1 ||   
                j == 0 || j == altura-1) {  
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n"); 
    }
    
    return 0;
}