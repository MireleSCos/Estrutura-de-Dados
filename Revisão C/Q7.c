#include <stdio.h>
#include <math.h>

int main (void) {
  while (1){
    int n1;
    int divisores = 0;
    printf("\n Informe o numero: ");
    scanf("%d",&n1);

    for (int i = 1; i <= n1; i++)
    {
      if (n1 % i == 0)
      {
        divisores++;
      } 
    }
    if (divisores == 2)
    { 
      printf("\n Primo");
    }else{
      printf("Não é primo");
    }
    
  }
  return 0;
}