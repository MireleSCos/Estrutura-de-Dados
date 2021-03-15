#include <stdio.h>

int main(){

  int vec[5];
  int aux;
  for (int i = 0; i < 5; i++)
  {
    printf("\nDigite o valor para a posicao %d do vetor: ", i);
    scanf("%d",&vec[i]);
  }

  for (int n = 4 ; n >= 0; n--)
  { 
    aux = vec[n]; // 5
    vec[n] = vec[n-1]; //4
    vec[n-1] = aux;

  } 
  printf("\n Valores do vetor : ");
  for (int i = 0; i < 5; i++)
  {
    printf("%d ", vec[i]);
  }
  return 0;
}