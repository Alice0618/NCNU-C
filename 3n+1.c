/*
* File Name : 3n+1.c
* ID : 104213018
* Author : 蔣青嵐
*/
#include <stdio.h>
// 若輸入的 n為 Odd，則作 3n + 1運算
// 若輸入的 n為 Even，則作 n / 2運算
// 計算總共進行了 count次運算並回傳
int len(int n) {
    int count = 1;
    while (n != 1) {
        if(n % 2 == 1) {
            n = 3 * n + 1;
        } else {
            n = n / 2;
        }
        count = count + 1;
    }
    return count;
}
// 計算 sta~end區間內數字，最大 count數是多少
int main() {
    int sta, end, i, tmp;
    for(;;) {
        scanf("%d %d", &sta, &end);
        tmp = 0;
        for(i = sta; i <= end; i++) {
            if(len(i) > tmp) {
                tmp = len(i);
            }
        }
        printf("%d %d %d\n", sta, end, tmp);
    }
}
