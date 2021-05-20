#ifndef _FILA_C
#define _FILA_C

#include<stdio.h>
#include<stdlib.h>
#include "fila.h"

#define MAX 20

struct fila {
  int inicio, fim, qtde;
  char capacidade[MAX];
};
Fila *q_create(){
  Fila * fi = (Fila*) malloc(sizeof(Fila));
  if (fi != NULL) 
  {
    fi->inicio = 0;
    fi->fim = 0;
    fi->qtde = 0;
  }
  return fi;
};
int q_is_empty(Fila* fi){
  if (!fi)
  {
    return 1;
  }
  return (fi->qtde == 0);
};
int q_is_full(Fila* fi){
  if (!fi)
  {
    return 0;
  }
  return (fi->qtde == MAX);
};
int q_size(Fila* fi){
  if (!fi)
  {
    return 0;
  }
  return fi->qtde;
};
int q_insert(Fila* fi, char valor){
  if (q_is_full(fi))
  {
    return 0;
  }
  fi->capacidade[fi->fim] = valor;
  fi->fim = (fi->fim+1) % MAX ;//controlar fim para quando chegar na capacidade máxima
  fi->qtde++;
  printf("Valor inserido: %c \n", valor);
  return 1;
};
char q_remove(Fila* fi){
 if (q_is_empty(fi))
  {
    return 0;
  }
  char removido = fi->capacidade[fi->inicio];
  fi->inicio = (fi->inicio+1)%MAX;
  fi->qtde--;
  printf("Valor removido fila: %c \n", removido);
  return removido;
};
void q_distroy(Fila** fi){
  free(*fi);
  *fi = NULL;
};
#endif