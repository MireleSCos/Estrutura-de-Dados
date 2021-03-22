#include <stdio.h>

#include "numComplexo.h"

int main(void)
{
  NumComplexo *nc;
  NumComplexo *nc2;
  NumComplexo *resul;

  int a, b;
  nc = cria_complexo(5,2);
  nc2 = cria_complexo(5,2);


  get_complexo(nc,&a,&b);
  printf("Complexo : %d + %dj \n", a,b);
  set_complexo(nc,10,4);
  get_complexo(nc,&a,&b);
  printf("Complexo 1 : %d + %dj \n", a,b);
  get_complexo(nc2,&a,&b);
  printf("Complexo 2: %d + %dj \n", a,b);


  resul = soma_complexo(nc,nc2);
  get_complexo(resul,&a,&b);
  printf("Complexo soma : %d + %dj \n", a,b);

  resul = sub_complexo(nc,nc2);
  get_complexo(resul,&a,&b);
  printf("Complexo sub: %d + %dj \n", a,b);

  resul = mult_complexo(nc,nc2);
  get_complexo(resul,&a,&b);
  printf("Complexo mult: %d + %dj \n", a,b);

  resul = div_complexo(nc,nc2);
  get_complexo(resul,&a,&b);
  printf("Complexo div: %d + %dj \n", a,b);

  libera_complexo(nc);
  libera_complexo(nc2);
  libera_complexo(resul);


  return 0;
}
