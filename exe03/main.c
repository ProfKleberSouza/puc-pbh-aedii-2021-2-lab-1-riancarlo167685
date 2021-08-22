#include <stdio.h>
#include "functions.h"

#define tamanho 6
int main() {

  int a[tamanho], menor, maior;
  
  // ENTRADA DE DADOS
  for(int i=0;i < tamanho;i++){
    scanf("%d", &a[i]);
  }
  // PROCESSAMENTO - EXECUTANDO A FUNCAO
  menor_maior(a, tamanho, &menor, &maior);

  // SAIDA - IMPRIMINDO O RESULTADO
  printf("MENOR = %d\n", menor);
  printf("MAIOR = %d", maior);

  return(0);
}