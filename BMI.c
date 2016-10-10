/*
* File Name : BMI.c
* ID : 104213018
* Author : 蔣青嵐
*/
#include <stdio.h>
int main() {
    double h, w, BMI; // 宣告身高, 體重, BMI
    scanf("%lf %lf", &h, &w); // 輸入身高, 體重
    BMI = w / ((h / 100) * (h / 100)); // 計算BMI值
    if(18.5 > BMI) { // 印出BMI結果
        printf("%lf 過輕\n", BMI);
    } else if(18.5 <= BMI && BMI < 24) {
        printf("%lf 標準\n", BMI);
    } else {
        printf("%lf 過重\n", BMI);
    }
}
