#include <stdio.h>

int func(int x, int y, int z){
  int pow_x = 1;
  for (int i = 0; i < y; i++)pow_x *= x;
  return pow_x % z;
}

int main(void){
  int x, y, z;
  printf("x:");scanf("%d",&x);
  printf("y:");scanf("%d",&y);
  printf("z:");scanf("%d",&z);
  int pow_x = 1;
  for (int i = 0; i < y; i++)pow_x *= x;
  printf("f(%d,%d,%d)=%d\n",x,y,z,pow_x%z);

  // for (int x = 2; x < 7; x++){
  //   for (int y = 2; y < 7; y++){
  //     if(func(x,y,7) == 1)printf("x:%d,y:%d\n",x,y);
  //   }
  // }
  
  return 0;
}