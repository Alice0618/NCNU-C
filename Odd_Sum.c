#include <stdio.h>
int main() {
    int n, i, j, a, b, sum;
    // n組陣列
    scanf("%d", &n);
    // 各個陣列n個數
    int num[n];
    // 作a、b間所有的奇數的和，並存入num陣列
    for(i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);
        sum = 0;
        for(j = a; j <= b; j++) {
            if(j % 2 != 0) {
                sum = sum + j;
            } else {
                continue;
            }
        }
        num[i] = sum;
    }
    for(i = 0; i < n; i++) {
        printf("%d\n", num[i]);
    }
}
