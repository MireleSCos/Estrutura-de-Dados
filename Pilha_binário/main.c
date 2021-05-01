#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(){
  int n;

  Pilha * p = pilha_cria();
  printf("Digite um decimal : ");
  scanf("%d", &n);

  do
  {
    pilha_push(p,n%2);
    n/=2;
  } while (n!=0);
  
  printf("\n O binario desse numero é : ");

  while (!pilha_vazia(p))
  {
   printf("%d", pilha_pop(p));
  }
  
  
  pilha_libera(p);
  return 0;
}