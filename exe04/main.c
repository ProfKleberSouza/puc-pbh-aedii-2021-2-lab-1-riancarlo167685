#include <stdio.h>
#include "functions.h"
#include <string.h>
int main() {

  char texto[50];
  
  // ENTRADA DE DADOS
  fgets(texto, sizeof(texto), stdin);
  
  // PROCESSAMENTO - EXECUTANDO A FUNCAO
  numero_vogais(texto);

  return(0);
}