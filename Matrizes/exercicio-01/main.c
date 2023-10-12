#include <stdio.h>

int main()
{
    int matriz[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Digite o elemento da linha %d e coluna %d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("\nMatriz criada: \n \n");
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
            if (j == 4)
            printf("\n");
        }
    }

    return 0;
}
