/*
放寒假了，四名 TA 在寒假時很無聊，決定來打簡單版的 21 點解解悶。
不看花色只算點數，A 到 K 就是 1 點到 13點，最接近 21 點為贏家，最輸的要幫老俞跑腿買麥當當一整個學期，快點來寫一個程式看看誰輸誰贏吧!
*/

#include <stdio.h>
#include <stdlib.h>
int main() {
    int i, j, card[52], tmp, sum = 0;
    char pic[] = {'C', 'D', 'H', 'S'};
    char num[] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};
    for(i = 0; i<52; i++) {
        card[i] = i;
    }
    for(i = 0; i < 52; i++) {
        j = rand() % 52;
        tmp = card[i];
        card[i] = card[j];
        card[j] = tmp;
    }
    for(i = 0; i < 4; i++) {
        sum = card[2*i]%13+card[2*i+1]%13;
        printf("Player %d :\n", i+1);
        printf("Sum is %d ", sum+2);

        printf("%c", pic[ card[2*i]/13 ] );
        printf("%c ", num[ card[2*i]%13 ]);

        printf("%c", pic[ card[2*i+1]/13 ]);
        printf("%c\n", num[ card[2*i+1]%13 ]);
    }
}
