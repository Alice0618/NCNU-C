#include <stdio.h>
// 排列組合
// 排列
// 每個字元輪流當首位，往後做排序

// list all permulations of an array
// @data array of chars to permulate
// @n length of array

void print (char data[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("%c", data[i]);
    }
    printf("\n");
}

void swap(char data[], int x, int y) {
    char tmp = data[x];
    data[x] = data[y];
    data[y] = tmp;
}

// 通用：任意位置 from開始排
void perm2(char data[], int n, int from) {
    int i;

    // 已排到第 n個，即每個字元皆已當過首位
    if(from == n) {
        print(data, n);
        return;
    }

    // 做第 i個為首位之排列運算
    for(i = from; i < n; i++) {
        swap(data, i, from);
        perm2(data, n, from + 1);
        swap(data, i, from);
    }
}

// 從頭開始排
void perm(char data[], int n) {
    perm2(data, n, 0);
}

void main() {
    char s[] = {'A', 'B', 'C'};
    perm(s, 3);
}
