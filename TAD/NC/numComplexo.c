#include <stdio.h>
#include <stdlib.h> 
#include "numComplexo.h"

#ifndef _NUMCOMPLEXO_C_
#define _NUMCOMPLEXO_C_

struct numComplexo
{
  int a;
  int b;
};


NumComplexo * cria_complexo(int a, int b){
  NumComplexo * nc = (NumComplexo *) malloc(sizeof(NumComplexo));

  if (nc)
  {
    nc->a = a;
    nc->b = b;
  }
  return nc;
 
};
void libera_complexo(NumComplexo * nc){
  free(nc);
};
int get_complexo(NumComplexo * nc, int *a, int *b){

  if (nc)
  {
    *a = nc->a;
    *b = nc->b;
    return 1;
  }
  return 0;
};
int set_complexo(NumComplexo * nc,int a, int b ){
  if (nc)
  {
    nc->a = a;
    nc->b = b;
    return 1;
  }
  return 0;
};
NumComplexo * soma_complexo(NumComplexo * nc1, NumComplexo * nc2){
  NumComplexo * resul = (NumComplexo *) malloc(sizeof(NumComplexo));

  resul->a = (nc1->a + nc2->a);
  resul->b = (nc1->b + nc2->b);

  return resul;
};
NumComplexo * sub_complexo(NumComplexo * nc1, NumComplexo * nc2){
  NumComplexo * resul = (NumComplexo *) malloc(sizeof(NumComplexo));

  resul->a = (nc1->a - nc2->a);
  resul->b = (nc1->b - nc2->b);

  return resul;
};
NumComplexo * mult_complexo(NumComplexo * nc1, NumComplexo * nc2){
  NumComplexo * resul = (NumComplexo *) malloc(sizeof(NumComplexo));

  resul->a = ((nc1->a*nc2->a) -(nc1->b*nc2->b));
  resul->b = ((nc1->b*nc2->a) +(nc1->a*nc2->b)) ;

  return resul;
};
NumComplexo * div_complexo(NumComplexo * nc1, NumComplexo * nc2){
  NumComplexo * resul = (NumComplexo *) malloc(sizeof(NumComplexo));
  resul->a = (((nc1->a*nc2->a) +(nc1->b*nc2->b)) / ((nc2->a*nc2->a)+(nc2->b*nc2->b)));
  resul->b = (((nc1->b*nc2->a) -(nc1->a*nc2->b)) / ((nc2->a*nc2->a)+(nc2->b*nc2->b)));
};

#endif