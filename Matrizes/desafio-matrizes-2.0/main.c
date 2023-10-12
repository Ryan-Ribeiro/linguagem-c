#include <stdio.h>

int main()
{
    int matriz[5][5];
    int auxiliar[5][5];
    int diagonal[5][5];
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Digite um numero a ser armazenado na linha %d e coluna %d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
            auxiliar[i][j] = matriz[i][j];
        }
    }
    
    for (int j = 0; j < 5; j++) {  // trocar linha 2 e 5
        auxiliar[4][j] = matriz[1][j];
        auxiliar[1][j] = matriz[4][j];
    }
        
    for (int i = 0; i < 5; i++) {
        auxiliar[i][4] = matriz[i][2]; // trocar coluna 3 pela 5
        auxiliar[i][2] = matriz[i][4];
    }
    
    for (int i = 0; i < 5; i++) {
        int k;
        int l = 4;
        for (int j = 0; j< 5; j++) {
            if (i == j) {
                auxiliar[i][j] = matriz[i][l]; // diagonal principal pela secundaria
            }
            
            if (j == 4) {
                l = l - k;
            for (int j = 0; j < 5; j++) {
                if (i == j)
                    auxiliar[i][l] = matriz[i][j];    // diagonal secundária pela principal
            }
            
            }
            
            printf("%d ", matriz[i][j]);
            if (j == 4)
                printf("\n");
        }
        k += 1;
    }
    
    printf("\n");
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", auxiliar[i][j]);
            if (j == 4)
                printf("\n");
        }
    }
    return 0;
}


