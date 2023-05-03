//
// Created by DZH on 2023/5/3.
//
//编写一个程序,调用一次printf()函数，把你的名字打印在一行。在调用一次printf()函数，把你的姓名分别打印在
#include <stdio.h>
int main(void){
    char FirstName[]="Gustav";
    char FamilyName[]="Mahler";

    printf("%s %s\n", FamilyName, FamilyName);
    printf("%s\n", FirstName);
    printf("%s\n", FamilyName);
    printf("%s %s\n", FamilyName, FamilyName);

    return 0;
}