#include <stdio.h>

int main()
{
    int idade;
    int idadeExcelente;
    float mediaExcelente;
    int opiniao;
    int opiniao1;
    int opiniao2;
    int opiniao3;
    float mediaIdadeExcelente;
    float percentBom;
    
    for (int i = 1; i < 9; i++) {
        printf("Digite a idade da pessoa: ");
        scanf("%d", &idade);
        
        printf("Digite 1 para Excelente, 2 para Regular e 3 para Bom: \n");
        scanf("%d", &opiniao);
        
        if (opiniao == 1) {
            opiniao1 += 1;
            idadeExcelente += idade;
        }
        
        if (opiniao == 2) {
            opiniao2 += 1;
        }
        
        if (opiniao == 3) {
            opiniao3 += 1;
        }
        
        if ( i == 8) {
            mediaIdadeExcelente = idadeExcelente / opiniao1;
            printf("A media das idades das pessoas que votaram 'Excelente' eh de: %.2f \n", mediaIdadeExcelente);
            
            printf("Quantidade de pessoas que votaram 'Regular': %d \n", opiniao3);
            
            percentBom =(opiniao1 + opiniao2 + opiniao3);
            percentBom = (opiniao3 / percentBom) * 100;

            printf("Percentagem de pessoas que responderam 'Bom' entre todos os votantes: %.2f", percentBom);
        }
    }

    return 0;
}

