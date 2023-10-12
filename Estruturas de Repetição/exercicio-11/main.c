#include <stdio.h>

int main()
{
    int i;
    char nomes[5] [31];
    
    float nota1;
    float nota2;
    float media;
    float mediaTurma;
    
    for (i = 0; i < 5; i++) {
        getchar( );
        printf("Nome do aluno %d: ", i+1);
        fgets(nomes[i], 30, stdin);
        
        printf("\nDigite a nota do aluno %d: ", i+1);
        scanf("%f", &nota1);

        printf("Digite a nota 2 do aluno %d: ", i+1);
        scanf("%f", &nota2);
        
        media = (nota1 + nota2)/2;
        
        printf("\nNOME: %sPROVA 1: %.2f PROVA 2: %.2f \nMEDIA: %.2f\n\n", nomes[i], nota1, nota2, media);
        
        nota1 = 0;
        nota2 = 0;
        mediaTurma = (mediaTurma + media);

        if (i == 4) {
            mediaTurma = mediaTurma / 5;
            printf("A media da turma eh de %.2f.", mediaTurma);
        }
    }
    
    return 0;
    
    }




