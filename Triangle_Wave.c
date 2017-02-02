#include <stdio.h>
int main() {
    int n, A, F, i, j, k, l;
    // 輸入n為測資數
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        scanf("%d %d", &A, &F);
        printf("\n");
        // F組i號測資
        for(j = 1; j <= F; j++) {
            for(k = 1; k <= A; k++) {
                for(l = 1; l <= k; l++) {
                    printf("%d", k);
                }
                printf("\n");
            }
            for(k = A - 1; k >= 1; k--) {
                for(l = 1; l <= k; l++) {
                    printf("%d", k);
                }
                printf("\n");
            }
            printf("\n");
        }
    }
}
