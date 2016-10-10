#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i, j, tmp;
    scanf("%d", &n);
    int num[n];
    for(i = 0; i < n; i++) {
        num[i] = i + 1;
    }
    for(i = 0; i < n; i++) { // 未排序
        j = rand() % n;
        tmp = num[i];
        num[i] = num[j];
        num[j] = tmp;
    }
    for(i = 0; i < n; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");
    for(i = 0; i < n; i++) { // 排序
        for(j = i + 1; j < n; j++) {
            if(num[j] > num[i]) {
                tmp = num[i];
                num[i] = num[j];
                num[j] = tmp;
            }
        }
        printf("%d ", num[i]);
    }
}
