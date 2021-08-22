
#include "functions.h"
#include <stdio.h> //para printf
#include <string.h> //para strlen
#include <ctype.h> //Para toupper

void numero_vogais(char texto[]){
  int cont,i,j;
  char vogal[5] = {'a','e','i','o','u'};

  for(i=0;i<5;i++){
    cont = 0;
    for(j=0;j<strlen(texto);j++){
      if(texto[j]==vogal[i]){
        cont++;
      }
    }
    printf("%c = %d\n", toupper(vogal[i]), cont);
  }
}
