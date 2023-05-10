/**
 * @file test3-4.c
 * @project c_study
 * @author Di Zehan
 * @author_email dizehan@foxmail.com
 * @date 2023/5/10
 * @brief 读取一个浮点数，先打印成小数点形式，在打印成指数形式。然后，如果系统支持打印成p计数法(十六进制计数法).
 * @details 读取一个浮点数，先打印成小数点形式，在打印成指数形式。然后，如果系统支持打印成p计数法(十六进制计数法).
*/

#include <stdio.h>
int main(void) {
  float num;

  printf("Enter a floating-point value: ");
  scanf("%f", &num);
  printf("fixed-point notation: %f\n",num);
  printf("exponential notation: %e\n", num);
  printf("p notation: %a\n", num);

  return 0;
}