/**
 * @file ex3-5-charcode.c
 * @progect c_study
 * @author Di Zehan
 * @author_email dizehan@foxmail.com
 * @date 2023/5/9
 * @brief 显示字符的代码编号
 * @details 显示字符的代码编号
*/

#include <stdio.h>
int main(void) {
  char ch;

  printf("Please enter a character.\n");
  scanf("%c", &ch);      //用户输入字符
  printf("The code for %c is %d.\n", ch, ch);

  return 0;
}
