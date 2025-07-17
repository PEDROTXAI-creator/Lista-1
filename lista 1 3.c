#include <stdio.h>

int main() {
    int largura, i, j;
   
    printf("Digite a largura central do losango (deve ser impar): ");
    scanf("%d", &largura);
    
    if (largura % 2 == 0) {
        printf("A largura central deve ser um numero impar!\n");
        return 1;
    }
   
    for (i = 1; i <= largura; i += 2) {

        for (j = 0; j < (largura - i) / 2; j++) {
            printf(" ");
        }
        
        for (j = 0; j < i; j++) {
            printf("X");
        }
        printf("\n");
    }
    

    for (i = largura - 2; i >= 1; i -= 2) {

        for (j = 0; j < (largura - i) / 2; j++) {
            printf(" ");
        }

        for (j = 0; j < i; j++) {
            printf("X");
        }
        printf("\n");
    }
    
    return 0;
}