/*
某天，展瑩因為出上機考題覺得有點煩悶，突然想玩懷舊遊戲『爆爆王』，
但卻因為辦帳號時，使用身份證字號產生機（非法）而無法進入遊戲，展瑩十分納悶，並上網研究。

原來，我國的身份證字號有以下基本規定:
1.英文代碼（戶籍地）轉為數字。（如：A = 10, B = 11, C = 12…以此類推）。
2.英文轉成數字後，個位數字乘以 9 再加上十位數字。
3.往後 8 個數字從左至右乘以 8、7、6、5、4、3、2、1。
4.求出（2）、（3）以及最後一碼之和。
5.判斷（4）是否能被 10 整除。若能，則為 Real；若不能，則為 Fake。

請幫展瑩寫出一個能判斷身份證字號是否真實存在的程式。
*/

#include <stdio.h>
int main() {
    char ID[10];
    int ID_num[10], sum = 0;
    scanf("%s", ID);
    int i;
    for(i = 1; i < 10; i++) {
        ID_num[i] = ID[i] - '0';
    }
    ID_num[0] = ID[0] - 55;
    for(i = 1; i < 10; i++) {
        sum = sum + ID_num[i] * (9 - i);
    }
    if((ID_num[0] % 10 * 9 + ID_num[0] / 10 + sum + ID_num[9]) % 10 != 0) {
        printf("Fake\n");
    } else {
        printf("Real\n");
    }
}
