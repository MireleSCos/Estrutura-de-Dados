#include <stdio.h>

#include "vetor.h"

int main(void)
{
  Vetor * vet;
  vet = cria_vetor(3);
  insere_vetor(vet, 1);
  insere_vetor(vet, 2);
  insere_vetor(vet, 3);
  insere_vetor(vet, 4);
  insere_vetor(vet, 5);

  printf("Tamanho do vetor %d", tamanho_vetor(vet));
  printf("Posição 1 do vetor %d", acesse_vetor(vet, 1));
  printf("Posição 2 do vetor %d", acesse_vetor(vet, 2));
  printf("Posição 3 do vetor %d", acesse_vetor(vet, 3));
  
  libera_vetor(vet);

  return 0;
}
