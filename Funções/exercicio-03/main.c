#include <stdio.h>
char verificaPrimo (int num) {
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return '1';
        } else if (i == num - 1){
            return '0';
        }
    }
}

int main()
{
    int num;
    printf("Verificar se um numero é primo: ");
    scanf("%d", &num);
    
    char ehPrimo = verificaPrimo(num);
    
    if (ehPrimo == '1') {
        printf("O numero %d nao eh primo.", num);
    } else {
        printf("O numero %d eh primo.", num);
    }
    
    return 0;
}

