#include <stdio.h>
int sum(int n) {
    if(n == 1) {
        return 1;
    }
    return sum(n - 1) + n;
}
/*
int sum(int n) {
    return n * (n + 1) / 2;
}
*/
/*
int sum(int n) {
    int i, s = 0;
    for(i = 1; i <= n; i++) {
        s = s + i;
    }
    return s;
}
*/
int main() {
    int n;
    scanf("%d", &n);
    printf("%d", sum(n));
}
