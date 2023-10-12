#include <stdio.h>
int dobro(int num) {
    int n = num * 2;
    return n;
}

int main()
{
    int num[3];
    for (int i = 0; i < 3; i++) {
        printf("Digite o numero %d de 3 para ter o seu dobro: ", i+1);
        scanf("%d", &num[i]);
    }
    
    printf("\n");
    
    for (int i = 0; i < 3; i++) {
        int resultado = dobro(num[i]);
        printf("O dobro do numero %d eh: %d\n", num[i], resultado);
    }

    return 0;
}
