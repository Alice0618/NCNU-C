#include <stdio.h>
int main() {
    int n, i, j, tmp, max, min, mode, count = 0;
    float average, add = 0, median;
    scanf("%d", &n);
    int num[n];
    for(i = 0; i < n; i++) { // 平均數
        scanf("%d", &num[i]);
        add = add + num[i];
    }
    average = add / n;

    for(i = 0; i < n; i++) { // 最大最小值
        for(j = i + 1; j < n; j++) {
            if(num[j] > num[i]) {
                tmp = num[i];
                num[i] = num[j];
                num[j] = tmp;
                max = num[0];
                min = num[n - 1];
            }
        }
    }

    if(n % 2 == 0) { // 中位數
        median = (num[n / 2] + num[n / 2 + 1]) / 2;
    } else if(n % 2 != 0) {
        median = num[n / 2 + 1];
    }

    printf("最小值: %d", min);
    printf("\n最大值: %d", max);
    printf("\n平均值: %f", average);
    printf("\n中位數: %f\n", median);
    // printf("\n眾數: ", mode);
}
