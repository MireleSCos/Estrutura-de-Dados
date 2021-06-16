#ifndef _ARVORE_C
#define _ARVORE_C

#include<stdio.h>
#include<stdlib.h>
#include "arvore.h"


struct arvno{
  char info;
  ArvNo* e;
  ArvNo* d;
};

struct arv{
  ArvNo* raiz;
};

ArvNo* arv_criano (char c, ArvNo * e, ArvNo * d){
  ArvNo* p = (ArvNo*) malloc(sizeof(ArvNo));
  p->info = c;
  p->e = e;
  p->d = d;

  return p;
}

Arv* arv_cria(ArvNo * r){
  Arv* p = (Arv*) malloc(sizeof(Arv));
  p->raiz = r;
  return p;
}

void arv_libera (Arv* r){
  libera(r->raiz);
  free(r);
}

void libera(ArvNo * r){
  if (r != NULL)
  {
    libera(r->e);
    libera(r->d);
    free(r);
  }
}

void arv_imprime(Arv* r){
  imprime(r->raiz);
}

void imprime(ArvNo * r){
  if (r != NULL)
  {
    printf("%c \n", r->info);
    imprime(r->e);
    imprime(r->d);
  }
}

int arv_pertence (Arv* r, char c){
  return pertence(r->raiz, c);
}
int pertence(ArvNo * r, char c){
  if (r != NULL)
  {
    return (c == r->info || pertence(r->e, c) || pertence(r->d, c));
  }else{
    return 0;
  }
}


int arv_altura(Arv* r){
  return altura(r->raiz);
}

int max2 (int a, int b){
  return (a>b)? a:b;
}
int altura (ArvNo* r){
  if (r != NULL)
  {
    return 1+max2(altura(r->e),altura(r->d));
  }else{
    return -1;
  }
}

#endif
