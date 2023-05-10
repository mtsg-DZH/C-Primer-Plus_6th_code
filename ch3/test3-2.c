/**
 * @file test3-2.c
 * @project c_study
 * @author Di Zehan
 * @author_email dizehan@foxmail.com
 * @date 2023/5/10
 * @brief 提示输入一个ASCII码值，然后打印输入的字符。
 * @details 提示输入一个ASCII码值，然后打印输入的字符。
*/

#include <stdio.h>
int main(void){
  int ascii;

  printf("Please enter an ASCII code: ");
  scanf("%d",&ascii);
  printf("%d is the ASCII code for %c.\n", ascii, ascii);

  return 0;
}
