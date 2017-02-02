/*
* File Name : Ackerman.c
* ID : 104213018
* Author : 蔣青嵐
*/
#include <stdio.h>
// Ackerman函數
int A(int m, int n) {
    if(m == 0) {
        return n + 1;
    } else if(n == 0) {
        return A(m - 1, 1);
    } else {
        return A(m - 1, A(m, n - 1));
    }
}
int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    printf("%d", A(m, n));
}
