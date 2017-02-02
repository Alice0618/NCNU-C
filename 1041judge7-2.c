/*
小孩子在加法運算中，被教導從右至左一位一位做加法，並發現了進位的問題:要將『1』從一個數位加入下一個數位，
對剛接觸數學的小孩來說，是種挑戰，最有愛心的安翔跟展瑩，決定寫出一個程式，能計算該次加法運算當中，進位幾次？
*/

#include <stdio.h>
int get(int A, int B) {
    int a, b, add = 0;
    a = A % 10;
    b = B % 10;
    while(a != 0 || b != 0) {
        a = A % 10;
        b = B % 10;
        if(a + b >= 10) {
            add = add + 1;
            A = A / 10 + 1;
        } else {
            A = A / 10;
        }
        B = B / 10;
    }
    return add;
}
int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    printf("%d %d\n", A + B, get(A, B));
}
