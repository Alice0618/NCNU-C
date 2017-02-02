/*
* File Name : Reverse_add.c
* ID : 104213018
* Author : 蔣青嵐
*/
#include <stdio.h>
// 若整數 x不為 0，則進行反轉
int reverse(int x) {
    int y, rev = 0;
    while(x != 0) {
        y = x % 10;
        rev = rev * 10 + y;
        x = x / 10;
    }
    return rev;
}
// 印出 n與其反轉數相加之和
int main() {
    int n;
    scanf("%d", &n);
    printf("%d", n + reverse(n));
}
