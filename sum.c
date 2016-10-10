#include <stdio.h>
// sum函數做級數運算並回傳級數值add
int sum(int n) {
    int i, add = 0;
    // 從1*(1+1)加到n*(n+1)
    for(i = 1; i <= n; i++) {
        add = add + i * (i + 1);
    }
    return add;
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", sum(n));
}
