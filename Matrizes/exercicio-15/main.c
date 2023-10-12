#include <stdio.h>

int main()
{
    printf("=== CADASTRO DE VENDAS ===\n\n");
    double vendas[12][4];
    float vendasMes;
    float vendasAnual;
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Digite o valor total da venda no Mes %d e semana %d: R$ ", i+1, j+1);
            scanf("%lf", &vendas[i][j]);
        }
    }
    
    printf("\n\n=== QUADRO DE VENDAS ===\n\n");
    
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 4; j++) {
            vendasMes = vendasMes + vendas[i][j];
            printf("Vendas na Semana %d do Mes %d: R$ %.2f\n", j+1, i+1, vendas[i][j]);
            vendasAnual = vendasAnual + vendasMes;
        }
        printf("Vendas no Mes %d: R$ %.2f\n\n", i+1, vendasMes);
        vendasMes = 0;
    }
    
    printf("Total de vendas no ano: %.2f", vendasAnual);
    
    return 0;
}
