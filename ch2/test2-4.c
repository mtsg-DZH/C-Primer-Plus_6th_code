//
// Created by DZH on 2023/5/3.
//
#include <stdio.h>
void jolly(void);
void deny(void);
int main(void){

    jolly();
    jolly();
    jolly();
    deny();

    return 0;
}

void jolly(void){
    printf("For he's a jolly good fellow!\n");
}
void deny(void){
    printf("Which nobody an deny!\n");
}