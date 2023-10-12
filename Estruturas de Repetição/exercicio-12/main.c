#include <stdio.h>

int main()
{
    char nomes[5][300];
    float salario;
    float aliquotaImposto;
    
    for (int i = 0; i < 5; i++) {
        getchar( );
        printf("Nome da pessoa: ");
        fgets(nomes[i], 30, stdin);
        
        printf("Digite o salario bruto da pessoa: ");
        scanf("%f", &salario);
        
        
        if (salario < 1300) {
            aliquotaImposto = 0;
            printf("Nome: %sSalario: %.2f \nAliquota do imposto de renda: ISENTO \n\n", nomes[i], salario);
        }
        
        if (salario >= 1300 && salario < 2300) {
            aliquotaImposto = salario * 0.1;
            printf("Nome: %sSalario: %.2f \nAliquota do imposto de renda: %.2f \n\n", nomes[i], salario, aliquotaImposto);
        }
        
        if (salario >= 2300) {
            aliquotaImposto = salario * 0.15;
            printf("Nome: %sSalario: %.2f \nAliquota do imposto de renda: %.2f \n\n", nomes[i], salario, aliquotaImposto);
        }
    }

    return 0;
}

