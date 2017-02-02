/*
* File Name : shuffle.c
* ID : 104213018
* Author : 蔣青嵐
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int data[], int x, int y) {
    int tmp = data[x];
    data[x] = data[y];
    data[y] = tmp;
}

void print(int data[], int from, int len) {
    int i, j;
    char color[] = {'S', 'H', 'D', 'C'};
    char num[] = {'A', 'K', 'Q', 'J', 'T', '9', '8', '7', '6', '5', '4', '3', '2'};

    // 若與前一張花色相同，則只印出號碼
    // 若與前一張花色不同，則印出號碼及數字，並換行
    for(i = from; i < from + len; i++) {
        if(i >= from + 1 && color[data[i]/len] == color[data[i - 1]/len]) {
            printf("%c ", num[data[i]%len]);
        } else {
            printf("\n");
            printf("%c %c ", color[data[i]/len], num[data[i]%len]);
        }
    }
    printf("\n");
}

void shuffle(int data[], int len) {
    int i, x, y;
    for(i = 0; i < 2 * len; i++) {
        x = rand() % len;
        y = rand() % len;
        swap(data, x, y);
    }
}

// 插入排序
// 將 data[1]、data[r]的元素排序
int sort(int data[], int l, int r) {
    // 要插入的元素索引
    int insert;
    // 由第 2個元素開始插入
    for(insert = l + 1; insert <= r; insert++) {
        // tmp表示要插入的元素值
        int tmp = data[insert];
        // pos 表示要比較的位置值
        int pos;
        // 當上偽超過左邊界，且該位置的值 > tmp
        for(pos = insert - 1; pos >= l && data[pos] > tmp; pos--) {
            // 將 pos上的值往右邊移動
            data[pos + 1] = data[pos];
        }
        // 要插入的值應該放到 pos的右邊
        data[pos + 1] = tmp;
    }
}

void main() {
    int data[52];
    int i;

    // 函數 time為去系統要時間以作為函數 srand之種子
    // 因為每個起始時間都不一樣
    srand(time(NULL));

    for(i = 0; i < 52; i++) {
        data[i] = i;
    }
    shuffle(data, 52);
    // 排序四個人的牌
    for(i = 0; i < 4; i++) {
        sort(data, i * 13, i * 13 + 12);
    }
    // 發四份牌
    for(i = 0; i < 4; i++) {
        printf("\nP%d", i + 1);
        print(data, i * 13, 13);
    }
}
