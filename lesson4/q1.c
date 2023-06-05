#include <stdio.h>
int main(void)
{
  int retry;
  do{
    int x;
    printf("x:");scanf("%d",&x);
    if(x >= 0)puts("+ or 0");else puts("-");
    printf("Retry? [yes:0]");scanf("%d", &retry);
  }while(retry == 0);
  return 0;
}