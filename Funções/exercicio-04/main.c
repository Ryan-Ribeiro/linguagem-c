#include <stdio.h>
float reajusteAplicacao (float saldo, float porcentagem) {
    saldo += saldo * (porcentagem / 100);
    return saldo;
}

int main()
{
    float saldo;
    float porcentagem;
    printf("Digite o saldo: R$ ");
    scanf("%f", &saldo);
    
    printf("Digite a porcentagem de reajuste na basa cem: ");
    scanf("%f", &porcentagem);
    
    float reajuste = reajusteAplicacao(saldo, porcentagem);
    
    printf("Valor do saldo apos o reajuste da aplicacao financeira: R$ %.2f", reajuste);
    
    return 0;
}
