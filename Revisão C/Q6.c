#include <stdio.h>
#include <math.h>

int main (void) {
  while (1){
    int n1, n2;
    int soma = 0;
    printf("\n Informe o numero inicial: ");
    scanf("%d",&n1);
    printf("\n Informe o numero final: ");
    scanf("%d",&n2);

    while (n1 <= n2)
    {
      soma = soma + n1;
      n1++;
    }

    printf("\n Soma : %d ", soma);
  }
  return 0;
}