#include <stdio.h>
#define pi 3.14

float calcACirculo(float raio){
  return pi * (raio * raio);
}

int main (void) {

  float raio;

  printf("Informe o raio do circulo : ");
  scanf("%f",&raio);

  float area = calcACirculo(raio);

  printf("A area do circulo é %f",area);
  return 0;
}