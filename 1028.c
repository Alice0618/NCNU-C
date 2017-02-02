#include <stdio.h>
// x ^ (m / n)
// (x ^ (1 / n)) ^ m

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
        if(power(mid, n) > x) {
            right = mid;
        } else if(power(mid, n) < x) {
            left = mid;
        } else {
            return mid;
        }
        mid = (left + right) / 2;
    }
    return mid;
}
double expp(double x,int n,int m) {
    return power(root(x, n), m);
}
// 1.3 轉成 13 / 10
double expdouble(double x, double y) {
    int n = 1;
    while((int) y != y) {
        y = y * 10;
        n = n * 10;
    }
    return expp(x, n, y);
}
int main() {
    printf("%lf", expdouble(4.0, 1.3));
}
