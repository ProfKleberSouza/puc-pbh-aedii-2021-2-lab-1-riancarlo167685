
#include "functions.h"
#include <string.h> //para strlen


bool is_palindromo(char texto[]){
  int i,m;
  int tam = strlen(texto)-1;

  if((tam%2)==0) //Verifica se o tamanho é par
    m = tam/2; //PAR: m = tamanho / 2
  else
    m = (tam-1)/2; //ÍMPAR: m = (tamanho -1) / 2

  for(i=0; i<=m; i++){
    if(texto[i]!=texto[tam-i])
      return false;
  }
  return true;
}
