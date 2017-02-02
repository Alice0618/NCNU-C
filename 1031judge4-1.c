/*
英國《每日電訊報》前天報導，美國俄亥俄州大學追蹤 8500 名 10 歲的美國學童吃麥當勞、肯德基、漢堡王及必勝客等速食頻率，
3 年後再比較他們的學業情況，並納入 20 多項可能影響結果的因素。

此研究顯示，52%學童一周吃 1 至 3 次速食，10% 每周吃 4 至 6 次，另有 10% 天天吃，
結果發現，每天吃速食者的科學成績平均 79 分，完全不吃者平均 83 分，類似差距也反映在數學、閱讀科目上。
結果發表在《臨床兒科期刊》（ClinicalPediatrics）。——摘自張渝萍，〈常吃速食孩童 數理成績較差〉，《蘋果日報》，2014/12/22。

對於這個新聞很好奇的天天，想請你幫忙寫一個程式，計算一群每天吃速食的學生，有多少人的成績是否低於平均。
*/

#include <stdio.h>
int main() {
    int n, i, per = 0;
    float average, add = 0;
    scanf("%d", &n);
    int num[n];
    for(i = 0; i < n; i++) {
        // 存分數到陣列中
        scanf("%d", &num[i]);
        add = add + num[i];
    }
    average = add / n;
    printf("average: %f\n", average);
    for(i = 0; i < n; i++) {
        if(num[i] < average) {
            per = per + 1;
        }
    }
    printf("number: %d\n", per);
}
