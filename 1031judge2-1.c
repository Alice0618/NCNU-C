/*
第二代中華民國公益彩券從 2007 年開始，由中國信託商業銀行發行。而 2007至 2013 年，平均每月有近 20 億的盈餘。
盈餘按照一定比例分給國民年金、全民健康保險，以及各直轄市、縣(市)政府使用。因此阿麟想自己開彩券公司，大賺一筆順便報效國國家。

首要之務，是讓開獎號碼要隨機且不重複。請你幫助阿麟，寫一個開獎程式。每次讓程式隨機產生一筆獎號，範圍為 01~38 中六個不重複號碼。
*/

#include <stdio.h>
#include <stdlib.h>
int main() {
    int i, j, num[38], tmp;
    for(i = 0; i < 38; i++) {
        num[i] = i + 1;
    }

    for(i = 0; i < 38; i++) {
        j = rand() % 38 + 1;
        tmp = num[i];
        num[i] = num[j];
        num[j] = tmp;
    }

    for(i = 0; i < 6; i++) {
        for(j = i + 1; j < 6; j++) {
            if(num[i] > num[j]) {
                tmp = num[i];
                num[i] = num[j];
                num[j] = tmp;
            }
        }
    }
    for(i = 0; i < 6; i++) {
        printf("%02d ", num[i]);
    }
    printf("\n");
}
