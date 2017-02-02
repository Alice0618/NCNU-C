#include <stdio.h>
int main() {
    int n, add = 1;
    scanf("%d", &n);
    // 將輸入的數字做運算直到數值為1
    while(n != 1) {
        if(n % 2 != 0) {
            n = 3 * n + 1;
        } else {
            n = n / 2;
        }
        add = add + 1;
    }
    printf("%d", add);
}
