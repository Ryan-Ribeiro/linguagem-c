#include <stdio.h>
#include <math.h>

float calcularPerimetro(float lado) {
    float perimetro = lado * 4;
    return perimetro;
}

float calcularArea(float lado) {
    float area = lado * lado;
    return area;
}

float calcularDiagonal(float lado) {
    float diagonal = lado * sqrt(2);
    return diagonal;
}

int main()
{
    float lado;
    printf("Digite o valor do lado do quadrado desejado: ");
    scanf("%f", &lado);
    printf("\n");
    
    float perimetro = calcularPerimetro(lado);
    printf("Perimetro do quadrado informado: %.2f m\n", perimetro);
    
    float area = calcularArea(lado);
    printf("Area do quadrado informado: %.2f m²\n", area);
    
    float diagonal = calcularDiagonal(lado);
    printf("Diagonal do quadrado informado: %.2f m", diagonal);
    
    return 0;
}
