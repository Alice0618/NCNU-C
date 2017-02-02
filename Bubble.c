#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, m, i, j, k, tmp;
    n = rand() % 11 + 10;
    int num[n];
    for(i = 0; i < n; i++) {
        m = rand() % 101 - 50;
        num[i] = m;
    }
    printf("%d\n", n);
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(num[i] > num[j]) {
                tmp = num[i];
                num[i] = num[j];
                num[j] = tmp;
            }
        }
        for(k = 0; k < n; k++) {
            printf("%d ", num[k]);
        }
        printf("\n");
    }
    printf("\n");
    for(i = 0; i < n; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");
}
