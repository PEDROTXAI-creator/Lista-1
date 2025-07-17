#include <stdio.h>

int main() {
    int B, L, A;

    printf("Digite o valor de B : ");
    scanf("%d", &B);

    if (B < 3 || B % 2 == 0) {
        printf("Valor invalido! B deve ser impar e maior ou igual a 3.\n");
        return 1;
    }

    printf("Digite o valor de L: ");
    scanf("%d", &L);
 
    if (L < 1 || L % 2 == 0 || L > B/2) {
        printf("Valor invalido! L deve ser impar, pelo menos 1 e nao pode ultrapassar metade de B.\n");
        return 1;
    }

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    if (A < 2 || A > B/2) {
        printf("Valor invalido! A deve ser pelo menos 2 e nao pode ultrapassar metade de B.\n");
        return 1;
    }

    for (int asteriscos = 1, espacos = B/2; asteriscos <= B; asteriscos += 2, espacos--) {

        for (int i = 0; i < espacos; i++) {
            printf(" ");
        }

        for (int i = 0; i < asteriscos; i++) {
            printf("*");
        }
        
        printf("\n");
    }

    int espacos_tronco = (B - L) / 2;
    for (int i = 0; i < A; i++) {
   
        for (int j = 0; j < espacos_tronco; j++) {
            printf(" ");
        }

        for (int j = 0; j < L; j++) {
            printf("*");
        }
        
        printf("\n");
    }
    
    return 0;
}