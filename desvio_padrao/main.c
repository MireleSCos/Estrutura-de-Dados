#include <stdio.h>
#include <math.h>

#define n 3

float calcDesvioPadrao(float * vetor);

int main() {
  float vetor[n];

  for (int i = 0; i < n; i++) {
      scanf("%f", &vetor[i]);
  }

  printf("Resultado d = %.4f\n", calcDesvioPadrao(vetor));
  return 0;
}

float calcDesvioPadrao(float * vetor){
  float somatorio = 0;
  for (int i = 0; i < n; i++) {
      somatorio += vetor[i];
  }

  float media = somatorio / (float) n;

  float variacoes = 0;
  for (int i = 0; i < n; i++) {
      float v = vetor[i] - media;
      variacoes += (v * v);
  }

  float desvio = sqrt(variacoes / n);
  return desvio;
}