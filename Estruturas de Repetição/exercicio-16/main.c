#include <stdio.h>

int main()
{
    float paisA = 5; 
    float paisB = 7; 
    int anos;
    printf("O PAIS 'A' TEM UMA POPULACAO DE  %.0f MILHOES. \n", paisA);
    printf("O PAIS 'B' TEM UMA POPULACAO DE %.0f MILHOES. \n", paisB);
    
    while (paisA < paisB) {
        paisA = paisA + 0.03 * paisA;
        paisB = paisB + 0.02 * paisB;
        anos += 1;
    }
    printf("DEMOROU %d ANOS PARA QUE O PAIS 'A' SEJA MAIOR QUE O 'B'", anos);
    return 0;
}
