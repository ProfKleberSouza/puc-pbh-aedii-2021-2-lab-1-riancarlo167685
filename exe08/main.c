#include <stdio.h> //para stdin e fgets
#include "functions.h"


int main() {

  char texto[50];
  
  // ENTRADA DE DADOS
  scanf("%s",texto);

  if(is_palindromo(texto))
    printf("SIM");
  else
    printf("NÃO");

  return(0);
}