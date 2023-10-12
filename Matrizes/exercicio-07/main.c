#include <stdio.h>

int main()
{
    int M[5][3];
    int somaLinhas[5];
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o elemento da matriz M na linha %d e coluna %d: ", i+1, j+1);
            scanf("%d", &M[i][j]);
        }
    }
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            somaLinhas[i] = somaLinhas[i] + M[i][j];
        }
    }
    
    printf("\nSoma das linhas da matriz M:\n");
    for (int i = 0; i < 5; i++) {
        printf("Linha %d: %d; ", i+1, somaLinhas[i]);
    }
    return 0;
}
