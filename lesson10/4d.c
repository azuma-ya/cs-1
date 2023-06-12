#include <stdio.h>
#define NUM 10

int main(void){
  int no = NUM;
  char s[NUM][16];
  for (int i = 0; i < NUM; i++){
    printf("s[%d]:",i);
    scanf("%s", s[i]);
    if(s[i][0] == '$'){
      no = i;
      break;
    }
  }
  for(int i = 0; i < no; i++){
    printf("s[%d]:\"%s\"\n",i,s[i]);
  }
  return 0;
}