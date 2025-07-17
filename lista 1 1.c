#include <stdio.h>

int main() {
    int altura, i, j, espacos;
 
    printf("Digite a altura do Triangulo de Pascal: ");
    scanf("%d", &altura);

    if (altura < 1) {
        printf("Altura invalida! Deve ser maior ou igual a 1.\n");
        return 1;
    }
    
    int triangulo[altura][altura];

    for (i = 0; i < altura; i++) {

        triangulo[i][0] = 1;
        triangulo[i][i] = 1;

        for (j = 1; j < i; j++) {
            triangulo[i][j] = triangulo[i-1][j-1] + triangulo[i-1][j];
        }
    }

    for (i = 0; i < altura; i++) {
        for (espacos = 0; espacos < altura - i - 1; espacos++) {
            printf("  ");
        }

        for (j = 0; j <= i; j++) {
            printf("%4d", triangulo[i][j]);
        }
        
        printf("\n");
    }
    
    return 0;
}