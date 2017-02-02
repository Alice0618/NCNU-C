/*
展瑩是一名祕密探員，他希望他送出的所有訊息都經過加密。因此他想到一種加密方法。

1.送出一串數字，同時送出一個 key(也是數字)。
2.接下來程式把數字反轉。
3.反轉後，把明文的第一個數字加上 key 的數字，產生第一個密文數字。
4.接下來的明文數字，要加上前一個密文數字，來產生接下去的密文。
5.以此類推，就能得到一個長的不一樣的數字，達到加密效果。

若明文和密文
相加的結果大於 10，則取個位數為新的密文。請寫出加密程式。
*/

#include <stdio.h>
int cipher(int key, int num) {
    int cipher_number = 0;
    while (num != 0){
        // printf("%d\n", key);
        key = (key + (num % 10)) % 10;
        cipher_number =  cipher_number * 10 + key;
        num = num / 10;
    }
    return cipher_number;
}

int main()
{
    int key, num;
    scanf("%d",&key);
    scanf("%d",&num);
    printf("%d\n", cipher(key, num));
}
