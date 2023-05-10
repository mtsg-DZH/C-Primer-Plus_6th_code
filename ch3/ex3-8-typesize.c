/**
 * @file ex3-9-typesize.c
 * @project c_study
 * @author Di Zehan
 * @author_email dizehan@foxmail.com
 * @date 2023/5/9
 * @brief 打印类型大小
 * @details 利用sizeof()函数打印类型大小,1byte = 8bit
*/

#include <stdio.h>
int main(void) {
//  C99 为类型大小提供%zd转换说明
  printf("Type char has a size of %zd bytes.\n", sizeof(char));
  printf("Type int has a size of %zd bytes.\n", sizeof(int));
  printf("Type long has a size of %zd bytes.\n", sizeof(long));
  printf("Type long long has a size of %zd bytes.\n",
         sizeof(long long));
  printf("Type float has a size of %zd bytes.\n", sizeof(float));
  printf("Type double has a size of %zd bytes.\n",
         sizeof(double));
  printf("Type long double has a size of %zd bytes.\n",
         sizeof(long double));

  return 0;

}