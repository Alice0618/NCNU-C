/*
已知任意一個無法被 2 或 5 整除的整數 n，0 <= n <= 1000，有些 n 的倍數會是一連串的 1。

這些 n 的倍數中最小的是幾位數？

Ex:3 * 37 = 111 (三位數), 11 * 1 =11(兩位數);
*/

#include <stdio.h>
#include <stdlib.h>
int getFun(int a) {
    int b = 1, add = 1;
    while(b % a != 0) {
        b = b * 10 + 1;
        add = add + 1;
    }
    return add;
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", getFun(n));
}
