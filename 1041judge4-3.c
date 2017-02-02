/*
展瑩說故事時間：『三國時期，曹沖自小生性聰慧。某天，孫權曾送給曹操一頭大象，
曹操想知道大象的重量，問遍了手下的人，都想不出秤象之法，因為沒有那麼大的秤。
曹沖想出一法：把大象放進船裡，記錄水位到達船舷的位置；牽出大象，將石塊往船上裝，直到水位到達先前記錄的位置；
然後分批秤出石塊的重量，併疊加得出總重量。』
老俞笑曹沖不過如此，要是依現代科技完全不用這麼費時費力，因此要- 展瑩寫出一個程式能幫曹沖快速解決此問題。

第一行，輸入一個數值 n 表示擁有石頭的數量。
第二行，輸入 n 個數值，表示每塊石頭的重量。
第三行，輸入一個數值，表示大象的重量。
*/

#include <stdio.h>
void weight(int *s, int n, int m, int got, int from, int treeWeight, int * result) {
    int i;
    int tmp;
    if (m == got) {
        int tmpWeight = 0;
        for (i = 0; i < got; i++)
            tmpWeight += s[i];
        if(tmpWeight == treeWeight){
            for (i = 0; i < got; i++)
                printf("%d ", s[i]);
            printf("\n");
            *result = *result + 1;
        }
        return;
    }
    for (i = from; i < n; i++) {
        tmp = s[i];
        s[i] = s[got];
        s[got] = tmp;
        weight(s, n , m, got + 1, i + 1, treeWeight, result);
        tmp = s[i];
        s[i] = s[got];
        s[got] = tmp;
    }
}
int main(){
    int n,i;
    scanf("%d",&n);
    int m[n];
    for(i = 0; i < n; i++)
        scanf("%d",&m[i]);
    int treeWeight,result = 0;
    scanf("%d", &treeWeight);
    for(i = 1; i <= n; i++)
        weight(m,n,i,0,0,treeWeight,&result);
    if (result == 0)
        printf("No answer.\n");
}
