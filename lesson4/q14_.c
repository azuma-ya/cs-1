    
#include <stdio.h>

int main(void)
{
  int n, sum=0;
  printf("Input positive integer:");scanf("%d",&n);
  if(n < 0)puts("Error");
  else{
    printf("%d\n",n*(n+1)/2);
    for (int i = 1; i <= n;i++){
      sum += i;
    }
    printf("%d\n",sum);
  }
  return 0;
}