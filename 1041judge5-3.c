/*
數學中，整數分解，又稱質因數分解，是將一個正整數，寫成幾個因數的乘積。例如給出數字 45，其可以分解成 3^2*5。
相信各位在國小時都了解怎麼樣用紙筆計算出質因數分解的結果，各位現在已經是資管人才，請用程式解決以前令人寫到髮指的整數分解。

請寫出一個程式，能把一個正整數，分解成其因數乘積，例如：12＝2^2*3。
*/

#include <stdio.h>
int operationFun(int a) {
    int i, add;
    for(i = 2; i <= a; i++) {
        add = 0;
        while(a % i == 0) {
            a = a / i;
            add = add + 1;
        }
        if(add >= 2) {
            printf("%d^%d ", i, add);
        } else if(add == 1) {
            printf("%d ", i);
        }
    }
}
int main() {
    int n;
    scanf("%d", &n);
    operationFun(n);
    printf("\n");
}
