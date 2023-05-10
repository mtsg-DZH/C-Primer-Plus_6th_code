/**
 * @file ex3-10-escape.c
 * @project c_study
 * @author Di Zehan
 * @author_email dizehan@foxmail.com
 * @date 2023/5/9
 * @brief 使用转义序列
 * @details 使用转义序列示意：
 * \a 警报 \b 退格/光标前移一位不会擦除所经过的字符
 * \n 换行/光标移到下一行，不对本行光标后字符操作 \t 水平制表符，一般9列 \r 回车/转到行首
*/

#include <stdio.h>
int main(void) {
  float salary;

  printf("\aEnter your desired monthly salary: ");  // 1
  printf(" $_______\b\b\b\b\b\b\b");                // 2
  scanf("%f", &salary);
  printf("\n\t$%.2f a month is $%.2f a year", salary, salary*12.0); // 3
  printf("\rGee!\n");                                                 // 4

  return 0;
}