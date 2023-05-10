/**
 * @file test3-6.c
 * @project c_study
 * @author Di Zehan
 * @author_email dizehan@foxmail.com
 * @date 2023/5/10
 * @brief 输入水的体积(夸脱),输出水分子数量
 * @details 输入水的体积(夸脱),输出水分子数量
*/

#include <stdio.h>
int main(void) {
  double volume; //水体积 unit:quart
  double density = 950; // 水密度 unit:g/quart
  double hydro_mass = 3.0e-23f; // 水分子质量

  printf("Enter water volume(quart): ");
  printf("______\b\b\b\b\b\b");
  scanf("%lf", &volume);
  printf("\n %.3f quart(s) water have about %e molecules", volume, volume*density/hydro_mass);

  return 0;
}