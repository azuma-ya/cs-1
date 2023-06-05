    
#include <stdio.h>

int main(void)
{
  int n;
  printf("Input positive integer:");scanf("%d",&n);
  if(n < 0)puts("Error");
  else{
    
    for (int i = 1; i <= n;i+=2){
      printf("%d\n",i);
    }
  }
  return 0;
}