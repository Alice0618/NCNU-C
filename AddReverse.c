#include <stdio.h>
int reverseFun(int a) {
    int b, sum = 0;
    while(a != 0) {
        b = a % 10;
        sum = sum * 10 + b;
        a = a / 10;
    }
    return sum;
}
int main() {
    int n, i, num, add;
    scanf("%d", &n);//輸入n個數
    for(i = 1; i <= n; i++) {
        add = 0;
        scanf("%d", &num);
        while(num != reverseFun(num)) {
            num = num + reverseFun(num);
            add = add + 1;
        }
        printf("%d %d\n", add, num);
    }
}
