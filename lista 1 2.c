#include <stdio.h>

int main() {
    int N;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    if (N < 2) {
        printf("Valor invalido! N deve ser maior ou igual a 2.\n");
        return 1;
    }

    for (int linha = 1; linha <= N; linha++) {

        for (int espaco = 0; espaco < N - linha; espaco++) {
            printf("   "); 
        }

        for (int num = 1; num <= linha; num++) {
            printf("%2d ", num);
        }
     
        for (int num = linha-1; num >= 1; num--) {
            printf("%2d ", num);
        }
        
        printf("\n"); 
    }
    
    return 0;
}