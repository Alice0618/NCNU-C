/*
一個數字可以用質因數分解來表達，以 5! = 120 為例，可以分解為 2^3 * 3^1 * 5^1 就可以用（3, 1, 1）來表達，
請寫出一個程式，算出輸入值的階乘，並算出其因式分解的數列
*/

#include <stdio.h>
int recursive(int a) {
    if(a > 0) {
        return a * recursive(a - 1);
    } else {
        return 1;
    }
}
int operationFun(int b) {
    int i, add;
    for(i = 2; i <= b; i++) {
        add = 0;
        while(b % i == 0) {
            b = b / i;
            add = add + 1;
        }
        if(add > 0) {
            printf("%d ", add);
        }
    }
}
int main() {
    int n, sum;
    scanf("%d", &n);
    printf("%d! = %d\n", n, recursive(n));
    sum = recursive(n);
    operationFun(sum);
    printf("\n");
}
