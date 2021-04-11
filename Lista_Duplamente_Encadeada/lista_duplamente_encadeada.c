#include <stdio.h>
#include <stdlib.h> 
#include "lista_duplamente_encadeada.h"


#ifndef _LISTA_DUPLAMENTE_ENCADEADA_C_
#define _LISTA_DUPLAMENTE_ENCADEADA_C_


struct no {
  int info;
  struct no * ante;
  struct no * prox;
};

No * ll_create_no(int info){
  No * lhead = (No*) malloc(sizeof(No));
  if (lhead)
  {
    lhead->info = info;
    lhead->prox = NULL;
    lhead->ante = NULL;
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
  No * copia = *lhead;

  if (novo)
  {
    copia->ante =  novo;

    novo->prox = *lhead;
    novo->ante = NULL;

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
    novo->ante=copia;
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

No *  ll_buscar_elemento(No * lhead, int info){
  No * elemento;
  while (lhead != NULL){
    if (lhead->info == info){
      elemento = lhead;
      return elemento;
    }
    lhead = lhead->prox;
  }
  return NULL;
}
int ll_remove(No ** lhead, int info){
  No * copia = *lhead;

  No * elemento = ll_buscar_elemento(*lhead,info);
  if (elemento == NULL)
  {
    return 1; //O elemento não estar na lista
  }
  if (copia == elemento) //Caso o elemento seja o primeiro da lista
  {
    copia = elemento->prox;
  }else {
    elemento->ante->prox = elemento->prox;
  }
  
  if (elemento->prox != NULL) // Caso não seja o ultimo elemento 
  {
    elemento->prox->ante = elemento->ante;
  }
  
  free(elemento);

  return 1;

}
int ll_insert_sorted(No ** lhead, int info){
  No * novo = ll_create_no(info);
  if(novo){
    No * copia = *lhead;

    if (copia->info >= info ){ // verificar se o valor é menor que o do início
      novo->prox = copia;
      *lhead = novo;
      return 1;
    }

    while ((copia != NULL) && (copia->info < info)){
      copia = copia->prox;
    
    }
    if (copia == NULL ){ // verificar se o valor é maior que o ultimo

      ll_insert_last(lhead,info);

      return 1;
    }
    novo->ante = copia->ante;
    novo->prox = copia;

    copia->ante->prox = novo;
    copia->ante = novo ;
    return 1; 
       
  }

  return 0;
}



#endif