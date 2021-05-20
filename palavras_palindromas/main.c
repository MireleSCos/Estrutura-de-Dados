#include<stdio.h>
#include<stdlib.h>

#include "fila.h"
#include "pilha.h"

void addElemento(char valor);
int is_palindroma();

Fila * my_fila;
Pilha * my_pilha; 

int main()
{
  my_fila = q_create();
  my_pilha = pilha_cria();
  char c;
  while (1)
  {
    scanf("%c", &c);
    if (c == ':')
      break;    
    if (c == ' ')
      continue;  
    addElemento(c);
  }
  printf("Cadeia é palindroma: %d", is_palindroma());
  q_distroy(&my_fila);
  pilha_libera(my_pilha);
  return 0;
}

void addElemento(char valor){
  q_insert(my_fila,valor);
  pilha_push(my_pilha, valor);
};

int is_palindroma(){
  int size = q_size(my_fila);
  for (int i = 0; i < size; i++){
    if (q_remove(my_fila) != pilha_pop(my_pilha))
    {
      return 0;
    }
  }
  return 1;
}