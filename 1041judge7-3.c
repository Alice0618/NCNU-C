/*
費波那契數列，又稱為費氏數列。費式數列的前兩項為 1、1，之後的每- 一項為前兩項之和。 若以數學表示為 Fn = Fn-1 + Fn-2。
因此前十項為：1、1、2、3、5、8、13、21、34、55

請寫出迴圈版本。
請輸入第 n 項，並輸出該項結果。
*/

#include<stdio.h>
int f(int x) {
    int i, a, b, c;
    if (x == 1) {
        return 1;
    } else if (x == 2) {
        return 1;
    } else {
        a = 1, b = 1, c;
    }

    for (i = 3; i <= x; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int main() {
    int num;
    scanf("%d", &num);
    printf("%d\n", f(num));
}
