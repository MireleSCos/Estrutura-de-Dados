#ifndef _CALC_C_
#define _CALC_C_


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "calc.h"

struct calc{
  char f[21];
  Pilha * p;
};

Calc * calc_cria(char* f){
  Calc * c = (Calc *) malloc(sizeof(Calc));
  strcpy(c->f, f);
  c->p = pilha_cria();
  return c;
}
void calc_operando(Calc* c, float v){
  pilha_push(c->p,v); //empilha operando

  printf(c->f, v); // imprime topo da pilha
}
void calc_operador(Calc* c, char op){

  float v1, v2, v;
  //pegando segundo operando
  if (pilha_vazia(c->p))
  {
    v2 = 0.0;
  }else{
    v2 = pilha_pop(c->p);
  }
  //pegando primeiro operando
  if (pilha_vazia(c->p))
  {
    v1 = 0.0;
  }else{
    v1 =pilha_pop(c->p);
  }
  //fazer operação
  switch (op)
  {
    case '+':
      v = v1 + v2;
      break;
    case '-':
      v = v1 - v2;
      break;
    case '*':
      v = v1 * v2;
      break;
    case '/':
      v = v1 / v2;
      break;
  }
  //empilhar o resultado da operação

  pilha_push(c->p, v);

  //imprimir o topo da polha
  printf(c->f, v);

}
void calc_libera(Calc* c){
  pilha_libera(c->p);
  free(c);
}
#endif