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
    // 依據傳入的 x設定左右邊界
    double left,right;
    if(x >= 1) {
        left = 1;
        right = x;
    } else {
        left = x;
        right = 1;
    }
    double mid = (left + right) / 2;
    // 取兩邊界之中間值不斷乘以 n次方，並調整左右邊界，以取得近似值
    while (mid > left && mid < right) {
        if (power(mid, n) > x) {
            right = mid;
        } else if (power(mid, n) < x) {
            left = mid;
        } else {
            return mid;
        }
        mid = (left + right) / 2;
    }
    return mid;
}
double expp(double x,int m,int n) {
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
    printf("%lf\n", expdouble(4.0, 1.3));
    printf("%lf", expp(3.0, 2.0, 1.0));
}
