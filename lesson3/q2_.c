#include <stdio.h>

int main(void)
{
  int a;
  printf("Input integer:");scanf("%d",&a);
  if(a % 2)
    puts("ODD");
  else
    puts("EVEN");
  return 0;
}