//
// Created by DZH on 2023/5/4.
//
#include <stdio.h>
void one_three();
void two();
int main(void){

    printf("starting now:\n");
    one_three();
    printf("done!\n");

    return 0;
}

void one_three(void){
    printf("one\n");
    two();
    printf("three\n");
}

void two(void){
    printf("two\n");
}