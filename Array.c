/*
* File Name : Array.c
* ID : 104213018
* Author : 蔣青嵐
*/
#include <stdio.h>
int isPrime(int x) {
    int i;
    if(x == 1) {
        return 0;
    }
    for(i = 2; i < x; i++) {
        // 判斷是否整除
        if(x % i == 0) {
            // 非質數，回傳0
            return 0;
        }
    }
    // 質數，回傳1
    return 1;
}
int main() {
    // 開一大小為 n的陣列並存入 n個整數
    int n, i, j, max, min;
    scanf("%d", &n);

    int num[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
    // 找出 n個整數中的第一個質數並將其設為 max、min的初始值
    for(i = 0; i < n; i++) {
        if(isPrime(num[i]) == 1) {
            max = num[i];
            min = num[i];
            i = j;
            break;
        }
    }
    /*
    max = num[1];
    min = num[1];
    */

    // 找出 n個整數中最大及最小的質數
    for(i = j; i < n; i++) {
        if(isPrime(num[i]) == 1) {
            if(max < num[i]) {
                max = num[i];
            }
            if(min > num[i]) {
                min = num[i];
            }
        }
    }
    printf("max: %d\n", max);
    printf("min: %d", min);
}
