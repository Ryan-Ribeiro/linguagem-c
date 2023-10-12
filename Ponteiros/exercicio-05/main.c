#include <stdio.h>

void mediaAlturas(float *p) {
    float media = 0;
    for (int i = 0; i < 4; i++) {
        media += *p;
        p++;
    }
    media = media / 4;
    
    printf("Media das alturas fornecidas: %.2fm", media);
}

int main()
{
    float alturas[4];
    float *p = alturas;
    
    for (int i = 0; i < 4; i++) {
        printf("Digite a altura em metros da pessoa %d: ", i+1);
        scanf("%f", p);
        p++;
    }
    
    p = alturas;
    mediaAlturas(p);
    
    return 0;
}
