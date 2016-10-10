#include <stdio.h>
// 三次方
int sumCube(int n) {
    int i, sum = 0;
    for(i = 1; i <= n; i++) {
        sum = sum + i * i * i;
    }
    return sum;
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", sumCube(n));
}
