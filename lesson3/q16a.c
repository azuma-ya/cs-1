#include <stdio.h>
int main(void)
{
  int n;
  printf("n:");scanf("%d",&n);
  switch(n){
    case 101:puts("prime number!");break;
    case 103:puts("prime number!");break;
    case 105:puts("not prime number!");break;
    case 107:puts("prime number!");break;
    case 109:puts("prime number!");break;
    case 111:puts("not prime number!");break;
    default : puts("invalid number!");break;
  }
  return 0;
}