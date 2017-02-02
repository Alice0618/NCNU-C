/*
* File Name : Run.c
* ID : 104213018
* Author : 蔣青嵐
*/
#include <stdio.h>
// list all permulations of an array
// @data array of chars to permulate
// @n length of array

void swap(int d[], int x, int y) {
    int tmp = d[x];
    d[x] = d[y];
    d[y] = tmp;
}

// d是每位學生可以跑的距離
// n是學生數
// target是老俞想跑的距離
// from是由哪個學生之後挑人
// got 是已經找到幾個學生
// killo 是已經找到的學生共可以跑多遠
void run2(int d[], int n, int target, int from, int got, int killo) {
    // 終止條件
    int i, j;
    killo = 0;
    // 找到的學生共可跑的距離
    for(j = 0; j < got; j++) {
        killo = killo + d[j];
    }
    // 終止條件為當找到的學生共可跑的距離等於老俞要跑的距離
    if(killo >= target) {
        for(i = 0; i < got; i++) {
            printf("%d ", d[i]);
        }
        printf("\n");
        return;
    }

    // 試圖選擇第 i個元素
    for(i = from; i < n; i++) {
        // 選 i，並將此值存到前面去
        swap(d, i, got);
        // 遞迴處理剩下的資料
        // 從 i+1而非從 from開始選，是為避免重複選到相同的組合
        run2(d, n, target, i + 1, got + 1, killo);
        // 回復原值
        swap(d, i, got);
    }
}

// d是每位學生可以跑的距離
// n是學生數
// target是老俞想跑的距離
void run(int d[], int n, int target) {
    run2(d, n, target, 0, 0, 0);
}

void main() {
    int target, n, i;
    scanf("%d", &target);
    scanf("%d", &n);
    int d[n];
    for(i = 0; i < n; i++){
        scanf("%d", &d[i]);
    }
    printf("\n");
    run(d, n, target);
}
