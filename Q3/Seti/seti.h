#include "lista_encadeada.h"
#ifndef _SETI_H_
#define _SETI_H_

typedef No Seti;

Seti * create_seti(int info);
int uniao(Seti ** lheadC1, Seti ** lheadC2);
int insert(Seti ** lhead, int info);
int seti_remove(Seti ** lhead, int info);
Seti * intersecao(Seti * lheadC1, Seti * lheadC2);
int exists(Seti * lhead, int info);
int igualdade(Seti * lheadC1, Seti * lheadC2);
int size(Seti * lhead);
int is_empty(Seti * lhead);

#endif