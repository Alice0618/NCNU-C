#include <stdio.h>
// 逼近測試法
// 1 / n 次方
// 先作 x ^ n
double power(double x, int n) {
    // x的 n次方為 x乘以自己 n次
    // 1 * (x ^ n)
    int i;
    double result = 1;
    for(i = 0; i < n; i++) {
        result = result * x;
    }
    return result;
}
// 再作 x ^ (1/ n)
double root(double x, int n) {
    double left, right, mid;
    if(x >= 1) {
        left = 1;
        right = x;
    } else {
        left = 0;
        right = x;
    }
    mid = (left + right) / 2;
    while(mid > left && mid < right) {
        // printf("%lf\n",mid);
        if(mid * mid > x) {
            right = mid;
        } else if(mid * mid < x) {
            left = mid;
        } else {
            return mid;
        }
        mid = (left + right) / 2;
    }
    return mid;
}
int main() {
    int n;
    double x;
    scanf("%lf %d", &x, &n);
    printf("%lf\n", power(x, n));
    printf("%lf", root(x, n));
}
