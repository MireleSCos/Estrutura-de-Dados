#include <stdio.h>
#include "lista_duplamente_encadeada.h"

int main(void)
{
  No * my_list = ll_create_no(5);
  ll_insert_sorted(&my_list, 8);
  ll_insert_sorted(&my_list, 6);
  ll_insert_sorted(&my_list, 9);
  ll_insert_sorted(&my_list, 7);
  ll_insert_sorted(&my_list, 6); 
  ll_insert_sorted(&my_list, 4);
  ll_insert_sorted(&my_list, 12);
  ll_insert_sorted(&my_list, 11);
  ll_insert_first(&my_list, 0);
  ll_insert_last(&my_list, 100); 
  /* ll_insert_first(&my_list, -11); */
  ll_insert_sorted(&my_list, 114);


  printf("Tamanho da lista: %d \n", ll_size(my_list));
  ll_print(my_list, "Minha lista:");
  
  printf("6 Existe? %d \n", ll_exists(my_list,6));
  ll_remove(&my_list, 6);
  printf("6 Existe? %d \n", ll_exists(my_list,6));
  printf("114 Existe? %d \n", ll_exists(my_list,114));
  ll_remove(&my_list, 114);
  printf("114 Existe? %d \n", ll_exists(my_list,114));

  ll_print(my_list, "Minha lista:");

  ll_clear(&my_list);
  return 0;
}
