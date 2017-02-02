#include <stdio.h>
// 遞迴
// 河內塔 hanoi

// n個碟子從 from柱子搬到 to柱子，empty為空著的柱子
int move(int n, int from, int to, int empty) {
    if(n == 0) {
        return;
    }
    move(n - 1, from, empty, to);
    printf("move %d to %d\n", from, to);
    move(n - 1, empty, to, from);
}
int main() {
    move(2, 1, 2, 3);
}
