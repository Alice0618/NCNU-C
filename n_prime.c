#include <stdio.h>
int prime(int n) {
    int i;
    for(i = 2; i < n; i++) {
        if(n % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int i, a, b, add = 0;
    scanf("%d %d", &a, &b);
    for(i = a; i <= b; i++) {
        if(prime(i) == 1) {
            add = add + 1;
        }
    }
    if(a == 1) {
        printf("%d", add - 1);
    } else {
        printf("%d", add);
    }
}
