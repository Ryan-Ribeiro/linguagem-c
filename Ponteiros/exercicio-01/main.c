#include <stdio.h>

float CalcularArea(float *base, float *altura) {
    float area = *base * *altura;
    *base += -1;
    *altura += -2;
    return area;
}

int main()
{
    float base;
    printf("Digite a base do retangulo: ");
    scanf("%f", &base);
    
    float altura;
    printf("Digite a altura do retangulo: ");
    scanf("%f", &altura);
    
    float area = CalcularArea(&base, &altura);

    printf("Area do retangulo informado: %.2fm2\n", area);
    printf("base: %f; altura: %f", base, altura);
    return 0;
}
