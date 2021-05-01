#include <stdio.h>
#include <stdlib.h> 
#include"seti.h"

#ifndef _SETI_C_
#define _SETI_C_


Seti * create_seti(int info){
  return ll_create_no(info);
}

int uniao(Seti ** lheadC1, Seti ** lheadC2){

  No * copia = *lheadC1;

  if (lheadC2){
    while (get_prox(copia) != NULL){
      copia = get_prox(copia);
    }
    set_prox(copia, lheadC2);
    return 1;
  }
  return 0;

}
int insert(Seti ** lhead, int info){
  return ll_insert_first(lhead, info);
}

int seti_remove(Seti ** lhead, int info){
  return ll_remove(lhead, info);
}

Seti * intersecao(Seti * lheadC1, Seti * lheadC2){
  Seti * inter = create_seti(-1);
  Seti * reser = lheadC2;
  while (lheadC1 != NULL){
    while (lheadC2 != NULL){
      if (get_info(lheadC1) == get_info(lheadC2))
      {
        insert(&inter,get_info(lheadC1));
      }
      lheadC2 = get_prox(lheadC2);
    }
    lheadC2 = reser;
    lheadC1 = get_prox(lheadC1);
  }
  seti_remove(&inter,-1);
  return inter;
}

int exists(Seti * lhead, int info){
  return ll_exists(lhead,info);
}

int igualdade(Seti * lheadC1, Seti * lheadC2){
  Seti * amostra = intersecao(lheadC1,lheadC2);

  if(ll_size(amostra) == ll_size(lheadC1) && ll_size(amostra) == ll_size(lheadC2)){
    return 1;
  }
  return 0;
}
int size(Seti * lhead){
  return ll_size(lhead);
}
int is_empty(Seti * lhead){
  return ll_is_empty(lhead);
}



#endif