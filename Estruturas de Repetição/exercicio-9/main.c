#include <stdio.h>

int main()
{
    float nota1, nota2, media;
    printf("Digite a nota da Prova 1: ");
    scanf("%f", &nota1);
    
    printf("Digite a nota da Prova 2: ");
    scanf("%f", &nota2);
        
    media = (nota1 + nota2)/2;
        
    printf("A media eh %.2f \n \n", media);
    
    
    while (media < 0.00 || media > 10.00) {
        printf("ERRO. \n");
        printf("Medias invalidas. Favor digitar notas de provas validas. \n");
        printf("Medias válidas possuem a nota de cada prova entre 0 e 10. \n \n");
        
        printf("Digite a nota da Prova 1: ");
        scanf("%f", &nota1);
    
        printf("Digite a nota da Prova 2: ");
        scanf("%f", &nota2);
        
        media = (nota1 + nota2)/2;
        
        printf("A media eh %.2f \n \n", media);    
        }
    return 0;
    }

