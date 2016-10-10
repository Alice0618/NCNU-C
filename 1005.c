#include <stdio.h>
// 直角三角形
void print(char c, int n) {
    int i;
    for(i = 1; i <= n; i++) {
        printf("%c", c);
    }
}
int main() {
    int i, n;
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        print(' ', n - i);
        print('*', i);
        printf("\n");
    }
}
