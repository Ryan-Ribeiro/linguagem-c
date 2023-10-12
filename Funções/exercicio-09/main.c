#include <stdio.h>

float Divisao(int dividendo, int divisor) {
    int qtdDivisores;
    for (int i = 1; i < divisor; i++) {
        if (dividendo % i == 0) {
            qtdDivisores += 1;
        }
    }
    return qtdDivisores;
}

int main()
{
    int dividendo;
    printf("Digite um dividendo inteiro: ");
    scanf("%d", &dividendo);
    
    int divisor;
    do {
        printf("Digite um divisor inteiro menor ou igual ao dividendo: ");
        scanf("%d", &divisor);
    } while (divisor > dividendo);
    
    int qtdDivisores = Divisao(dividendo, divisor);
    
    printf("Quantidade de divisores inteiros de %d ate %d: %d", dividendo, divisor, qtdDivisores);

    return 0;
}
