#include <stdio.h>

int main()
{
    float arrayReal[10];
    
    for (int i = 0; i < 10; i++) {
        printf("Digite um valor para guardar na posicao %d: ", i+1);
        scanf("%f", &arrayReal[i]);
    }
    
    for (int i = 0; i < 10; i++) {
        printf("%.2f --- %p \n", arrayReal[i], &arrayReal[i]);
    }

    return 0;
}
