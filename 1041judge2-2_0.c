/*
瑩瑩上個月很喜歡用鈔票來買東西，導致他這個月身上只剩下一大堆笨重的硬幣可用。
困擾的瑩瑩為了不要讓包包這麼重，他希望之後的每次付錢，都能夠有效率的幫他減輕重量(Hint: 付出去最多的硬幣)。
然而瑩瑩因為已經不想要再收到更多的硬幣，因此只願意買價格「剛好」可以用身上硬幣解決的東西，需要找錢的就算了。
超級懶的瑩瑩又不希望每次付錢時都要算硬幣數量。
所以他需要同學們幫他寫個程式，只要給程式東西的價錢，還有身上硬幣的數量，程式就會告訴瑩瑩要怎麼付錢。

硬幣有分 $50 、 $10 、 $5 、 $1。

1.輸入要買的東西的價錢
2.輸入目前身上每種硬幣的數量，依序為$50, $10, $5, $1
3.物品價格無法被剛好付出，或是價格超過現金時，告訴瑩瑩「沒有錢可以付。」
4.如果可以付的話，輸出每種硬幣應付幾個，以及他們的重量。 重量分別是: $50: 10g 、 $10: 7.5g 、 $5 : 4.4g 、 $1 : 3.8g (g:克)
*/

#include<stdio.h>

int main() {
    int i, j, m ,n;

    int price; // 買東西的價格
    scanf("%d", &price);

    int quantity [4]; // 硬幣數量
    for(i = 0 ; i < 4 ; i++) {
        scanf("%d", &quantity[i]);
    }

    // 各種硬幣在最重的狀況下，每種硬幣的量
    int coin_max_qua = 0;
    int coin_50;
    int coin_10;
    int coin_5;
    int coin_1;

    for(i = 0 ; i <= quantity[0] ; i++) {
        for(j = 0 ; j <= quantity[1] ; j++) {
            for(m = 0 ; m <= quantity[2] ; m++) {
                for(n = 0 ; n <= quantity[3] ; n++) {
                    int money = i * 50 + j * 10 + m * 5 + n * 1; // 當前金額

                    if(money == price) {
                        int tmp_coin_qua = i + j + m + n;
                        if(tmp_coin_qua > coin_max_qua) {
                            coin_max_qua = tmp_coin_qua;
                            coin_50 = i;
                            coin_10 = j;
                            coin_5 = m;
                            coin_1 = n;
                        }
                    }
                }
            }
        }
    }

    if(coin_max_qua != 0) {
        printf("Pay: $50: %d, $10: %d, $5: %d, $1: %d\n", coin_50, coin_10, coin_5, coin_1);
        printf("Weight: %fg\n", 10*coin_50 + 7.5*coin_10 + 4.4*coin_5 + 3.8*coin_1);
    }else{
        printf("No money to pay.\n");
    }
}
