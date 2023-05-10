//
// Created by DZH on 2023/5/5.
//
//base.c --以十进制、八进制、十六进制打印十进制数 100

#include <stdio.h>
int main(void) {
  int x = 100;

  printf("dec = %d; octal = %o; hex = %x\n", x, x, x);   //无进制表示
  printf("dec = %d; octal = %#o; hex = %#x\n", x, x, x); //有进制表示

  return 0;
}