#include <stdio.h>

int max(int x, int y){
  return x > y ? x : y;
} 

int min(int x, int y){
  return x < y ? x : y;
} 

int pow_n(int x, int y){
  int pow_x = 1;
  for (int i = 0; i < y; i++)pow_x *= x;
  return pow_x;
}

int func(int x, int y, int z){
  return pow_n(max(x,y) , min(x,y)) % z;
}

int main(void){
  // int a,p = 991,q = 997;
  // printf("input integer:");scanf("%d",&a);
  // while((a % p != 0) || (a % q != 0))a++;
  // printf("output integer:%d\n",a);

  for (int x = 0; x < 11; x++){
    for (int y = 0; y < 11; y++){
      if((func(x,y,11) == 1) && x != y){
        printf("(x,y)=(%d,%d)\n",x,y);
      }
    };
  };

  return 0;
}