#include <stdio.h>

int main()
{
    int num;
    printf("Digite um numero inteiro: \n");
    scanf("%d", &num);
    printf("O fatorial dele é: \n");
    
    int i;
    int produto = num;
    
    for (i = num - 1; i >= 1; i--){
        if (i == 1){
            printf("%d = ", i);
            produto = produto * i;
            printf("%d ", produto);
        }
        else{
            if (i == num - 1)
            printf("%d * ", num);
            
            printf("%d * ", i);
            produto = produto * i;
        }
    }

    return 0;
}




