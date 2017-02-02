#include <stdio.h>
int fun(int n) {
    int add = 1;
    while (n != 1) {
        add = add + 1;
        if(n % 2 == 1) {
            n = 3 * n + 1;
        } else {
            n = n / 2;
        }
    }
    return add;
}
int main() {
    int i, sta, end, tmp = 0;
    scanf("%d %d", &sta, &end);
    for(i = sta; i <= end; i++) {
        if(fun(i) > tmp) {
            tmp = fun(i);
        }
    }
    printf("%d %d %d", sta, end, tmp);
}
