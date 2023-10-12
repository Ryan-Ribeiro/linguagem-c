#include <stdio.h>

int main()
{
    printf("Floricultura O vento das folhas\n\n");
    
    char nomePlanta[10][100];
    int estoqueMinimo[10];
    int estoqueAtual[10];
    
    for (int i = 0; i < 10; i++) {
        printf("Digite o nome da planta %d: ", i+1);
        fgets(nomePlanta[i], 100, stdin);
        
        printf("Digite o estoque minimo da planta %s: ", nomePlanta[i]);
        scanf("%d", &estoqueMinimo[i]);
        
        printf("Digite o estoque atual da planta %s: ", nomePlanta[i]);
        scanf("%d", &estoqueAtual[i]);
        printf("\n");
        getchar( );
    }
    
    for (int i = 0; i < 10; i++) {
        if (estoqueAtual[i] < estoqueMinimo[i]) {
            printf("A planta %s precisa de reposicao de estoque.\n", nomePlanta[i]);
        }
    }
    
    return 0;
}

