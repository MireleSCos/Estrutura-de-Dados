#include <stdio.h>

int main(){

  int vec[5];
  int maior;
  int menor ;
  for (int i = 0; i < 5; i++)
  {
    printf("\nDigite o valor para a posicao %d do vetor: ", i);
    scanf("%d",&vec[i]);
  }

  menor = vec[0];
  maior = vec[0];
  for (int i = 0; i < 5; i++)
  {
    if (vec[i] > maior)
    {
      maior = vec[i];
    }
    if (vec[i] < menor)
    {
      menor = vec[i];
    }
  }
  printf("Maior %d e menor %d\n", maior, menor);
  return 0;
}