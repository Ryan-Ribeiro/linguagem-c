#include <stdio.h>
#include <math.h>

float calcularPerimetro(float base, float altura) {
    float perimetro = 2*(base + altura);
    return perimetro;
}

float calcularArea(float base, float altura) {
    float area = base * altura;
    return area;
}

float calcularDiagonal(float base, float altura) {
    float diagonal = sqrt(base*base + altura*altura);
    return diagonal;
}

int main()
{
    float base;
    printf("Digite a base em metros do retangulo desejado: ");
    scanf("%f", &base);
    
    float altura;
    printf("Digite a altura em metros do retangulo desejado: ");
    scanf("%f", &altura);
    printf("\n");
    
    float perimetro = calcularPerimetro(base, altura);
    printf("Perimetro do retangulo informado: %.2f m\n", perimetro);
    
    float area = calcularArea(base, altura);
    printf("Area do retangulo informado: %.2f m²\n", area);
    
    float diagonal = calcularDiagonal(base, altura);
    printf("Diagonal do retangulo informado: %.2f m", diagonal);
    
    return 0;
}
