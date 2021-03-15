#include <stdio.h>

void paridade(int num){
  if (num % 2 == 0){
    printf("Número par !");
  }else{
    printf("Número impar !");
  }

}

int main (void) {
  while (1)
  {
    int num;

    printf("\n Informe um numero inteiro: ");
    scanf("%d",&num);

    paridade(num);
  }
    
  return 0;
}