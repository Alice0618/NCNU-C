#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, m, per, i, j, tmp, check;
    scanf("%d", &n);
    int num[n];
    // int num_1[m];
    for(i = 0; i < n; i++) {
        num[i] = i + 1;
    }
    for(i = 0; i < n; i++) {
        j = rand() % n;
        tmp = num[i];
        num[i] = num[j];
        num[j] = tmp;
    }
    for(i = 0; i < n; i++) {
        printf("%2d ", num[i]);
        if(i % 7 == 6) {
            printf("\n");
        }
    }
    printf("\n");

    scanf("%d", &m);
    int num_1[m];
    for(i = 0; i < m; i++) {
        scanf("%d", &per);
        num_1[i] = per;
    }

    for(i = 0; i < n; i++) {
        check = 0;
        for(j = 0; j < m; j++){
            if(num[i] == num_1[j]) {
                check = 1;
                // printf("XX");
            }
        }
        if(check == 1) {
            printf("XX ");
        } else {
            printf("%2d ", num[i]);
        }
        if(i % 7 == 6) {
            printf("\n");
        }
    }
    printf("\n");
}
