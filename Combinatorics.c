#include <stdio.h>
// 排列組合
// 排列
// 每個字元輪流當首位，往後做排序

// list all permulations of an array
// @data array of chars to permulate
// @n length of array


// 通用：任意位置 from開始排
void perm2(char data[], int n, int from) {
    int i;

    // 已排到第 n個，即每個字元皆已當過首位
    if(from == n) {
        for(i = 0; i < n; i++) {
            printf("%c", data[i]);
        }
        printf("\n");
        return;
    }

    // 做第 i個為首位之排列運算
    for(i = from; i < n; i++) {
        // choose element i to head
        // by swap i and from
        char tmp = data[i];
        data[i] = data[from];
        data[from] = tmp;
        // 做完 from後從其下一位置 from + 1繼續做
        perm2(data, n, from + 1);
        // 回復初始排列情況
        // swap again to undo the change
        tmp = data[i];
        data[i] = data[from];
        data[from] = tmp;
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
