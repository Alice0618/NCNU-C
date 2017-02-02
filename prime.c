#include <stdio.h>
int PrimeFun(int n) {
    int i;
    for(i = 2; i < n; i++) {
        // 判斷是否整除
        if(n % i == 0) {
            //非質數, 回傳0
            return 0;
        }
    }
    //質數, 回傳1
    return 1;
}
int main() {
    int n;
    scanf("%d", &n);
    if(n == 1) {
        printf("Both not");
    } else if(PrimeFun(n) == 1) {
        printf("Prime");
    } else {
        printf("Not Prime");
    }
}
