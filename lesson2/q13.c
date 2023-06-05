#include <stdio.h>

int main(void){
  double height ,wight;
  printf("height(cm):");
  scanf("%lf",&height);
  printf("wight(kg)");
  scanf("%lf",&wight);
  height /= 100;
  printf("BMI:%f\n", wight / (height * height));
  return 0;
}