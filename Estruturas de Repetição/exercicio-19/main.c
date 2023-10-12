#include <stdio.h>

int main()
{

    int numeroPedido = 1;
    float valorTotal;
    while (numeroPedido != 0) {
        printf("###########################\n");
        printf("DIGITE O NUMERO DO PEDIDO: ");
        scanf("%d", &numeroPedido);
        
        if (numeroPedido == 0) {
            getchar( );
            printf("VALOR TOTAL DA COMPRA: %.2f \n", valorTotal);
            printf("FIM DO PEDIDO.");
            break;
        }
        
        printf("Digite a data do pedido no formato Dia: ");
        int dataDia;
        scanf("%d", &dataDia);
        
        int dataMes;
        printf("Digite a data do pedido no formato Mes: ");
        scanf("%d", &dataMes);
        
        int dataAno;
        printf("Digite a data do pedido no formato Ano: ");
        scanf("%d", &dataAno);
        
        printf("Data do pedido: %d / %d / %d \n", dataDia, dataMes, dataAno);
        
        printf("Digite o preço unitário: ");
        float precoUnitario;
        scanf("%f", &precoUnitario);
        
        printf("Digite a quantidade de produtos: ");
        int quantidade;
        scanf("%d", &quantidade);
        
        valorTotal = precoUnitario * quantidade + valorTotal;
        
    }
    return 0;
}


