#include <stdio.h>
#include <math.h>

float calcularHipotenusa (float cateto1, float cateto2) {
    float hipotenusa = sqrt(cateto1 * cateto1 + cateto2 * cateto2);
    return hipotenusa;
}

int main()
{
    float cateto1;
    float cateto2;
    printf("Digite o comprimento do cateto 1: ");
    scanf("%f", &cateto1);
    
    printf("Digite o comprimeto do cateto 2: ");
    scanf("%f", &cateto2);
    printf("\n");
    
    float hipotenusa = calcularHipotenusa(cateto1, cateto2);
    printf("Hipotenusa do triangulo retangulo em questao: %.2f m", hipotenusa);
    
    return 0;
}
