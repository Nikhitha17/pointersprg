#include<stdio.h>
int main(){
  int i=0,j=0;
  char *str1="niki",*str2="hitha",str3[10];
  while(*str1){
      str3[i++]=*str1++;
  }
  while(*str2){
      str3[i++]=*str2++;
  }
  str3[i]='\0';
  printf("After concatenation the strings are\n");
  puts(str3);
  return 0;
}

