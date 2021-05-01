#ifdef _PILHA_H_
#define _PILHA_H_

typedef struct pilha Pilha;

Pilha * pilha_cria (void);
void pilha_push (Pilha * p, float v);
float pilha_pop (Pilha * p);
int pilha_vazia (Pilha * p);
void pilha_libera (Pilha * p);

#endif