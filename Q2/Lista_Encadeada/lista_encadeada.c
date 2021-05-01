#include <stdio.h>
#include <stdlib.h> 
#include "lista_encadeada.h"


#ifndef _LISTA_ENCADEADA_C_
#define _LISTA_ENCADEADA_C_


struct no {
  int info;
  struct no * prox;
};

No * ll_create_no(int info){
  No * lhead = (No*) malloc(sizeof(No));
  if (lhead)
  {
    lhead->info = info;
    lhead->prox = NULL;
  }
  return lhead;
  }
  
int ll_is_empty(No * lhead){
  return(lhead == NULL);
}
int ll_size(No * lhead){
  int count = 0;

  while (lhead != NULL)
  {
    count++;
    lhead = lhead->prox;
  }
  return count;
}
int ll_insert_first(No ** lhead, int info){
  No * novo = ll_create_no(info);
  
  if (novo)
  {
    novo->prox = *lhead;
    *lhead = novo;

    return 1;
  }
  
  return 0;

}
int ll_insert_last(No ** lhead, int info){
  No * novo = ll_create_no(info);
  No * copia = *lhead;

  if (novo){
    while (copia->prox != NULL){
      copia = copia->prox;
    }
    copia->prox = novo;
    return 1;
  }
  return 0;
}
int ll_exists(No * lhead, int info){
  while (lhead != NULL){
    if (lhead->info == info){
      return 1;
    }
    lhead = lhead->prox;
  }
  return 0;
}
void ll_print(No * lhead, char * message){
  printf("%s ", message);
  while (lhead != NULL){
    printf("%d ,", lhead->info);
    lhead = lhead->prox;
  }

  printf("\n");
}
void ll_clear(No ** lhead){
  No * prox = NULL;
  No * copia = *lhead;
  while (copia != NULL){
    prox = copia->prox;
    free(copia);
    copia = prox;
  }

  *lhead = NULL;
}
int ll_remove(No ** lhead, int info){
  No * antes = NULL;
  No * copia = *lhead;
  int found = 0;
  while (copia != NULL){
    if (copia->info == info){
      found = 1;
      break;
    }
    antes = copia;
    copia = copia->prox;
  }

  if (found){
    if(antes == NULL){
      *lhead = copia->prox;
      free(copia);
      return 1;
    }

    antes->prox = copia->prox;
    free(copia);
    return 1;
  }
  
  return 0;

}
int ll_insert_sorted(No ** lhead, int info){
  No * novo = ll_create_no(info);

  if(novo){
    No * antes = NULL;
    No * copia = *lhead;

    while ((copia != NULL) && (copia->info < info)){
      antes = copia;
      copia = copia->prox;
    }
    if (antes == NULL){
      novo->prox = *lhead;
      *lhead = novo;
      return 1;
    }

    novo->prox = antes->prox;
    antes->prox = novo;

    return 1;    
    
  }

  return 0;
}


#endif