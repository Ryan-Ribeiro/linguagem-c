#include <stdio.h>

void retirarCaractere(char mensagem[], char caractere) {
    int tamanhoUtilArray = 0;
    for (int i = 0; i < 100; i++) {
        if (mensagem[i] != '\0' && i < 100) {
            tamanhoUtilArray += 1;
        }
    }
    
    do {
        int cont = 0;
        for (int i = 0; i < tamanhoUtilArray; i++) {
            if (mensagem[i] == caractere) {
                cont += 1;
                int j = i;
                for (j; (mensagem[j] != '\0') && (j  < tamanhoUtilArray); j++) {
                    mensagem[j] = mensagem[j+1];
                }
                i--;
            }   
        }
        printf("===========\n\n");
        printf("Mensagem atualizada: %s", mensagem);
        printf("Quantidade de vezes que o caractere '%c' foi encontrado na string: %d\n\n", caractere, cont);
        printf("Caso deseje sair do loop, digire o caractere '0'.\n");
        printf("Digite um outro caractere a ser retirado da String: \n");
        scanf(" %c", &caractere);
        if (caractere == '0') {
            break;
        }
    } while (caractere != '0');
}

int main()
{
    char mensagem[100];
    printf("Digite uma mensagem: ");
    fgets(mensagem, 100, stdin);
    
    char caractere;
    printf("Digite um caractere a ser retirado da mensagem:");
    scanf(" %c", &caractere);
    printf("\n");
    

    retirarCaractere(mensagem, caractere);
    
    return 0;
}




