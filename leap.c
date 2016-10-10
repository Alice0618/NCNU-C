/*
* File Name : leap.c
* ID : 104213018
* Author : 蔣青嵐
*/
#include <stdio.h>
int main() {
    int y1, y2, i, add = 0;
    scanf("%d %d", &y1, &y2);
    // 算y1~y2的年份是否為閏年
    for(i = y1; i <= y2; i++) {
        // 若為閏年則做次數紀錄
        if(i % 400 == 0 || i % 100 != 0 && i % 4 == 0) {
            add = add + 1;
        }
    }
    printf("%d\n", add);
}
