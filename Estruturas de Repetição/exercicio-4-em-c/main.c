
#include <stdio.h>

int main()
{
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    printf("QUANTIDADE DE NUMEROS PARES ATE O NUMERO DIGITADO:");
    int numTemp = num;
    
    if (num % 2 == 0) {
        for (num; num >= 0; num = num - 2) {
                if (num == 0)
                    printf("%d", num);
                else
                    printf("%d, ", num);
        }
    }else {
        for (num = num - 1; num >= 0; num = num - 2) {
            if (num == 0)
                printf("%d", num);
            else
            printf("%d, ", num);
        }
    }
    return 0;
}

