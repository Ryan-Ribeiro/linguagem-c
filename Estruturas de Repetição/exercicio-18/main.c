#include <stdio.h>

int main()
{
    int quantidade;
    int idade;
    int menor21;
    int maior50;
    printf("QUANTAS PESSOAS QUER CADASTRAR? \n");
    scanf("%d", &quantidade);

    for (int i = 0; i < quantidade; i++) {
        printf("DIGITE A IDADE DA PESSOA %d: ", i + 1);
        scanf ("%d", &idade);
        
        if (idade < 21) {
            menor21 = menor21 + 1;
        } else {
            maior50 += 1;
        }
        
        if (i == quantidade - 1) {
            printf("EXISTEM %d PESSOAS MENORES QUE 21 ANOS. \n", menor21);
            printf("EXISTEM %d PESSOAS MAIORES QUE 50. \n", maior50);
        }
    }

    return 0;
}
