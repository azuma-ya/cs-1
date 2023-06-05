    
#include <stdio.h>

int main(void)
{
  int n,count=0;
  printf("Input positive integer:");scanf("%d",&n);
  if(n < 0)puts("Error");
  else{
    for (int i = 1; i <= n;i++){
      if(n%i == 0){
        printf("%d\n",i);
        count++;
      }
    }
    printf("count:%d\n",count);
  }
  return 0;
}