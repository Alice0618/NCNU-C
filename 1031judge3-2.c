#include <stdio.h>
#include <stdlib.h>
int getFun(int a) {
    int b = 1, add = 1;
    while(b % a != 0) {
        b = b * 10 + 1;
        add = add + 1;
    }
    return add;
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", getFun(n));
}
