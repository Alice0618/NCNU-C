#include <stdio.h>
int main() {
    int n, A, F, i, j, k, l;
    scanf("%d", &n);
    for(i = 1; i <= n; i++) { // n組測資
        scanf("%d %d", &A, &F);
        printf("\n");
        for(j = 1; j <= F; j++) { // F組i號測資
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
