#include <stdio.h>
#include <assert.h>
#include "multiplicar.c"
#include "divisao.c"

int main ()

{
  assert (multiplicar (2,3) == 6);
  assert (multiplicar (5,0) == 0);
  assert (divisao (4,2) == 2);
  assert (divisao (6,3) == 2);
}
