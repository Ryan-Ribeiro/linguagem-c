#include <stdio.h>

int
main ()
{
    int i;
  for (i = 1; i <= 10; i++) {
      if (i != 10)
        printf("%d, ", i);
      else
        printf("%d ", i);
  }
  // O incremento é feito sempre depois da verificação da condição de saída
  // break quebra o laço de repetição em uma certa condição
  // continue adiciona vírgulas até que um não saia de um if
  
  
  return 0;
}
