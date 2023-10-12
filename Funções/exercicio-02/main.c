#include <stdio.h>

float funcaoMedia(float nota, int cont) {
    float media = nota;
    if (cont == 3) {
        media += media / 3;
    }
    return media;
}

int main()
{
    double prova[3];
    for (int i = 0; i < 3; i++) {
        printf("Digite a nota da prova %d: ", i+1);
        scanf("%lf", &prova[i]);
    }
    
    for (int i = 0; i < 3; i++) {
        int cont = 1;
        float nota = prova[i];
        float media = funcaoMedia(nota, cont);
        if (i == 2) {
            printf("A media bimestral eh: %.2f", media);
        }
        cont += 1;
    }

    return 0;
}
