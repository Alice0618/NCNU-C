/*
展瑩祕密探員上禮拜成功送出加密後的資料了，但是尷尬的是，他忘記要解密了，因此請大家寫一個程式，幫忙把密文可以還原回來。

1.送出一串數字（密文），同時送出一個 key(也是數字)。
2.接下來程式把密文反轉。
3.反轉後，把密文的第一個數字減掉下一個數字，來還原第一個明文。
4.若前一個密文比下一個密文小，則前一個密文先 +10，再減去下一個。
5.以此類推，就能還原所有的明文（除了最後一個密文，因為最後一個數字沒有下一個數字可以減）。
6.要還原最後一個明文，要靠最後一個密文 減掉 key。
*/

#include <stdio.h>

int decode(int key, int encode_num) {
    int decode_num = 0, tmp1 = -1, tmp2 = -1;
    while ( encode_num != 0 ){
        if(tmp1 == -1){
            tmp1 = encode_num % 10;
            encode_num = encode_num / 10;
        }else{
            tmp2 = encode_num % 10;
            encode_num = encode_num / 10;
            decode_num = decode_num * 10 + (tmp1 + 10 - tmp2) % 10;
            tmp1 = tmp2;
        }
    }
    decode_num = decode_num * 10 + (tmp1 + 10 - key) % 10;
    return decode_num;
}

int main()
{
    int encode_num, key;
    scanf("%d %d", &encode_num, &key);
    int decode_num = decode(key, encode_num);
    printf("%d\n", decode_num);
    return 0;
}
