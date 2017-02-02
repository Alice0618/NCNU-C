#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int data[], int x, int y) {
    int tmp = data[x];
    data[x] = data[y];
    data[y] = tmp;
}

void print(int data[], int len) {
    int i;
    for(i = 0; i < len; i++) {
        printf("%d ", data[i]);
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

void main() {
    int data[52];
    int i;
    int color[] = {'S', 'H', 'D', 'C'};
    int num[] = {'A', 'K', 'Q', 'J', '9', '8', '7', '6', '5', '4', '3', '2'};

    // 函數 time為去系統要時間以作為函數 srand之種子
    // 因為每個起始時間都不一樣
    srand(time(NULL));
    for(i = 0; i < 52; i++) {
        data[i] = i;
    }
    shuffle(data, 52);
    print(data, 52);
}
