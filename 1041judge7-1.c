/*
大家的學姊的老師的程式設計課的 TA 的 TA 的學妹小青最近好像剛上幼稚園，最近剛開始學數數字，小青從 1 開始數，
天資聰穎的正在念幼稚園的小青突發奇想的想知道剛剛自己數的數字中有幾個 5，然後還想把有 5 的數字都列出來，
請各位同學幫幫大家的學姊的老師的程式設計課的 TA 的 TA 的學妹小青吧！

1 到某個數之中包含多少個 5
*/

#include<stdio.h>
//算有幾個5
int get(int input) {
    int count = 0;
    while(input != 0) {
        if(input%10 == 5)
            count++;
        input /= 10;
    }
    return count;
}
//是否含有5
int isWant(int input){
    if(get(input) > 0)
        return 1;
    else return 2;
}
int main() {
    //allcount為總共有多少5,count為有多少含5的數
    int allcount = 0, i, input, count = 0;
    scanf("%d", &input);
    for(i = 1; i <= input; i++) {
        allcount = allcount + get(i);
        //i有含5就print出來 並將count加一
        if(isWant(i) == 1) {
            printf("%d ", i);
            count++;
        }
    }
    printf("\n%d numbers include %d five", count, allcount);
}
