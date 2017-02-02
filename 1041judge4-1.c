/*
姜姜上次為了中大獎買了一堆彩券回家，可是因為他買太多了所以對起獎來特別吃力，
所以拜託晴晴寫一個可以幫忙對獎的程式，好讓他可以在元旦過年時可以去吃王品牛排飛韓國找他家偶像，過個樂好年。

有一個頭獎（必須為質數），其它五個獎項則予以上獎項不重複。
由我們輸入姜姜的彩券號碼，並且把對中的獎印出。（皆為降冪排列）且必須要可以連續輸入多個彩券號碼，並對獎印出。
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*判斷是否為質數*/
int isprime(int n){
    int i;
    for(i = 2; i < n; i++){
    	if(n % i == 0){
    		return 0;
		}
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
    int our[6];
    int tmp[6];

    srand(time(NULL));
    /*設定首獎*/
    head = rand() % 55 + 1;
    while(isprime(head) != 1){
        head = rand() % 55 + 1;
    }
    /*找出其他的數且不與首獎重複*/
    for(i = 0; i < 5; i++){
        other[i] = rand() % 55 + 1;
        while(other[i] == head){//過濾與首獎相同的
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

    /*比對使用的*/
    tmp[0] = head;
    for(i = 1; i < 6; i++){
        tmp[i] = other[i - 1];
    }
    sort(tmp, 6);

    printf("First price: %02d\n", head);
    printf("Others: ");
    for(i = 0; i < 5; i++){
        printf("%02d ", other[i]);
    }

    for(;;){
        printf("\n");
        /*輸入彩券號碼*/
        for(i = 0; i < 6; i++){
            scanf("%d", &our[i]);
        }

        printf("Numbers: ");
        /*中獎號碼*/
        for(i = 0; i < 6; i++){
            for(j = 0; j < 6; j++){
                if(tmp[i] == our[j]){
                    printf("%02d ", our[j]);
                }
            }
        }
    }
}
