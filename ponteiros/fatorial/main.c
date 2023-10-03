#include <stdio.h>

void fatorial(int *num, int *result) {
    *result = 1;
    for (int j = *num; j > 0; j--) {
        *result = *result * j;
    }
}

void vetFatorial(int *vet, int *novoVetor) {
    for (int i = 0; i < 10; i++) {
        fatorial(&vet[i], &novoVetor[i]);
    }
}

int main() {
    int vet[10];
    
    for (int i = 0; i < 10; i++) {
        printf("Digite um vetor a ser guardado na posicao %d: ", i+1);
        scanf("%d", &vet[i]);
    }

    int novoVetor[10];
    vetFatorial(vet, novoVetor);

    printf("Novo vetor, no qual todos os elementos foram fatoreados: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", novoVetor[i]);
    }

    return 0;
}

