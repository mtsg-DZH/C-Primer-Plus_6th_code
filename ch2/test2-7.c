//
// Created by DZH on 2023/5/4.
//
#include <stdio.h>
void smile(void);
int main(void){
    int i, j;

    for (i = 3; i > 0; i--){
        for (j = 1; j <= i; j++)
            smile();
        printf("\n");
    }

    return 0;
}

void smile(void){
    printf("Smile!");
}
