#include <stdio.h>
#include "seti.h"

int main(void)
{
  Seti * myConj = create_seti(5);
  Seti * myConj2 = create_seti(10);

  

  insert(&myConj, 15);
  insert(&myConj, 10);

  insert(&myConj2, 5);
  insert(&myConj2, 15);

  ll_print(myConj, "Meu Conjunto (1):"); 
  ll_print(myConj2, "Meu Conjunto (2):"); 
  
  printf("Conjuntos Iguais ? %d \n", igualdade(myConj, myConj2));

  insert(&myConj2, 7);
  printf("Conjuntos Iguais, tirei o 7 ? %d \n", igualdade(myConj, myConj2));

  insert(&myConj, 60);
  insert(&myConj, 7);

  insert(&myConj2, 80);
  insert(&myConj2, 95);
  insert(&myConj2, 60);

  ll_print(myConj, "Meu Conjunto (1):"); 
  ll_print(myConj2, "Meu Conjunto (2):"); 

  printf("Tamanho da lista (1): %d \n", ll_size(myConj));
  printf("Tamanho da lista (2): %d \n", ll_size(myConj2));
  Seti* myInter = intersecao(myConj,myConj2);

  ll_print(myInter, "Meu conjunto (3) intersecção (1) e (2):"); 


  uniao(&myConj,&myConj2);
  ll_print(myConj, "Meu Conjunto união (1) e (2):");
  printf("Tamanho do conjunto união: %d \n", ll_size(myConj));
  seti_remove(&myConj,60);
  ll_print(myConj, "Meu Conjunto união, depois de remover 60:");
  printf("Tamanho do conjunto união: %d \n", ll_size(myConj));

  return 0;
}
