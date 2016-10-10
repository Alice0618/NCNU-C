#include <stdio.h>
int main() {
    int n, R, r, i, j;
    scanf("%d", &n);
    int go[n], check[n];

    for(i = 0; i < n; i++) {
        go[i] = i + 1;
    }
    for(i = 0; i < n; i++) {
        check[i] = 0;
    }
    scanf("%d", &R);
    int save[R];
    for(i = 0; i < R; i++) {
        scanf("%d", &r); // r為生還者號碼
        save[i] = r;
    }
    if(n == R) {
        printf("*");
    }
    for(i = 0; i < n; i++) {
        for(j = 0; j < R; j++) {
            if(go[i] == save[j]) {
                check[i] = 1;
            }
        }
    }
    for(i = 0; i < n; i++) {
        if(check[i] == 0) {
            printf("%d ", go[i]);
        }
    }
    printf("\n");
}
