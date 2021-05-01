#ifndef _PILHA_C_
#define _PILHA_C_

#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

struct pilha {
  int n; // numero de elementos armazenados
  int dim; //dimensão correta do vetor 
  float * vet; //vetor dos elementos
};

Pilha * pilha_cria (void){

  Pilha * p = (Pilha*) malloc(sizeof(Pilha));

  if(p){
    p->dim = 2; //dimensão inicial
    p->vet = (float *) malloc(p->dim * sizeof(float));
    p->n = 0; 
    return p;
  };
  
  return NULL;
};

int pilha_get_dim(Pilha * p){
  return p->dim;
};

int pilha_get_n(Pilha * p){
  return p->n;
};
void pilha_push (Pilha * p, float v){
  if (p)
  {
    if (p->n == p->dim) // capacidade esgotada, necessário realocação
    {
      p->dim *= 2; //amentando duas vezes o que estava antes
      p->vet = (float*) realloc(p->vet,p->dim*sizeof(float)) ;
    }

    //Inserir elemento
    p->vet[p->n++] = v;

  }
};
float pilha_pop (Pilha * p){
  float v = p->vet[--p->n]; //retira o ultimo elemento que foi adicionado( p->n--)
  return v;
};
int pilha_vazia (Pilha * p){
  return (p->n == 0);
};
void pilha_libera (Pilha * p){
  free(p->vet);
  free(p);
};

#endif