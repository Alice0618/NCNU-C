#include <stdio.h>
int lenFun(int n) {
    int count = 1;
    while (n != 1) {
        count = count + 1;
        if(n % 2 == 1) {
            n = 3 * n + 1;
        } else {
            n = n / 2;
        }
    }
    return count;
}
int main() {
    int sta, end, i, tmp = 0;
    scanf("%d %d", &sta, &end);
    for(i = sta; i <= end; i++) {
        if(lenFun(i) > tmp) {
            tmp = lenFun(i);
        }
    }
    printf("%d %d %d\n", sta, end, tmp);
}
