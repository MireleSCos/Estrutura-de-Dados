#ifndef _PILHA_H_
#define _PILHA_H_

typedef struct pilha Pilha;

Pilha * pilha_cria (void);
int pilha_get_dim(Pilha * p);
int pilha_get_n(Pilha * p);
void pilha_push (Pilha * p, char v);
char pilha_pop (Pilha * p);
int pilha_vazia (Pilha * p);
void pilha_libera (Pilha * p);

#endif