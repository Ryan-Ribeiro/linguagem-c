#include <stdio.h>

int main()
{
    for (int maisTres = 2; maisTres <= 20; maisTres = maisTres + 3){
        if (maisTres == 20)
            printf("%d ", maisTres);
        else
            printf("%d, ", maisTres);
    }

    return 0;
}
