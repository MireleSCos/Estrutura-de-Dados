#include <stdio.h>
#include <math.h>

#define QTD_ELEMENTOS 3

float calcDesvioPadrao(float * vetor);

int main() {
  float vetor[QTD_ELEMENTOS];

  for (int i = 0; i < QTD_ELEMENTOS; i++) {
      scanf("%f", &vetor[i]);
  }

  printf("Resultado d = %.4f\n", calcDesvioPadrao(vetor));
  return 0;
}

float calcDesvioPadrao(float * vetor){
  float somatorio = 0;
  for (int i = 0; i < QTD_ELEMENTOS; i++) {
      somatorio += vetor[i];
  }

  float media = somatorio / (float) QTD_ELEMENTOS;

  float variacoes = 0;
  for (int i = 0; i < QTD_ELEMENTOS; i++) {
      float v = vetor[i] - media;
      variacoes += (v * v);
  }

  float desvio = sqrt(variacoes / QTD_ELEMENTOS);
  return desvio;
}