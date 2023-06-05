#include <stdio.h>

// #define a 9999
// #define b 1111
// #define c 0


int main(void)
{
  // printf("%d\n",a&b);
  // printf("%d\n",b&c);
  // printf("%d\n",a|b);
  // printf("%d\n",b|c);
  // printf("%d\n",a^b);
  // printf("%d\n",b^c);
  // printf("%d\n",a>>2);
  // printf("%d\n",b<<2);
  // printf("%d\n",a&(b&&c));
  // printf("%d\n",b||c);

  int a[1000][2];
  a[0][0] = 111;
  a[0][1] = 222;
  a[1][0] = 999;
  a[1][1] = 888;

  for (int i = 2; i < 1000; i++){
    a[i][0] = (a[i-2][0] + a[i-1][1])/2;
    a[i][1] = (a[i-2][1] + a[i-1][0])/2;
  }
  // printf("%d\n",a[2][0]);
  // printf("%d\n",a[2][1]);
  // printf("%d\n",a[3][0]);
  // printf("%d\n",a[3][1]);

  int w[1000];
  for (int i = 2; i < 1000; i++){
    if((a[i][0] + a[i][1]) == (a[i+1][0] + a[i+1][1])){
      w[i] = a[i][0] + a[i][1];
      printf("w[%d]:%d\n",i,w[i]);
    }
  }

    return 0;
}