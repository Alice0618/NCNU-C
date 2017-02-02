#include <stdio.h>
// 排列組合
// 照順序排列
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

// 組合後的字母依順序排列
void insert(char data[], int from, int to) {
    int i;
    // diraction 為 from到 to的方向
    int diraction = 1;
    // from之值在右
    if(from > to) {
        diraction = -1;
    }
    // 將要當首位的字元先暫存至 tmp，以空出其位置
    char tmp = data[from];
    // i由 from開始，將同方向的元素複製到 i，一直到 to為止
    // (from值在左，將其右邊的值依序往左移，即往 to的方向走並依序將值往左移)
    for(i = from; i != to; i += diraction) {
        data[i] = data[i + diraction];
    }
    // 將要當首位的字元存至首位
    data[to] = tmp;
}

// 通用：任意位置 from開始排
void perm2(char data[], int n, int from) {
    int i;

    // 已排到第 n個，即每個字元皆已當過首位
    if(from == n) {
        print(data, n);
        return;
    }

    for(i = from; i < n; i++) {
        insert(data, i, from);
        perm2(data, n, from + 1);
        insert(data, from, i);
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
