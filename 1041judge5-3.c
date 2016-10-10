#include <stdio.h>
int operationFun(int a) {
    int i, add;
    for(i = 2; i <= a; i++) {
        add = 0;
        while(a % i == 0) {
            a = a / i;
            add = add + 1;
        }
        if(add >= 2) {
            printf("%d^%d ", i, add);
        } else if(add == 1) {
            printf("%d ", i);
        }
    }
}
int main() {
    int n;
    scanf("%d", &n);
    operationFun(n);
    printf("\n");
}
