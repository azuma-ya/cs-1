#include <stdio.h>

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

int myFunc(int n) {
  if(func0(n) + func1(n) == func0(n + 1) + func1(n + 1)){
     printf("w[%d]=%d\n", n, func0(n) + func1(n));
     return 0;
  }
  return 1;
}

int loop(int start, int end, int (*func)(int)){
  if(start < end && func(start))loop(start + 1, end, func);
}

int main(void) {
  loop(1, 1000, myFunc);
  return 0;
};