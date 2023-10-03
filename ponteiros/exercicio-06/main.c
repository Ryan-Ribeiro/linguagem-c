#include <stdio.h>

int calcularSoma(int val[2]) {
    int soma = 0;
    for (int i = 0; i < 2; i++) {
        soma = soma + val[i];
    }
    return soma;
}

int calcularSub(int val[2]) {
    int sub = 0;
    sub = val[0] - val[1];
    return sub;
}

void multiplicacao(int *pont1, int *pont2, int *result) {
    *result = (*pont1) * (*pont2);
}

int main()
{
    int val[2];
    for (int i = 0; i < 2; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &val[i]);
    }
    
    int soma = calcularSoma(val);
    printf("Soma entre os valores informados: %d\n", soma);
    int sub = calcularSub(val);
    printf("Subtração entre os valores informados: %d\n", sub);
    
    int *pont1 = &soma;
    int *pont2 = &sub;
    int valor_result;
    int *result = &valor_result; // ponteiro *result deve apontar para alguma variável, para que funcione, mesmo que não a utilize para nada
    
    multiplicacao(pont1, pont2, result);
    printf("Multipicacao entre %d e %d: %d", soma, sub, *result);
    
    return 0;
}
