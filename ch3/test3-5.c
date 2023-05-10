/**
 * @file test3-5.c
 * @project c_study
 * @author Di Zehan
 * @author_email dizehan@foxmail.com
 * @date 2023/5/10
 * @brief 输入年龄，输出该年龄对应的秒数
 * @details 输入年龄，输出该年龄对应的秒数
*/

#include <stdio.h>
int main(void) {
  int age;
  int year2second = 3.156e7;

  printf("Enter your age: ");
  scanf("%d",&age);
  printf("your age is %d, it's %d seconds.\n", age, age * year2second);

  return 0;
}

