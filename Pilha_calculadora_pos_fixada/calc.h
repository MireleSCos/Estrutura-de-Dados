#ifndef _CALC_H_
#define _CALC_H_
#include "pilha.h"

typedef struct calc Calc;

Calc * calc_cria(char* f);
void calc_operando(Calc* c, float v);
void calc_operador(Calc* c, char op);
void calc_libera(Calc* c);
#endif