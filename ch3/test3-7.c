/**
 * @file test3-7.c
 * @project c_study
 * @author Di Zehan
 * @author_email dizehan@foxmail.com
 * @date 2023/5/10
 * @brief 输入身高inch,输出cm单位身高
 * @details 输入身高inch,输出cm单位身高
*/

#include <stdio.h>
int main(void) {
  float height_inch;
  float height_cm;
  float inch2cm = 2.54f;

  printf("Enter your height(inch): ");
  printf("______\b\b\b\b\b\b");
  scanf("%f", &height_inch);
  height_cm = height_inch*inch2cm;
  printf("\nyour height is %f inch, it's %f cm.\n", height_inch, height_cm);

  return 0;
}