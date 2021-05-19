#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "calc.h"


int main()
{
  Calc* calc = calc_cria("%.2f\n");

  char c;
  float v;

  do
  {
    scanf("%s", &c);

    if (c == '*' || c == '-' ||c == '+' ||c == '/')
    {
      printf("Letraa : %d \n ",c);
      calc_operador(calc, c);
    }else{
      ungetc(c, stdin); //devolver caractere lido e tentar ler número
      if (scanf("%f",&v) == 1)
      {
        printf("Numero : % f\n ",v);
        calc_operando(calc,v);
      }
      
    }
    
  } while (c!='q');
  
  calc_libera(calc);
  return 0;
}
