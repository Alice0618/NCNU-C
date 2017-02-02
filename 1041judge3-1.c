/*
因為最近姜姜非常缺錢，所以決定放手賭一把跑去買了他好姊妹小乖乖所經營彩卷行的彩卷，希望中大獎就可以不停地揮霍的買專輯買鞋都買都買。
但是彩券行的開獎機壞了，希望各位同學幫小乖乖用程式弄出一台新的開獎機來!!

會有一個頭獎號碼和其他五個不重複的號碼。首獎必須為質數，結果請按照降冪排列。(由1到55號)
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*判斷是否為質數*/
int isprime(int n){
    int i = n - 1;
    while(i > 1){
        if(n % i == 0){
            return 0;
        }
        i--;
    }
    if(n == 1){
        return 0;
    }
    return 1;
}
/*降冪排序*/
void sort(int data[], int n){
    int j, i, tmp;
    for(i = 1; i < n; i++){
        tmp = data[i];
        j = i - 1;
        while(j >= 0 && tmp > data[j]){
            data[j + 1] = data[j];
            j = j - 1;
        }
        data[j + 1] = tmp;
    }

}
int main(){
    int head, i, j;
    int other[5];
    srand(time(NULL));
    /*設定首獎*/
    head = rand() % 55 + 1;
    while(isprime(head) != 1){
        head = rand() % 55 + 1;
    }
    /*找出其他的數且不與首獎重複*/
    for(i = 0; i < 5; i++){
        other[i] = rand() % 55 + 1;
        // 過濾與首獎相同的
        while(other[i] == head){
            other[i] = rand() % 55 + 1;
        }
        for(j = i - 1; j >= 0; j--){
            if(other[i] == other[j]){
                i--;
                break;
            }
        }
    }
    /*排序*/
    sort(other, 5);
    printf("First price: %02d\n", head);
    printf("Others: ");
    for(i = 0; i < 5; i++){
        printf("%02d ", other[i]);
    }
}
