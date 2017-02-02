/*
哈密瓜的味道，有些人喜歡，有些人不喜歡。
哈味嬸想要知道到底有多少人喜歡哈密瓜，於是上街四處尋找路人訪問，但是因為之後的統計太麻煩，哈味嬸想請妳寫一支程式來幫幫忙。

哈味嬸隨機找了 5000 位路人做調查，且第1000、2000、3000、4000、5000 位剛好喜歡哈密瓜的人，哈味嬸便會準備一份禮物送他。
請用隨機亂數表示路人喜歡或不喜歡哈密瓜的結果，並列出喜歡哈密瓜的人數及不喜歡哈密瓜的人數以及哈味嬸應該要送出幾份禮物。
*/

#include<stdio.h>
#include<stdlib.h>
#include <time.h>
//1為喜歡 判斷是否為喜歡哈密瓜的人 如果是就+1最後回傳
int yes(int a[]){
    int i,sol = 0;
    for(i = 0; i < 5000; i++){
        if(a[i] == 1)
            sol++;
    }
    return sol;
}
//由第一千位路人開始計算，每一千位挑出來檢查是不是1 是1的話代表喜歡 需要送出的禮物就+1最後回傳
int gift(int a[]){
    int i,sol = 0;
    for(i = 999; i < 5000; i += 1000){
        if(a[i] == 1)
            sol++;
    }
    return sol;
}
int main(){
    srand(time(NULL));
    //放路人結果用的陣列
    int a[5000];
    int i;
    //隨機訪問路人的結果
    for(i = 0; i < 5000; i++){
        a[i]=(rand() % 2) + 1;
    }
    printf("%d people like the smell.\n", yes(a));
    //5000-喜歡的就是不喜歡的人數
    printf("%d people do not like the smell.\n", 5000-yes(a));
    printf("Give out %d gifts.", gift(a));
    return 0;
}
