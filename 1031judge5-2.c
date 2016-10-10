#include <stdio.h>
int recursive(int a) {
    if(a > 0) {
        return a * recursive(a - 1);
    } else {
        return 1;
    }
}
int operationFun(int b) {
    int i, add;
    for(i = 2; i <= b; i++) {
        add = 0;
        while(b % i == 0) {
            b = b / i;
            add = add + 1;
        }
        if(add > 0) {
            printf("%d ", add);
        }
    }
}
int main() {
    int n, sum;
    scanf("%d", &n);
    printf("%d! = %d\n", n, recursive(n));
    sum = recursive(n);
    operationFun(sum);
    printf("\n");
}
