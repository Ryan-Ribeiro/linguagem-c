#include <stdio.h>

int main()
{
    printf("PARTICIPANTES JOGOS DE INVERNO: \n\n");
    char atleta[3][2][100];
    double alturaAtleta[3][2];
    
    for (int i = 0; i < 3; i++) {
        printf("DELEGACAO %d\n", i+1);
        for (int j = 0; j < 2; j++) {
            printf("Digite o nome do atleta %d: ", j+1);
            fgets(atleta[i][j], 100, stdin);
            printf("Digite a altura do atleta %d: ", j+1);
            scanf("%lf", &alturaAtleta[i][j]);
            getchar( );
        }
        printf("\n");
    }
    
    printf("MAIOR ATLETA POR DELEGACAO:\n\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            if (alturaAtleta[i][j] > alturaAtleta[i][j+1])
                printf("Nome: %sAltura: %.2fm\n\n", atleta[i][j], alturaAtleta[i][j]);
            else
                printf("Nome: %sAltura: %.2fm\n\n", atleta[i][j+1], alturaAtleta[i][j+1]);
            break;
        }
    }
    
    return 0;
}
