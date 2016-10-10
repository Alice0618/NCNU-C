#include <stdio.h>
// 印出所需的字元個數
void print(char c, int n) {
    int i;
    for(i = 1; i <= n; i++) {
        printf("%c", c);
    }
}
// 印出三角形
int main() {
    int i, n;
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        print(' ', n - i);
        print('*', 2 * i - 1);
        printf("\n");
    }
}
