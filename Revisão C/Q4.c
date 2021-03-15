#include <stdio.h>
#include <math.h>

float calcDelta(float a,float b,float c){
  return ((b*b) - 4 * a * c);
}
void calcRaizes(float delta,float *r1,float *r2,float a,float b){

  *r1 = (-b + sqrt(delta))/(2* a);
  *r2 = (-b - sqrt(delta))/(2* a);
}

int main (void) {
  while (1){
    float a, b, c;
    float delta;
    float raiz1;
    float raiz2;


    printf("\n Informe o coeficiente A: ");
    scanf("%f",&a);
    printf("\n Informe o coeficiente B: ");
    scanf("%f",&b);
    printf("\n Informe o coeficiente C: ");
    scanf("%f",&c);

    delta = calcDelta( a, b, c);

    if (delta == 0){
      calcRaizes(delta,&raiz1,&raiz2, a, b);
      printf("Duas raizes reais e igual %.1f e %.1f", raiz1,raiz2 );
    }else if(delta > 0) {
      calcRaizes(delta,&raiz1,&raiz2, a, b);
      printf("Duas raizes reais e diferentes %.1f e %.1f", raiz1,raiz2 );
    }else {
      printf("Não possui raiz real! ");
    }
  }
    
  return 0;
}