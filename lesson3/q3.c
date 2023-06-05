#include <stdio.h>
int main(void)
{
  int n;
  printf("Input integer:");scanf("%d",&n);
  if(n == 0)
    puts("0");
  else if(n > 0)
    puts("+");
  else if(n < 0)
    puts("-");
  return 0;
}