#include <stdio.h>
    // 逼近測試法
    // 根號 2
double sqrt(double x) {
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
    double x;
    scanf("%lf", &x);
    printf("%lf", sqrt(x));
}
