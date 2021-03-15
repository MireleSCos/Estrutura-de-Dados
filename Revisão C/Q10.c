#include <stdio.h>

int *gerateVecInv(int *orig, int qtd){
  int vecIn[qtd];
  for (int i = 0; i < qtd; i++)
  {
    vecIn[i] = orig[(qtd-1)-i];
  }
  int *rp = vecIn;
  return (rp);
}

int main(){

  int vec[5];
  int *vecIn;

  for (int i = 0; i < 5; i++)
  {
    printf("\nDigite o valor para a posicao %d do vetor: ", i);
    scanf("%d",&vec[i]);
  }
  vecIn = gerateVecInv(vec,5);

  printf("\n Valores do vetor : ");
  for (int i = 0; i < 5; i++)
  {
    printf("%d ", vecIn[i]);
  }
  return 0;
}