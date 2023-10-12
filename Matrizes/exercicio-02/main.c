/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int matriz[3][3];
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o elemento da matriz na linha %d e coluna %d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("\nMatriz formada: \n");
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = matriz[i][j] * 2;
            printf("%d ", matriz[i][j]);
            if (j == 2)
                printf("\n");
        }
    }
    
    return 0;
}

