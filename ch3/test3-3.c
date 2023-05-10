/**
 * @file test3-3.c
 * @project c_study
 * @author Di Zehan
 * @author_email dizehan@foxmail.com
 * @date 2023/5/10
 * @brief 发出一声警报，然后打印下面的文本
 * @details 发出一声警报，然后打印下面的文本
*/

#include <stdio.h>
int main(void) {

  printf("\a"); // 输出一声警报
  printf("Startled by the sudden sound, Sally shouted,\n");
  printf("\"By the Great Pumpkin, what was that!\n");

  return 0;
}