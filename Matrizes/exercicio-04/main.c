#include <stdio.h>

int main()
{
    int matriz[4][4];
    // Só existe paridade para numeros inteiros. Logo, não existe razão para declarar a matriz como do tipo double.
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Digite o numero na linha %d e coluna %d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("\nElementos impares na matriz: ");
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] % 2 == 1) {
                printf("%d ", matriz[i][j]);
            }
        }
    }
    return 0;
}
