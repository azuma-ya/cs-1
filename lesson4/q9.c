#include <stdio.h>

int main(void)
{
  int x;
  printf("Input positive integer:");scanf("%d",&x);
  if(x < 0)puts("Error");
  else{
    while(x-- > 0){
      putchar("*");
      putchar("\n");
    }
  }
  return 0;
}