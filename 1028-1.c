#include <stdio.h>
#include <math.h>
// 平均值、標準差

int main() {
    int n, i;
    scanf("%d", &n);
    double num[n];
    for(i = 0; i < n; i++) {
        scanf("%lf", &num[i]);
    }
    double sum = 0;
    for(i = 0; i < n; i++) {
        sum = sum + num[i];
    }
    // 平均值
    double avg = sum / n;

    sum = 0;
    for(i = 0; i < n; i++) {
        sum = sum + (num[i] - avg) * (num[i] - avg);
    }
    // 標準差
    double dev = sqrt(sum / n);

    printf("avg:%lf\n", avg);
    printf("dev:%lf", dev);
}
