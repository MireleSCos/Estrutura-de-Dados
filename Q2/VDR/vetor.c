#include <stdio.h>
#include <stdlib.h> 
#include "vetor.h"

#ifndef _VETOR_C_
#define _VETOR_C_

struct vetor{
  int n;
  int v_dim;
  int * v;
};


Vetor * cria_vetor(int dim){
  Vetor * vet = (Vetor*) malloc(sizeof(Vetor));
  if (vet){
    vet->n = 0;
    vet->v_dim = dim;
    vet->v = (int*) malloc(sizeof(int)*dim);
  }
  return vet;
};
int insere_vetor(Vetor * vet, int x){
  if (vet)
  { 
    vet->n++;
    if (vet->n > vet->v_dim)
    {
      vet->v_dim = vet->n;
      vet->v = (int *) realloc (vet->v, sizeof(int)*vet->v_dim);
    }

    vet->v[(vet->n)-1] = x;
    return 1;
  }

  return 0;
};
int tamanho_vetor(Vetor * vet){
  return vet->n;
};
int acesse_vetor(Vetor * vet, int pos){
  return vet->v[pos];
};
void libera_vetor(Vetor * vet){
  free (vet->v);
  free (vet);
};

#endif