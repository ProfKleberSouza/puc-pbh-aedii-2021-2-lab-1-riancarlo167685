#include <stdio.h> //para stdin e fgets
#include "functions.h"

int main() {

  char texto[50];
  
  // ENTRADA DE DADOS
  fgets(texto, sizeof(texto), stdin);
  
  //CHAMADA PROCEDIMENTO
  numero_vogais(texto);

  return(0);
}