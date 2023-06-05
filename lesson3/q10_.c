#include <stdio.h>
int main(void)
{
  int a,b;
  printf("a:");scanf("%d",&a);
  printf("b:");scanf("%d",&b);
  printf("min = %d \n",(a < b) ? a : b);
  return 0;
}