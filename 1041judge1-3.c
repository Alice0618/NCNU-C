#include <stdio.h>
int main() {
    int month, use;
    float mon;
    scanf("%d %d", &month, &use);
    // 判斷月份
    if(6 <= month && month <= 9) {
        // 判斷度數
        if(use <= 120) {
            mon = use * 2.10;
        } else if(121 <= use && use <= 330) {
            mon = 120 * 2.10 + (use - 120)*3.02;
        } else if(331 <= use && use <= 500) {
            mon = 120 * 2.10 + 210 * 3.02 + (use - 330)*4.39;
        } else if(501 <= use && use <= 700) {
            mon = 120 * 2.10 + 210 * 3.02 + 170 * 4.39 + (use - 500)*5.44;
        } else if(701 <= use && use <= 1000) {
            mon = 120 * 2.10 + 210 * 3.02 + 170 * 4.39 + 200 * 5.44 + (use - 700)*6.16;
        } else if(1001 <= use) {
            mon = 120 * 2.10 + 210 * 3.02 + 170 * 4.39 + 200 * 5.44 + 300 * 6.16 + (use - 1000)*6.71;
        }
    } else {
        // 判斷度數
        if(use <= 120) {
            mon = use * 2.10;
        } else if(121 <= use && use <= 330) {
            mon = 120 * 2.10 + (use - 120)*2.68;
        } else if(331 <= use && use <= 500) {
            mon = 120 * 2.10 + 210 * 2.68 + (use - 330)*3.61;
        } else if(501 <= use && use <= 700) {
            mon = 120 * 2.10 + 210 * 2.68 + 170 * 3.61 + (use - 500)*4.48;
        } else if(701 <= use && use <= 1000) {
            mon = 120 * 2.10 + 210 * 2.68 + 170 * 3.61 + 200 * 4.48 + (use - 700)*5.03;
        } else if(1001 <= use) {
            mon = 120 * 2.10 + 210 * 2.68 + 170 * 3.61 + 200 * 4.48 + 300 * 5.03 + (use - 1000)*5.28;
        }
    }
    printf("%f\n", mon);
}
