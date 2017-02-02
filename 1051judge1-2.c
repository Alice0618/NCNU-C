#include <stdio.h>
int main() {
    for(;;) {
        int month, n, i;
        scanf("%d %d", &month, &n);
        double get[n], min;

        for(i = 0; i < n; i++) {
            scanf("%lf", &get[i]);
            // 特殊月份
            if(9 <= month && month <= 12 || month == 1) {
                // 判斷銷售件數並計算紅利
                if(get[i] <= 500) {
                    get[i] = 10000 + get[i] * 88.2;
                } else if(501 <= get[i] && get[i] <= 600) {
                    get[i] = 10000 + 500 * 88.2 + (get[i] - 500)*111.1;
                } else if(601 <= get[i] && get[i] <= 700) {
                    get[i] = 10000 + 500 * 88.2 + 100 * 111.1 + (get[i] - 600)*141.4;
                } else if(701 <= get[i] && get[i] <= 800) {
                    get[i] = 10000 + 500 * 88.2 + 100 * 111.1 + 100 * 141.4 + (get[i] - 700)*173.2;
                } else if(801 <= get[i] && get[i] <= 900) {
                    get[i] = 10000 + 500 * 88.2 + 100 * 111.1 + 100 * 141.4 + 100 * 173.2 + (get[i] - 800)*200;
                } else if(901 <= get[i]) {
                    get[i] = 10000 + 500 * 88.2 + 100 * 111.1 + 100 * 141.4 + 100 * 173.2 + 100 * 200 + (get[i] - 900)*188.2;
                }
            } else {
                // 判斷銷售件數並計算紅利
                if(get[i] <= 500) {
                    get[i] = 10000 + get[i] * 50;
                } else if(501 <= get[i] && get[i] <= 600) {
                    get[i] = 10000 + 500 * 50 + (get[i] - 500)*55.5;
                } else if(601 <= get[i] && get[i] <= 700) {
                    get[i] = 10000 + 500 * 50 + 100 * 55.5 + (get[i] - 600)*66.78;
                } else if(701 <= get[i] && get[i] <= 800) {
                    get[i] = 10000 + 500 * 50 + 100 * 55.5 + 100 * 66.78 + (get[i] - 700)*88.87;
                } else if(801 <= get[i] && get[i] <= 900) {
                    get[i] = 10000 + 500 * 50 + 100 * 55.5 + 100 * 66.78 + 100 * 88.87 + (get[i] - 800)*135.7;
                } else if(901 <= get[i]) {
                    get[i] = 10000 + 500 * 50 + 100 * 55.5 + 100 * 66.78 + 100 * 88.87 + 100 * 135.7 + (get[i] - 900)*179.8;
                }
            }
            printf("No.%d salary: %lf\n", i + 1, get[i]);
        }

        int tmp = 0;
        min = get[1];
        for(i = 0; i < n; i++) {
            if(min > get[i]) {
                // min = get[i];
                tmp = i;
            }
        }
        printf("No.%d saleman is the worst in this month.", tmp + 1);
    }
}
