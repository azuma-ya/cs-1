    
#include <stdio.h>

int main(void)
{
  int n,count=0;
  printf("Input positive integer:");scanf("%d",&n);
  if(n < 0)puts("Error");
  else{
    for (int i = 1; i <= n;i++){
      if(i*i > n)break;
      if(n%i != 0)continue;
      printf("%d × %d\n",n/i,i);
    }
  }
  return 0;
}