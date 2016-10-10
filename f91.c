#include <stdio.h>
/*
  1.定義參數的個數和意義
  2.用if表達"中止"條件
  3.用recursion化簡問題(90% 的狀況有迴圈)
*/
int f91(int n) {
    if (n >= 101) {
        return n - 10;
    } else {
        return f91(f91(n + 11));
    } // 遞迴的判斷式要寫在最後
}
int main() {
    int n;
    // while(1) {
    for(;;) { // 無限迴圈
        scanf("%d", &n);
        if (n == 0) {
            break;
        } else {
            printf("f91(%d) = %d\n", n, f91(n));
        }
    }
}
