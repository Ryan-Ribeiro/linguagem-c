#include <stdio.h>

int main()
{
    int vetor[5];
    int *valor = vetor;
    
    for (int i = 0; i < 5; i++) {
        printf("Digite um valor a ser guardado no vetor:");
        scanf ("%d", valor);
        valor++;
    }
    
    printf("O dobro de cada valor:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vetor[i] * 2);
    }
    
    return 0;
}


