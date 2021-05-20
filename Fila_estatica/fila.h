#ifndef _FILA_H
#define _FILA_H

typedef struct fila Fila;

Fila *q_create();
int q_is_empty(Fila* fi);
int q_is_full(Fila* fi);
int q_size(Fila* fi);
int q_insert(Fila* fi, int numero);
int q_remove(Fila* fi);
void q_distroy(Fila** fi);



#endif