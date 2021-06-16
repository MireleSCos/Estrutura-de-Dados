#include <stdio.h>

int mdc(int a, int b);

int main() {
  int a, b;
  printf("Valor de a: ");
  scanf("%d", &a);
  printf("Valor de b: ");
  scanf("%d", &b);
  printf("Resultado mdc = %d\n", mdc(a,b));
  return 0;
}
int mdc(int a, int b)
{
  if (b == 0) return a;
  if (b > 0) return mdc(b,(a%b));
  if  (b < 0) return mdc(a, -b);
}