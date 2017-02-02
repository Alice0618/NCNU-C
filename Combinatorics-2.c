#include <stdio.h>
// 排列組合
// 照順序排列
// 組合
// 每個字元輪流當首位，往後做排序

// list all permulations of an array
// @data array of chars to permulate
// @n length of array

void swap(char data[], int x, int y) {
    char tmp = data[x];
    data[x] = data[y];
    data[y] = tmp;
}

// n為陣列長度
// m為想取的組合個數
// from為目前處理到哪個位置
// got為已經取了幾個
void comb2(char data[], int n, int m, int from, int got) {
    int i;
    if(m == got) {
        for(i = 0; i < m; i++) {
            printf("%c", data[i]);
        }
        printf("\n");
        return;
    }
    // 試圖選擇第 i個元素
    for(i = from; i < n; i++) {
        // 選 i，並把此值存到前面去
        swap(data, i, got);
        // 遞迴處理剩下的資料
        // 從 i+1而非從 from開始選，是為避免重複選到相同的組合
        comb2(data, n, m, i + 1, got + 1);
        // 回復原值
        swap(data, i, got);
    }
}

void comb(char data[], int n, int m) {
    comb2(data, n, m, 0, 0);
}

void main() {
    char s[] = {'A', 'B', 'C', 'D'};
    comb(s, 4, 2);
}
