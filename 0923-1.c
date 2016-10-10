#include <stdio.h>
int sum(int n) {
    return n * (n + 1) / 2;
}
int squareSum(int n) {
    return n * (n + 1) * (2 * n + 1) / 6;
}
int main() {
    int n;
    scanf("%d", &n);
    printf("sum of 1 .. %d is %d\n", n, sum(n));
    printf("squareSum of 1^2 .. %d^2 is %d\n", n, squareSum(n));
}
