#include <stdio.h>

int main()
{
    int A[4][5];
    int SOMA = 0;
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Digite um numero a ser guardado na matriz linha %d e coluna %d: ", i+1, j+1);
            scanf("%d", &A[i][j]);
            SOMA = SOMA + A[i][j];
        }
    }
    
    printf("\nSoma de todos os elementos da matriz fornecida: %d", SOMA);
    
    return 0;
}
