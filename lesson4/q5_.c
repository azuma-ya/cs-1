#include <stdio.h>

int main(void)
{
  int x;
  printf("Input positive integer:");scanf("%d",&x);
  if(x < 0)puts("Error");
  else{
    int i = 0;
    while(i <= x){
      printf("i:%d\n",i++);
    }
  }
  return 0;
}