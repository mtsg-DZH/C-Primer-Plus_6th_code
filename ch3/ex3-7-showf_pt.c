/**
 * @file ex3-7-showf_pt.c
 * @project c_study
 * @author Di Zehan
 * @author_email dizehan@foxmail.com
 * @date 2023/5/9
 * @brief 简单描述
 * @details 详细描述
*/

#include <stdio.h>
int main(void){
  float aboat = 32000.0;
  double abet = 2.14e9;
  long double dip = 5.32e-5;

  printf("%f can be written %e\n", aboat, aboat);
//  下一行需要编译器支持C99或其中的相关特性
  printf("And it's %a in hexadecimal, powers of 2 notation\n", aboat);
  printf("%f can be written %e\n", abet, abet);
  printf("%Lf can be written %Le\n", dip, dip);

  return 0;

}
