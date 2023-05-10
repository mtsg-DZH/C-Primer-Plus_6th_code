/**
 * @file ex3-floaterr.c
 * @project c_study
 * @author Di Zehan
 * @author_email dizehan@foxmail.com
 * @date 2023/5/9
 * @brief 演示浮点数舍入错误
 * @details 演示浮点数舍入错误,由于float类型的数字通常只能存储按指数比例放大或缩小的6-7位有效数字,数量级相差过大的科学计数幅值变量加减结果一定是错误的。
*/

#include <stdio.h>
int main(void) {
  float a, b;

  b = 2.0e20 + 1.0;
  a = b - 2.0e20;
  printf("%f \n", a);

  return 0;
}