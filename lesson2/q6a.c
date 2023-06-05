#include <stdio.h>

int main(void)
{
  double x;
  printf("x:");
  scanf("%lf", &x);
  printf("2 * %f = %f",x,2*x);
  return 0;
}