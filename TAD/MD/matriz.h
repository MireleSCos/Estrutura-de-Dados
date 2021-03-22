
#ifndef _MATRIZ_H_
#define _MATRIZ_H_

typedef struct matriz Matriz;
Matriz * cria_matriz(int nl, int nc);
void libera_matriz(Matriz *mat);
void acessa_matriz(Matriz *mat);
void atribuir_matriz(Matriz *mat);
int nlinhas(Matriz *mat);
int ncolunas(Matriz *mat);

#endif