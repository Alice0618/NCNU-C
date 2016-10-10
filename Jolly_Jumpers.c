#include <stdio.h>
int main() {
    int n, input, tmp, check = 0, i, j;
    scanf("%d", &n);
    int num[n], ran[n - 1];
    for(i = 0; i < n; i++) {
        scanf("%d", &input);
        num[i] = input;
    }
    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j <= i + 1; j++) {
            tmp = num[j] - num[i];
            if(tmp < 0) {
                tmp = 0 - tmp;
            }
            ran[i] = tmp;
            if(0 < ran[i] && ran[i] < n) {
                check = check + 1;
            }
        }
    }
    if(check == n - 1) {
        printf("Jolly.\n");
    } else {
        printf("Not Jolly.\n");
    }
}
