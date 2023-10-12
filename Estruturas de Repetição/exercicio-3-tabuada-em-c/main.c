#include <stdio.h>

int main()
{
    int num;
    int i = 1;
    int produto;
    printf("DIGITE UM NUMERO PARA TER A TABUADA: \n");
    scanf("%d", &num);
    
    while (i <= 10) {
            printf("%d X ", num);
            printf("%d = ", i);
            produto = num * i;
            printf("%d \n", produto);
            i++;
    }

    return 0;
}


