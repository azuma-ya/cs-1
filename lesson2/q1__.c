
#include <stdio.h>

int main(void)
{
  int n;
  printf("input:");
  scanf("%d", &n);
  printf("%d ÷ 5 = %d 余り %d \n", n, n/5, n%5);
  return 0;
}