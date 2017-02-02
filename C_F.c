#include <stdio.h>
int main() {
    char n;
    float num;
    scanf("%c %f", &n, &num);
    // 攝氏轉華氏
    // 華氏轉攝氏
    if(n == 'C') {
        num = num * 9 / 5 + 32;
        printf("F %f", num);
    } else {
        num = (num - 32) * 5 / 9;
        printf("C %f", num);
    }
}
