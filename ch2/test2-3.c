//
// Created by DZH on 2023/5/3.
//
#include <stdio.h>
int main(void){
    int ages;
    int livedays;

    printf("Please input your ages!\n");
    scanf("%d", &ages);
    livedays = 365 * ages;
    printf("you have lived %d days.\n",livedays);

    return 0;
}