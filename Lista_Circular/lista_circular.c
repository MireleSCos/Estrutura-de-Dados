#include <stdio.h>
#include <stdlib.h> 
#include "lista_circular.h"


#ifndef _LISTA_CIRCULAR_C_
#define _LISTA_CIRCULAR_C_


struct no {
  int info;
  struct no * prox;
};

No * ll_create_no(int info){
  No * lhead = (No*) malloc(sizeof(No));
  if (lhead)
  {
    lhead->info = info;
    lhead->prox = lhead;
  }
  return lhead;
  }
  
int ll_is_empty(No * lhead){
  return(lhead == NULL);
}
int ll_size(No * lhead){
  No * copia = lhead; 
  int count = 0;
  do
  {
    count++;
    copia = copia->prox;
  } while (copia != lhead);
  
  return count;
}

int ll_insert_first(No ** lhead, int info){
  No * novo = ll_create_no(info);
  if (novo)
  {
    //Fazer o último apontar para o primeiro  
    No * copia = *lhead;
    while (copia->prox != *lhead ){
      copia = copia->prox;
    }

    novo->prox = *lhead;
    *lhead = novo;
    copia->prox =  novo;
    
    return 1;
  }
  
  return 0;

}
int ll_insert_last(No ** lhead, int info){
  No * novo = ll_create_no(info);
  No * copia = *lhead;

  if (novo){
    novo->prox = *lhead;
    do
    {
      copia = copia->prox;
    } while (copia->prox != *lhead);

    copia->prox = novo;
    
    return 1;
  }
  return 0;
}
int ll_exists(No * lhead, int info){
  No * copia = lhead; 
  do
  {
    if (copia->info == info){
      return 1;
    }
    copia = copia->prox;
  } while (copia != lhead);

  return 0;
}

void ll_print(No * lhead, char * message){
  printf("%s ", message);

  No * copia = lhead; 
  do
  {
    printf("%d ,", copia->info);
    copia = copia->prox;
  } while (copia != lhead);

  printf("\n");
}

void ll_clear(No ** lhead){
  No * prox = NULL;
  No * copia = *lhead;


  copia = copia->prox;//faz com que o head fique para ser liberado por ultimo
  
  if (copia == *lhead)
  {
    free(copia);
    *lhead = NULL;
    return;
  }
  
  do
  {
    prox = copia->prox;
    free(copia);
    copia = prox;
  } while (copia != *lhead);
  free(copia);

  *lhead = NULL;
}

int ll_remove(No ** lhead, int info){
  No * antes = NULL;
  No * copia = *lhead;
  No * end = *lhead;
  int found = 0;

  do
  {
    if (copia->info == info){
      found = 1;
      break;
    }
    antes = copia;
    copia = copia->prox;

  } while (copia != *lhead);


  if (found){
    if(antes == NULL){ // Primeiro valor

      do
      {
        end = end->prox;
      } while (end->prox != *lhead);

      end->prox = copia->prox;

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

    if (copia->info >= info ){ // verificar se o valor é menor que o do início
      
      No * end = *lhead;
      while (end->prox != *lhead ){
        end = end->prox;
      }
      
      novo->prox = copia;
      *lhead = novo;
      
      end->prox =  novo;
      return 1;
    }

    do
    {
      antes = copia;
      copia = copia->prox;
    } while ((copia != *lhead ) && (copia->info < info));

    novo->prox = antes->prox;
    antes->prox = novo;
    
    return 1;    
    
  }

  return 0;
}


#endif