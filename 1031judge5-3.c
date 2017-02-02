/*
設計一個 function 來計算出 1-2+3-4… … +n，並印出過程。
可愛又可口的煉乳剛上暨大資管系，程式設計課的老師是俞旭昇老師，是學長姐口中有名又可怕的大刀，老師在跨年前出了一個題目，叫同學們回去做。

聰明的 Mirase 為了解救煉乳的跨年作業，決定出手相助!!!

題目是這樣的： 設計一個 function 來計算出 1-2+3-4... ... +n,並印出過程。
*/

#include <stdio.h>
int func(int x) {
    if(x == 1) {
        return 1;
    } else if(x >= 2 && x % 2 == 0) {
        return func(x - 1) - x;
    } else if(x >= 2 && x % 2 != 0) {
        return x + func(x - 1);
    }
}
int main() {
    int i, num;
    scanf("%d", &num);
    printf("1");
    for(i = 2; i <= num; i++) {
        if(i % 2 == 0) {
            printf(" - %d", i);
        } else if(i % 2 != 0) {
            printf(" + %d", i);
        }
    }
    printf(" = %d\n", func(num));
}
