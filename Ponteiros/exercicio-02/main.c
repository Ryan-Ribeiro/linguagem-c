#include <stdio.h>

int main()
{
    int num1;
    int num2;
    
    printf("%p, %p\n", &num1, &num2);
    
    if (&num1 > &num2) {
        printf ("num1 eh maior que num2");
    } else {
        printf("num2 eh maior que num1");
    }

    return 0;
}
