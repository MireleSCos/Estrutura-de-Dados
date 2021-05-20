#include<stdio.h>
#include<stdlib.h>

#include "fila.h"

int main()
{
  Fila * my_fila = q_create();

  q_insert(my_fila,1);
  q_insert(my_fila,2);
  q_insert(my_fila,3);
  q_insert(my_fila,4);
  q_insert(my_fila,7);
  q_insert(my_fila,9);

  int tam = q_size(my_fila);
  printf("Tamanho da fila: %d\n\n",tam);

  q_remove(my_fila);
  q_remove(my_fila);
  q_remove(my_fila);

  tam = q_size(my_fila);
  printf("Tamanho da fila: %d\n\n",tam);

  q_insert(my_fila,22);
  q_insert(my_fila,44);

  tam = q_size(my_fila);
  printf("Tamanho da fila: %d\n\n",tam);

  q_remove(my_fila);
  q_remove(my_fila);
  q_remove(my_fila);
  q_remove(my_fila);
  q_remove(my_fila);
  tam = q_size(my_fila);
  printf("Tamanho da fila: %d\n\n",tam);

  q_distroy(&my_fila);
  return 0;
}
