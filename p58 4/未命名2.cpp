#include "stdio.h" 
int main() 
{ char ch1,ch2;
 printf("请输入一个大写字母:");
  ch1=getchar(); 
  ch2=ch1+32; 
  putchar(ch2); 
  return 0; 
}
