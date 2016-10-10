/*
* File Name : Max.c
* ID : 104213018
* Author : 蔣青嵐
*/
#include <stdio.h>
int main() {
    int n, i, j, max;
    // 輸入整數n代表將輸入n個整數
    scanf("%d", &n);
    int num[n];
    // 將n個整數存入num陣列
    for(i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
    // 找出陣列中的最大值
    max = num[0];
    for(i = 1; i < n; i++) {
        if (max < num[i]) {
            max = num[i];
        }
    }
    printf("%d\n", max);
}
