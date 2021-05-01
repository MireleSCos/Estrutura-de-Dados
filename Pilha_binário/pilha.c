#ifndef _PILHA_C_
#define _PILHA_C_

#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"


struct lista
{
  int info;
  struct lista* prox;
};

typedef struct lista Lista;

struct pilha {
  Lista * prim;
};

Pilha * pilha_cria (void){
  Pilha * p = (Pilha *) malloc(sizeof(Pilha));

  if (p)
  {
    p->prim = NULL;
    return p;
  }
  return NULL;
};

void pilha_push (Pilha * p, int v){

  Lista* n= (Lista *)malloc(sizeof(Lista));
  n->info = v;
  n->prox = p->prim; // n vai ser o novo todo, e o prox de n é o topo anterior 
  p->prim = n;

};
int pilha_pop (Pilha * p){
  Lista* t;
  int v;
  if (pilha_vazia(p))
  {
    printf("Pilha vazia!");
    exit(1); //aborta programa
  }

  t = p->prim;
  v = t->info;

  p->prim = t->prox; // removendo o todo da pilha

  free(t);
  return v;  
};
int pilha_vazia (Pilha * p){
  return(p->prim == NULL);
};
void pilha_libera (Pilha * p){

  Lista * q = p->prim;
  while (q!=NULL)
  {
    Lista * t = q->prox;
    free(q);
    q = t;
  }

  free(p);
  
};

#endif