#include <stdio.h>

int main()
{
    int num = 2;
    
    while (num > 1 ) {
        
        printf("Digite um numero inteiro positivo: \n");
        scanf("%d", &num);
        
        if(num <= 1) {
            printf("ERRO! O NUMERO DIGITADO DEVE SER INTEIRO POSITIVO.");
            break;
        }
        
        int i;
        int produto = num;
        printf("O fatorial dele é: \n");
        for (i = num - 1; i >= 1; i--){
            if (i == 1){
                printf("%d = ", i);
                produto = produto * i;
                printf("%d \n", produto);
            }
            else{
                if (i == num - 1)
                printf("%d * ", num);
                
                printf("%d * ", i);
                produto = produto * i;
            }
        }
    }

    return 0;
}