#include <stdio.h>
int main() {
    int n, i, j, a, b, sum;
    scanf("%d", &n);
    int num[n];
    // printf("n: %d\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);
        sum = 0;
        for(j = a; j <= b; j++) {
            if(j % 2 != 0) {
                sum = sum + j;
            } else {
                continue;
            }
        }
        num[i] = sum;
    }
    for(i = 0; i < n; i++) {
        printf("%d\n", num[i]);
    }
}
