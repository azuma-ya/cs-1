#include <stdio.h>

int main(void)
{
  int x;
  printf("Input positive integer:");scanf("%d",&x);
  while(x >= 0){
    printf("%d\n",x--);
  }
  return 0;
}