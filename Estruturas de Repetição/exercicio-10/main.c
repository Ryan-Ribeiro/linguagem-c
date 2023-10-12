#include <stdio.h>

int main()
{
    int dimensao;
    printf("Digite a dimensao da matriz quadrada desejada: ");
    scanf("%d", &dimensao);
    
    int i, j;
    int vetor[dimensao][dimensao];
    
    for (i = 0; i < dimensao; i++) {
        for (j = 0; j < dimensao; j++) {
            printf("Digite o valor na posicao linha %d e coluna %d: ", i + 1, j + 1);
            scanf("%d", &vetor[i][j]);
        }
    }
    
    printf("MATRIZ FORMADA: \n");
    
    for (i = 0; i < dimensao; i++) {
        for (j = 0; j < dimensao; j++) {
            printf("%d ", vetor[i][j]);
            if (j == dimensao - 1)
            printf("\n");
        }
    }
    
    return 0;
}



