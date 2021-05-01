#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(){

  Pilha * p = pilha_cria();

  printf("A pilha está vazia ? %d \n", pilha_vazia(p));
  pilha_push(p, 2);
  pilha_push(p, 3);
  pilha_push(p, 4);
  pilha_push(p, 5);
  pilha_push(p, 6);
  printf("A pilha está vazia ? %d \n", pilha_vazia(p));

  printf("Dimensão : %d \n",pilha_get_dim(p));
  printf("Numero de elementos na lista: %d \n",pilha_get_n(p));

  printf("Elemento que foi removido: %f \n", pilha_pop(p));

  printf("Dimensão : %d \n",pilha_get_dim(p));
  printf("Numero de elementos na lista: %d \n",pilha_get_n(p));

  pilha_libera(p);
  return 0;
}