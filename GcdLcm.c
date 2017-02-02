#include <stdio.h>
#include <stdlib.h>
// 最大公因數
int gcd(int a, int b) {
    // if(a > b) {
    //     int tmp = a;
    //     a = b;
    //     b = tmp;
    // }
    while(b != 0) {
        int c = a % b;
        a = b;
        b = c;
    }
    return a;
}
// 最小公倍數
int lcm(int a, int b) {
   return a * b / gcd(a, b);
}
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Gcd = %d\n", gcd(a, b));
    printf("Lcm = %d", lcm(a, b));
}
