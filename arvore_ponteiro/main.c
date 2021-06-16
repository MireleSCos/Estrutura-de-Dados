#include<stdio.h>
#include<stdlib.h>

#include "arvore.h"

int main()
{
  ArvNo* a1= arv_criano('d',NULL,NULL);
  ArvNo* a2= arv_criano('b',NULL,a1);

  ArvNo* a3= arv_criano('e',NULL,NULL);
  ArvNo* a4= arv_criano('f',NULL,NULL);
  ArvNo* a5= arv_criano('c',a3,a4);

  ArvNo* a = arv_criano('a',a2,a5 );

  Arv* raiz =  arv_cria(a);
  printf("Altura da arvore : %d \n",arv_altura(raiz));
  printf("Conteúdo : \n");
  arv_imprime(raiz);
  printf("\n");

  printf("h esta na arvore ? %d \n",arv_pertence(raiz,'h'));
  printf("f esta na arvore ? %d \n",arv_pertence(raiz,'f'));

  arv_libera (raiz);
  return 0;
}