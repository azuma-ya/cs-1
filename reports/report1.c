#include <stdio.h>
#define N 10000

//一つの関数で再帰させる
// int func(int x, int y) {
//   if(y){
//     if(x == 0)return 222;
//     else if(x == 1)return 888;
//     else return (func(x - 2, y) + func(x - 1, 1 - y))/2;
//   } else {
//     if(x == 0)return 111;
//     else if(x == 1)return 999;
//     else return (func(x - 2, y) + func(x - 1, 1 - y))/2;
//   };
// }

int func1(int);
int func0(int n){
  if(n == 0)return 111;
  else if(n == 1)return 999;
  else return (func0(n - 2) + func1(n - 1))/2;
}

int func1(int n){
  if(n == 0)return 222;
  else if(n == 1)return 888;
  else return (func1(n - 2) + func0(n - 1))/2;
}

int main(void) {
  // for (int i = 1; i < N; i++){
  //   if(func(i, 0) + func(i, 1) == func(i + 1, 0) + func(i + 1, 1)){
  //     printf("w[%d]=%d\n", i, func(i, 0) + func(i, 1));
  //     return 0;
  //   }
  // }

  for (int i = 1; i < N; i++){
    if(func0(i) + func1(i) == func0(i + 1) + func1(i + 1)){
      printf("w[%d]=%d\n", i, func0(i) + func1(i));
      break;
    }
  }
  return 0;
};