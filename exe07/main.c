#include <stdio.h>
#include "functions.h"

int main() {

  int a, b;

  // ENTRADA DE DADOS
  scanf("%d %d", &a, &b);

  // SAIDA - IMPRIMINDO O RESULTADO
  printf("MDC = %d", mdc(a,b));

  return(0);
}