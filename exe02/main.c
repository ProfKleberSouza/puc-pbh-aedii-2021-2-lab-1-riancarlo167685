#include <stdio.h>
#include "functions.h"

#define tamanho 6
int main() {

    int a[tamanho], m;
  
  // ENTRADA DE DADOS
  for(int i=0;i < tamanho;i++){
    scanf("%d", &a[i]);
  }
  // PROCESSAMENTO - EXECUTANDO A FUNCAO
  m = menor(a, tamanho);

  // SAIDA - IMPRIMINDO O RESULTADO
  printf("MENOR = %d\n", m);

  return(0);
}