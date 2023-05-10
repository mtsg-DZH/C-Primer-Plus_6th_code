/**
 * @file test3-1.c
 * @project c_study
 * @author Di Zehan
 * @author_email dizehan@foxmail.com
 * @date 2023/5/9
 * @brief 观察系统如何处理整数上溢、浮点数上溢和浮点数下溢
 * @details 观察系统如何处理整数上溢、浮点数上溢和浮点数下溢,
*/

#include <stdio.h>

int main(void) {
  int signed_bigint = 2147483647;
  unsigned int unsigned_bigint = 2147483647;
  float toobig = 3.434E36f;

  printf("The biggest signed int in %zd bits is %d.\n", sizeof(int)*8, signed_bigint);
  printf("The \"overflow\" is happen: %d + 1 = %d.\n", signed_bigint, signed_bigint + 1);
  printf("The biggest unsigned int in %zd bits is %d.\n", sizeof(unsigned int)*8, unsigned_bigint);
  printf("The \"overflow\" is happen: %d + 1 = %d.\n", unsigned_bigint, unsigned_bigint + 1);
//  浮点数的上溢下溢表现/overflow and underflow behavior of floating-point numbers
  printf("The bigfloat in %zd bits is %f.\n", sizeof(float)*8, toobig);
  printf("The \"overflow\" is happen: %f * %f= %f.\n", toobig, 100.0f, toobig*100.0f);
  printf("The \"underflow\" is happen: %f / %f= %f.\n", toobig, 100.0f, toobig/100.0f);

  return 0;
};