#include <stdio.h>
int main() {
    int n, i, per = 0;
    float average, add = 0;
    scanf("%d", &n);
    int num[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &num[i]);// 存分數到陣列中
        add = add + num[i];
    }
    average = add / n;
    printf("average: %f\n", average);
    for(i = 0; i < n; i++) {
        if(num[i] < average) {
            per = per + 1;
        }
    }
    printf("number: %d\n", per);
}
