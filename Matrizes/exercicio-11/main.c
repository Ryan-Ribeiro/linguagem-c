#include <stdio.h>

int main()
{
    printf("Esmalteria\n\nPES - R$ 10; MAOS - R$ 15; PEDICURE - R$ 30\n\n");
    char manicure[5][30];
    int servico[3] = {10, 15, 30};
    double salario[5];
    int qtdPes, qtdMao, qtdPedicure;
    
    for (int j = 0; j < 5; j++) {
        printf("Digite o nome da manicure %d: ", j+1);
        fgets(manicure[j], 30, stdin);
        
        printf("Digite a quantidade de 'PES' que a empregada %s fez no mes: ", manicure[j]);
        scanf("%d", &qtdPes);
        salario[j] = salario[j] + servico[0] * qtdPes;
        
        printf("Digite a quantidade de 'MAOS' que a empregada %s fez no mes: ", manicure[j]);
        scanf("%d", &qtdMao);
        salario[j] = salario[j] + servico[1] * qtdMao;
        
        printf("Digite a quantidade de 'PEDICURE' que a empregada %s fez no mes: ", manicure[j]);
        scanf("%d", &qtdPedicure);
        salario[j] = salario[j] + servico[2] * qtdPedicure;
        printf("\n");
        getchar( );
    }
    

    for (int j = 0; j < 5; j++) {
        printf("=================\n");
        printf("SALDO DA EMPREGADA %s", manicure[j]); 
        salario[j] = salario[j] / 2;
        printf("SALARIO: R$ %.2f\n", salario[j]);
    }
    
    return 0;
}

