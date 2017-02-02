/*
* File Name : diamond.c
* ID : 104213018
* Author : 蔣青嵐
*/
#include <stdio.h>
// 菱形
// 印出所需的字元個數
void print(char c, int n) {
    int i;
    for(i = 1; i <= n; i++) {
        printf("%c", c);
    }
}
int main() {
    int i, n;
    scanf("%d", &n);
    // 印出上半部三角形
    for(i = 1; i <= n; i++) {
        print(' ', n - i);
        print('x', 2 * i - 1);
        printf("\n");
    }
    // 印下半部三角形
    for(i = n - 1; i >= 1; i--) {
        print(' ', n - i);
        print('x', 2 * i - 1);
        printf("\n");
    }
}
