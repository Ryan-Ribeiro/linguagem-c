#include <stdio.h>

float aplicarDesconto(float valorInicial, float desconto) {
    float valorFinal = valorInicial - valorInicial * desconto/100;
    return valorFinal;
}

int main()
{
    
    float valorInicial;
    float desconto;
    printf("Digite o valor da mercadoria desejada: ");
    scanf("%f", &valorInicial);
    
    printf("Digite o valor do desconto informado no caixa: ");
    scanf("%f", &desconto);
    
    float valorFinal = aplicarDesconto(valorInicial, desconto);
    
    printf("Valor com %.2f por cento de desconto: R$ %.2f", desconto, valorFinal);
    
    return 0;
}
