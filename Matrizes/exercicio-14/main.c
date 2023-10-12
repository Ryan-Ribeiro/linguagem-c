#include <stdio.h>

int main()
{
    int Matriz[5][5];
    int coluna;
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Digite o valor na posicao linha %d e coluna %d: ", i+1, j+1);
            scanf("%d", &Matriz[i][j]);
        }
    }
    
    while (coluna < 1 || coluna > 5) {
        printf("Digite uma coluna a ser apresentada: ");
        scanf("%d", &coluna);
    }
    
    printf("\n");
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (j == coluna - 1)
                printf("%d\n", Matriz[i][j]);
        }
    }

    return 0;
}


