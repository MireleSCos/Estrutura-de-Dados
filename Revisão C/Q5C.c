#include <stdio.h>
#include <math.h>

int main (void) {
  while (1){
    int n1, n2;

    printf("\n Informe o numero inicial: ");
    scanf("%d",&n1);
    printf("\n Informe o numero final: ");
    scanf("%d",&n2);

    for (n1; n1 <= n2; n1++)
    {
      printf("%d \n", n1);
    }
    
  }
  return 0;
}