#include <stdio.h>
// 最大值、最小值、總和

int main() {
    int data[10];
    int i, j, sum = 0, tmp;
    for(i = 0; i < 10; i++) {
        scanf("%d", &data[i]);
    }
    int max, min;
    max = data[0];
    min = data[0];
    for(i = 0; i < 10; i++) {
        sum = sum + data[i];
        if(max < data[i]) {
            max = data[i];
        }
        if(min > data[i]) {
            min = data[i];
        }
    }
    printf("sum: %d\n", sum);
    printf("max: %d\n", max);
    printf("min: %d", min);

    // for(i = 0; i < 10; i++) {
    //     sum = sum + data[i];
    // }
    // for(i = 0; i < 10; i++) {
    //     for(j = i + 1; j < 10; j++) {
    //         if(data[i] < data[j]) {
    //             tmp = data[i];
    //             data[i] = data[j];
    //             data[j] = tmp;
    //         }
    //     }
    // }
    // printf("sum: %d\n", sum);
    // printf("max: %d\n", data[0]);
    // printf("min: %d", data[9]);
}
