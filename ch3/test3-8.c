/**
 * @file test3-8.c
 * @project c_study
 * @author Di Zehan
 * @author_email dizehan@foxmail.com
 * @date 2023/5/10
 * @brief 输入杯数，转换为品脱、盎司、汤勺、茶勺.
 * @details 1 pint = 2cups, 1 cup = 8 ounces, 1 ounce = 2 tablespoons, 1 tablespoon = 3 teaspoons.
 * 这sb单位制。。。
*/

#include <stdio.h>
int main(void) {
  float volume_cup;
  float pint2cup = 2;
  float cup2ounce = 8;
  float ounce2tablespoon = 2;
  float tablespoon2teaspoon = 3;

  printf("Enter cup(s): ");
  scanf("%f", &volume_cup);
  printf("\n");
  printf("%f cup(s) is %f pint(s).\n", volume_cup, volume_cup/pint2cup);
  printf("%f cup(s) is %f ounce(s).\n", volume_cup, volume_cup*cup2ounce);
  printf("%f cup(s) is %f tablespoon(s).\n", volume_cup, volume_cup*cup2ounce*ounce2tablespoon);
  printf("%f cup(s) is %f teaspoon(s).\n", volume_cup, volume_cup*cup2ounce*ounce2tablespoon*tablespoon2teaspoon);

  return 0;
}