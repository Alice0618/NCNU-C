#include <stdio.h>
void print(char c, int n) {
    int i;
    for(i = 1; i <= n; i++) {
        printf("%c", c);
    }
    printf("\n");
}
int main() { // 三角形
    int i, n;
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        print(' ', n - i);
        print('*', i); // printf('*', 2 * i - 1);
        printf("\n");
    }
}
