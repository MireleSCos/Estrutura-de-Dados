#include <stdio.h>
#include <stdlib.h> 
#include "matriz.h"

#ifndef _MATRIZ_C_
#define _MATRIZ_C_

struct matriz{
  int l;
  int c;
  int ** v;
};


Matriz * cria_matriz(int nl, int nc){

  Matriz *mat = (Matriz*) malloc(sizeof(Matriz));

  mat->c = nc;
  mat->l = nl;
  mat->v = (int **)  calloc(nl,sizeof(int));

  for (int i = 0; i < nl; i++)
  {
    mat->v[i] = (int *)  calloc(nc,sizeof(int));
  }

  return mat;

};
void libera_matriz(Matriz *mat){
    for (int i = 0; i < mat->l; i++) {
      free (mat->v[i]); /* libera as linhas da matriz */
    }
    free (mat->v);
    free (mat);

};
void acessa_matriz(Matriz *mat){
  printf("\n Valores da matriz : \n ");
  for (int i=0; i<mat->l; i++ ){
    for (int j=0; j<mat->c; j++ )
    {
      printf ("%d  ",mat->v[ i ][ j ]);
    }
    printf("\n");
  }
};
void atribuir_matriz(Matriz *mat){
 for ( int i=0; i< mat->l; i++ ){
    for (int j=0; j< mat->c; j++ )
    {
      printf ("\nElemento[%d][%d] = ", i, j);
      scanf ("%d", &mat->v[ i ][ j ]);
    }
  }
};
int nlinhas(Matriz *mat){
  return mat->l;
};
int ncolunas(Matriz *mat){
  return mat->c;
};

#endif