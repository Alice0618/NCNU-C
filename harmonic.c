/*
* File Name : harmonic.c
* ID : 104213018
* Author : 蔣青嵐
*/
#include <stdio.h>
// sum函數做調和級數運算並回傳級數值add
float sum(int n) {
    int i;
    float add = 0;
    // 從1/1加到1/n
    for(i = 1; i <= n; i++) {
        add = add + 1.0 / i;
    }
    return add;
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%f\n", sum(n));
}
