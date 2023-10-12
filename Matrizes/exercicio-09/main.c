#include <stdio.h>

int main()
{
    int M[2][3];
    int Tra[3][2];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o elemento da matriz posicao linha %d e coluna %d: ", i+1, j+1);
            scanf("%d", &M[i][j]);
        }
    }
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            Tra[j][i] = M[i][j];
        }
    }
    
    printf("A matriz transposta de M eh: \n");
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", Tra[i][j]);
            if (j == 1)
                printf("\n");
        }
    }
    
    return 0;
}
