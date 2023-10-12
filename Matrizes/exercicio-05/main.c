/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int A[2][2];
    int B[2][2];
    int SOMA[2][2];
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Digite um numero para ser guardado na matriz A, na linha %d e coluna %d: ", i+1, j+1);
            scanf("%d", &A[i][j]);
        }
    }
    
    printf("\n");
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Digite um numero para ser guardado na matriz B, na linha %d e coluna %d: ", i+1, j+1);
            scanf("%d", &B[i][j]);
        }
    }
    
    printf("\nSoma dos elementos das matrizes A e B: \n\n");
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            SOMA[i][j] = A[i][j] + B[i][j];
            printf("%d ", SOMA[i][j]);
            if (j == 1)
                printf("\n");
        }
    }

    return 0;
}
