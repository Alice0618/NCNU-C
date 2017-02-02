#include <stdio.h>
#include <stdlib.h>
int main() {
    int x;
    scanf("%d", &x);
    int a = x / 365, b = x % 365 / 30, c = x % 365 % 30;
    printf("%d years\n%d months\n%d days\n", a, b, c);
}
