#include <stdio.h>
int func(int x) {
    if(x == 1) {
        return 1;
    } else if(x >= 2 && x % 2 == 0) {
        return func(x - 1) - x;
    } else if(x >= 2 && x % 2 != 0) {
        return x + func(x - 1);
    }
}
int main() {
    int i, num;
    scanf("%d", &num);
    printf("1");
    for(i = 2; i <= num; i++) {
        if(i % 2 == 0) {
            printf(" - %d", i);
        } else if(i % 2 != 0) {
            printf(" + %d", i);
        }
    }
    printf(" = %d\n", func(num));
}
