/**
 * @file ex3-9-badcount.c
 * @project c_study
 * @author Di Zehan
 * @author_email dizehan@foxmail.com
 * @date 2023/5/9
 * @brief printf()参数错误的情况
 * @details 演示printf()参数错误的情况:参数过多，参数过少，参数类型不匹配。不同编译器结果可能不一样
*/

#include <stdio.h>
int main(void) {
  int n = 4;
  int m = 5;
  float f = 7.0f;
  float g = 8.0f;

  printf("%d\n", n, m); // 参数太多
  printf("%d %d %d\n", n); // 参数太少
  printf("%d %d\n", f, g); // 值的类型不匹配

  return 0;

}