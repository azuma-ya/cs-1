#include <stdio.h>
#define N 10000

int func(int x, int y) {
  if(y){
    if(x == 0)return 222;
    else if(x == 1)return 888;
    else return (func(x - 2, y) + func(x - 1, 1 - y))/2;
  } else {
    if(x == 0)return 111;
    else if(x == 1)return 999;
    else return (func(x - 2, y) + func(x - 1, 1 - y))/2;
  };
}

int main(void) {
  for (int i = 1; i < N; i++){
    if(func(i, 0) + func(i, 1) == func(i + 1, 0) + func(i + 1, 1)){
      printf("w[%d]=%d\n", i, func(i, 0) + func(i, 1));
      return 0;
    }
  }
  return 0;
};