/*
大大兵國小每次升旗時，常常大家會打在一起。原來是大大兵很喜歡看到小鮮肉校長，
但是大大兵們目前是用座號排隊，導致後面的同學看不到小鮮肉校長就會爆怒。
因此老師決定換成照身高排隊，這樣大家就可以盡情的看小鮮肉校長了。

每個大大兵都有自己獨一無二的座號，並且有分男生跟女生。他們的身高都以亂數分配，男生的身高在 400~500cm，女生的身高在 300~400cm。
產生完大大兵資料後，請以身高由低到高排序。 輸出排序後每個大大兵的座號與身高，以及男女要分成兩列。
*/

#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i, j, tmp,  boy, girl, boyH, girlH;
    scanf("%d", &n);
    int num[n];
    boy = rand() % n + 1;
    girl = n - boy;
    printf("男生%d人 女生%d人\n", boy, girl);
    for(i = 0; i < n; i++) {
        num[i] = i + 1;
    }
    for(i = 0; i < n; i++) {
        j = rand() % n;
        tmp = num[i];
        num[i] = num[j];
        num[j] = tmp;
    }
    for(i = 1; i <= boy; i++) {
        boyH = rand() % 101 + 400;
        printf("No: %d, Height: %d cm\n", num[i - 1], boyH);
    }
    for(i = 1; i <= girl; i++) {
        girlH = rand() % 101 + 300;
        printf("No: %d, Height: %d cm\n", num[i - 1 + boy], girlH);
    }
}
