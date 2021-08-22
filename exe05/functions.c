
#include "functions.h"
#include <stdio.h> //para printf
#include <string.h> //para strlen

void inverte(char texto[]){
  int i,j;
  char texto2[strlen(texto)];

  for(i=0,j=strlen(texto)-1; j>=0; j--,i++){
        texto2[i]=texto[j];
    }
    texto2[i] = '\0';
    printf("%s", texto2);
  
  }

