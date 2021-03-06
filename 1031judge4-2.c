/*
親愛的日記：昨天，悅悅我的女朋友（不是我的右手，也不是我的左手）問我說：「你還記得，我們第一次約會的日期嗎？」其實我忘了，
但是，悅悅我知道那天原本要去吃一家餐廳，那家餐廳禮拜一沒開，而且那天沒吃到，又記得是在 2015 年的聖誕節後的第一個禮拜一，
悅悅我找到了一個方式可以依照日期算出禮拜幾，
算法是這樣的，把年份減掉 2000，並計算 2000/1/1 到那天經過了幾個閏日（閏年的 2/29），
加上月份的神秘數字 1~12 月分別是 {5, 1, 1, 4, 6, 2, 4, 0, 3, 5, 1, 3}，再加上日期數字，
那得到的數字除以 7 取餘數就可以知道是禮拜幾。

舉個例子來說： 2016/7/8的話，2016 - 2000 + 5 + 4 + 8 = 33， 33/7 = 4 餘 5。所以今天是禮拜五。

若是 2000 年之前的話，就把跟 2000年的年份差跟閏日設定為負數。一樣可以算出來星期幾，來，求求你寫個程式幫悅悅度過難關。
*/

#include <stdio.h>
int main() {
    int year, month, date, day;
    int month_num[12] = {5, 1, 1, 4, 6, 2, 4, 0, 3, 5, 1, 3};
    scanf("%d %d %d", &year, &month, &date);
    if(year > 2000) {
        day=((year-2000)+(year-2000)/4+1+month_num[month-1]+date)%7;
    } else {
        day=((year-2000)-(year-2000)/4+month_num[month-1]+date)%7;
    }
    printf("%d\n", day);
}
