#include <stdio.h>
int main() {
    int n, farmer, sur, num, lev, get, sum, i, j;
    scanf("%d", &n);
    int bon[n];
    for(i = 0; i < n; i++) {
        sum = 0;
        scanf("%d", &farmer);
        for(j = 0; j < farmer; j++) {
            scanf("%d %d %d", &sur, &num, &lev);
            get = sur * lev;
            sum = sum + get;
        }
        bon[i] = sum;
    }
    printf("\n");
    for(i = 0; i < n; i++) {
        printf("%d\n", bon[i]);
    }
}
