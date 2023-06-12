#include <stdio.h>

int str_char(char s[], char c){
  printf("%c\n",c);
  printf("%d\n",s[0]);
  for (int i = 0; s[i] != '\0'; i++){
    if(s[i] == c){
      return i;
    }
  }
  return -1;
}

int main(void){
  int no;
  char ch[10];

  printf("英文字を入力せよ:");
  scanf("%s",ch);

  // printf("%c",ch[0]);
  no = str_char("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz", ch[0]) +1;

  printf("%d\n", no);
  return 0;
}