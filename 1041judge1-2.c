/*
因為忍者小學要分位子的時候，佐助和鳴人都會打一次架，小櫻會在旁邊蠢蠢欲動，讓老師覺得超級頭痛的，
所以為了讓分位子的事件可以平安圓滿的落幕，伊魯卡老師決定請程設小王子幫忙寫個公平的程式來幫忙分位子，這樣他就可以提早下班去吃一樂拉麵了。
所以請同學寫一個程式來幫助小王子吧！

1.依魯卡老師的班上一共有 n 個人，座號由 1 到 n，並以 7 個為一列，請同學印出用亂數排好的座位順序。號碼不要重複。
2.有轉學的可能，所以要能刪除該轉學號碼座位並讓轉學號碼以『XX』呈現。
*/

#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, m, per, i, j, tmp, check;
    scanf("%d", &n);
    int num[n];
    // int num_1[m];
    for(i = 0; i < n; i++) {
        num[i] = i + 1;
    }
    for(i = 0; i < n; i++) {
        j = rand() % n;
        tmp = num[i];
        num[i] = num[j];
        num[j] = tmp;
    }
    for(i = 0; i < n; i++) {
        printf("%2d ", num[i]);
        if(i % 7 == 6) {
            printf("\n");
        }
    }
    printf("\n");

    scanf("%d", &m);
    int num_1[m];
    for(i = 0; i < m; i++) {
        scanf("%d", &per);
        num_1[i] = per;
    }

    for(i = 0; i < n; i++) {
        check = 0;
        for(j = 0; j < m; j++){
            if(num[i] == num_1[j]) {
                check = 1;
                // printf("XX");
            }
        }
        if(check == 1) {
            printf("XX ");
        } else {
            printf("%2d ", num[i]);
        }
        if(i % 7 == 6) {
            printf("\n");
        }
    }
    printf("\n");
}
