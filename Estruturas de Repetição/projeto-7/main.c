#include <stdio.h>

int main()
{
    int num, i, primo;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);
    printf("VERIFICANDO SE %d eh primo... \n", num);

    for (i = num - 1; i >= 1; i--) {
        
        if (i != 1) {
            if (num % i == 0) {
                printf("O numero %d nao eh primo.", num);
                break;
            }
        } else {
            printf("O numero %d eh primo!", num);
        }    

    }
    
    return 0;
}






