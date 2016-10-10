#include <stdio.h>
int F(int x) {
    // int y;
    // y = F(x - 1) + F(x - 2);
    if(x == 0) {
        return 0;
    } else if(x == 1) {
        return 1;
    } else {
        return F(x - 1) + F(x - 2);
    }
}
int main() {
    int n;
    scanf("%d",&n);
    printf("%d\n", F(n));
}
