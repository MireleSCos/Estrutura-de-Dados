#include <stdio.h>

float calcMedia(float n1,float n2,float n3){
  return ((n1 + n2 + n3)/3);
}

float final(float media){
  return 7 - media;
}

int main (void) {
  while (1){
    float n1, n2, n3;
    float media;

    printf("\n Informe nota 1: ");
    scanf("%f",&n1);
    printf("\n Informe nota 2: ");
    scanf("%f",&n2);
    printf("\n Informe nota 3: ");
    scanf("%f",&n3);

    media = calcMedia( n1, n2, n3);

    if (media < 5){
      printf("Voce está REPROVADO! ");
    }else if(media > 5 && media < 7) {
      printf("Voce está na RECUPERAÇÃO, e precisa de %f para ser aprovado! ", final(media));
    }else {
      printf("Voce está APROVADO! ");
    }
  }
    
  return 0;
}