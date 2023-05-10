//
// Created by DZH on 2023/5/5.
//
// print2.c --更多printf()的特性
// 书中此示例适用于int为32位的系统,此时可看出差别，作者平台默认为64位(目前大部分流行的平台为64位),使得输出4与教材不一致。可通过设定编译器指令
// int类型的精度。

#include <stdio.h>

int main(void) {
  unsigned int un = 3000000000; // int 为32位和short为16位的系统
  short end = 200;
  long big = 65537;
  long long verybig = 12345678908642;

  printf("un = %u and not %d\n", un, un);
  printf("end = %hd and %d\n", end, end);
  printf("big = %ld and not %hd\n", big, big);
  printf("verybig = %lld and not %ld\n", verybig, verybig); //由于默认int/float 64位精度，输出与教材不同，可将%ld 改为%d 得到与教材一致输出。

  return 0;
}