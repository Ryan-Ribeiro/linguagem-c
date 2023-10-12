#include <stdio.h>

int main()
{
    int Matriz[3][5];
    int somaColuna[5];
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Digite um numero inteiro para ser armazenado na matriz linha %d e coluna %d: ", i+1, j+1);
            scanf("%d", &Matriz[i][j]);
        }
    }
    
    for (int j = 0; j < 5; j++) {
        for (int i = 0; i < 3; i++) {
            somaColuna[j] = somaColuna[j] + Matriz[i][j];
        }
    }
    
    printf("Soma das colunas da Matriz fornecida: ");
    
    for (int i = 0; i < 5; i++) {
        if (i == 4)
            printf("%d", somaColuna[i]);
        else
            printf("%d, ", somaColuna[i]);
    }

    return 0;
}
