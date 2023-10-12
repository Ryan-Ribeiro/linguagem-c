#include <stdio.h>

int main()
{
    printf("Dez primeiros termos da Sequencia Fibonacci: ");
    int i = 1;
    int soma;
    int a = 1;
    int b;
    
    while (i <= 9) {
        
        if (i == 1)
        printf("%d ", i);
        
        soma = a + b;
        printf("%d ", soma);
        
        b = a;
        a = soma;
        
        i++;
    }
    
    return 0;
}
