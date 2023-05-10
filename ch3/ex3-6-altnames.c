/**
 * @file ex3-6-altnames.c
 * @progect c_study
 * @author Di Zehan
 * @author_email dizehan@foxmail.com
 * @date 2023/5/9
 * @brief 可移值整数类型名
 * @details 利用 inttypes.h 实现可移值整数类型名
*/

#include <stdio.h>
#include <inttypes.h>
int main(void) {
  int32_t me32; //me32是一个32位有符号整型变量

  me32 = 45933945;
  printf("First, assume int32_t is int: ");
  printf("me32 = %d\n", me32);
  printf("Next, let's not make any assumptions.\n");
  printf("Instead, use a \"macro\" from inttypes.h: ");
  printf("me32 = %" PRId32 "\n", me32);

  return 0;
}

