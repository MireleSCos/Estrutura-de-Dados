#include <stdio.h>
#include <stdlib.h> 

int main (void) {
  while (1){
    int qtdElem;
    int *seque;

    printf("Informe a quantidade de elementos: \n");
    scanf("%d",&qtdElem);

    seque = (int *) calloc(qtdElem,sizeof(int));

    for (int i = 0; i < qtdElem; i++)
    {
      printf("\nDigite o valor para a posicao %d do vetor: ", i);
      scanf("%d",&seque[i]);
    }

    printf("\n Valores do vetor : ");
    for (int i = 0; i < qtdElem; i++)
    {
      printf("%d, ", seque[i]);
    }

    printf("\n");
    free(seque);
  }
  return 0;
}