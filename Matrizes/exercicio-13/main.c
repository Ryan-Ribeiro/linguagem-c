#include <stdio.h>

int main()
{
    int Matriz[5][5];
    int linha;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Digite o valor da posicao linha %d e coluna %d: ", i+1, j+1);
            scanf("%d", &Matriz[i][j]);
        }
    }
    
    while (linha < 1 || linha > 5) {
        printf("Digite a linha a ser apresentada: ");
        scanf("%d", &linha);
    }
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == linha - 1)
                printf("%d ", Matriz[i][j]);
        }
    }
    
    return 0;
}

