#include <stdio.h>
int main() {
    int n, i, j;//第i列, 第j行
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            printf("%2d", i);
        }
        for(j = i + 1; j <= n; j++) {
            printf("%2d", j);
        }
        printf("\n");
    }
}
