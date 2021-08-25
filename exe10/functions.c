
#include "functions.h"
#include <stdio.h>

void tabela_verdade_rec(char tabela[], int m, int n, int p, int pos){

if(pos>=p){
    tabela[pos] = '\0';
    printf("%s\n",tabela);
  }else{
    if(m>0){
      tabela[pos] = '0';
      tabela_verdade_rec(tabela, m-1, n, p, pos+1);
    }
    if(n>0){
      tabela[pos] = '1';
      tabela_verdade_rec(tabela, m, n-1, p, pos+1);
    }
  }
}

int potencia (int x, int n){
  if(n>1)
    return x * potencia(x , n-1);
}

void tabela_verdade(int d){
 int tam = potencia(2,d);
 char tabela[tam];
  tabela_verdade_rec(tabela, d, d, d, 0);

}
