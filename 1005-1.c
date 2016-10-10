#include <stdio.h>
// 反轉數
int reverse(int a) { // int x
    int b, sum = 0; // int y = 0
    while(a != 0) { // x != 0
        b = a % 10; // y = 10 * y + x % 10
        sum = sum * 10 + b;
        a = a / 10; // x = x / 10
    }
    return sum; // y
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", reverse(n));
}
