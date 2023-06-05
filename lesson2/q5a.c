#include <stdio.h>

int main(void)
{
  int x;
  printf("x:");scanf("%d",&x);
  printf("f(%d)=%d\n",x,x*x*x+7*x*x-x+5);
  return 0;
}