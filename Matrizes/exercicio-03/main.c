/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numerosMatriz[5][3];
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o elemento da matriz na posicao linha %d e coluna %d: ", i+1, j+1);
            scanf("%d", &numerosMatriz[i][j]);
        }
    }
    
    printf("Elementos cuja linha mais coluna forma um numero par: ");
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            int par = i + j;
            if (par % 2 == 0) {
                printf("%d ", numerosMatriz[i][j]);
            }
        }
    }

    return 0;
}
