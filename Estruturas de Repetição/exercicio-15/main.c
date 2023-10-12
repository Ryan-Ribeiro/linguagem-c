#include <stdio.h>

int main()
{
    int num = 1;
    int contador;
    
    while (num != 0) {
        printf("DIGITE UM NUMERO INTEIRO: ");
        scanf("%d", &num);
        
        if (num >= 100 && num <= 200) {
            contador = contador + 1;
        }
        if (num == 0) {
            printf("FORAM DIGITADOS %d NUMEROS ENTRE 100 E 200.", contador);
        }
    }

    return 0;
}



