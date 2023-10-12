#include <stdio.h>

int main()
{
    int numeroConsumidor = 1;
    int n;
    int k;
    float totalConsumidor1;
    float totalConsumidor2;
    float totalConsumidor3;
    
    while (numeroConsumidor != 0) {
        printf("Digite o número do consumidor: ");
        scanf("%d", &numeroConsumidor);
        
        float kwhMensal;
        printf("Digite a quantidadede kWh cosumida durante o mes: ");
        scanf("%f", &kwhMensal);

        
        int codigo;
        float taxa;
        printf("Digite o codigo do consumidor: 1 - residencial; 2 - comercial; 3 - industrial");
        scanf("%d", &codigo);
        
        if (codigo == 1) {
            taxa = 0.3;
        }
        
        if (codigo == 2) {
            taxa = 0.5;
        }
        
        if (codigo == 3) {
            taxa = 0.7;
        }
        
        float custoTarifa = kwhMensal * taxa;
        printf("Custo total mensal: %f", custoTarifa);
        
        if (codigo == 1) {
            totalConsumidor1 = kwhMensal + totalConsumidor1;
            printf("%f", totalConsumidor1);
            n = n + 1;
        }
        
        if (codigo == 2) {
            totalConsumidor2 = kwhMensal + totalConsumidor2;
            printf("%f", totalConsumidor2);
            k = k + 1;
        }
        
        if (codigo == 3) {
            totalConsumidor3 = kwhMensal + totalConsumidor3;
            printf("%f", totalConsumidor3);
        }
        
    }
    
    float mediaConsumo1e2 = totalConsumidor1 + totalConsumidor2;
    mediaConsumo1e2 = mediaConsumo1e2 / (n + k);
    printf("A media do consumo dos tipos 1 e 2 eh de: ", mediaConsumo1e2);
    
    return 0;
}
