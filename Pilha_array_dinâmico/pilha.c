#ifdef _PILHA_C_
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

  Pilha * p = (Pilha*) malloc

};
void pilha_push (Pilha * p, float v){

};
float pilha_pop (Pilha * p){

};
int pilha_vazia (Pilha * p){

};
void pilha_libera (Pilha * p){

};

#endif