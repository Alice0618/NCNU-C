#include <stdio.h>
// 累加
int AddRecursion(int x) {
    if(x == 1) {
        return 1;
    } else if(x >= 2) {
        return AddRecursion(x - 1) + x;
    }
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", AddRecursion(n));
}
